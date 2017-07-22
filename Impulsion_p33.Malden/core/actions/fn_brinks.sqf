/*
	@fichier : fn_brinks.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_brinks", "_shop", "_kassa", "_ui", "_progress", "_pgText", "_cP", "_rip", "_pos", "_nombre", "_item"];

_shop = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_brinks = [_this,1,objNull,[objNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;
_rip = false;

if (side _brinks != civilian) exitWith { hint "Vous n'êtes pas un civil." };
if (_brinks distance _shop > 5) exitWith { hint "Vous devez être à 5 mètres pour avoir l'argent." };
if (vehicle player != _brinks) exitWith { hint "Vous ne devez pas être dans un véhicule." };
if !(license_civ_brinks) exitWith { hint "Vous n'êtes pas un brinks." };

if !(alive _brinks) exitWith { };
if (currentWeapon _brinks == "") exitWith { hint "Vous ne possédez aucune arme." };
if (_rip) exitWith { hint "Récupération déjà en cours..." };

_rip = true;
_shop removeAction _action;
_chance = random(100);

_nombre = ceil(random 60);
_item = ["dollars_2K",_nombre,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if (([true,"dollars_2K",_item] call life_fnc_handleInv)) then
{
	[
		1,
		format [
			"Les Brinks ont récupéré un montant, contactez-les pour plus d'informations.",
			_shop
		]
	] remoteExec ["life_fnc_broadcast",west];
}
else
{
	hint "Portez un sac s'il vous plait !";
};

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Récupération (1%1)","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
	while {true} do
	{
		sleep 1;
		_cP = _cP + 0.1;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Récupération (%1%2)",round(_cP * 100),"%"];

		if (playerSide isEqualTo west || license_civ_brinks) then
		{
			_Pos = position player;
			_marqueur1 = createMarker ["zone_conflit", _Pos];
			"zone_conflit" setMarkerColor "ColorBLUFOR";
			"zone_conflit" setMarkerText "Brinks sur Zone";
			"zone_conflit" setMarkerType "KIA";
			_marqueur2 = createMarker ["diago_rouge", _Pos];
			"diago_rouge" setMarkerColor "ColorBlue";
			"diago_rouge" setMarkerShape "ellipse";
			"diago_rouge" setMarkerBrush "FDiagonal";
			"diago_rouge" setMarkerSize [60,60];
			_marqueur3 = createMarker ["bordure_noire", _Pos];
			"bordure_noire" setMarkerColor "ColorBlack";
			"bordure_noire" setMarkerShape "ellipse";
			"bordure_noire" setMarkerBrush "Border";
			"bordure_noire" setMarkerSize [60,60];
		};

		if (_cP >= 1) exitWith {};
		if (_brinks distance _shop > 10.5) exitWith { };
		if !(alive _brinks) exitWith {};
	};

	if !(alive _brinks) exitWith { _rip = false; };

	if (_brinks distance _shop > 10.5) exitWith
	{
		deleteMarker "zone_conflit";
		deleteMarker "diago_rouge";
		deleteMarker "bordure_noire";
		hint "Vous devez rester à - de 10 mètres pour continuer!";
		5 cutText ["","PLAIN"];
		_rip = false;
	};

	5 cutText ["","PLAIN"];

	hint parseText format [localize "STR_NOTF_ReceiveBrinksMoney", _item];
	deleteMarker "zone_conflit";
	deleteMarker "diago_rouge";
	deleteMarker "bordure_noire";
	_rip = false;

	if !(alive _brinks) exitWith { };
};

sleep 300;
_shop switchMove "";
_action = _shop addAction [
	localize "STR_MAR_Brinks_Store",
	life_fnc_brinks,
	"",0,false,false,"",
	' isNull objectParent player && player distance _target < 4 && license_civ_brinks '
];
