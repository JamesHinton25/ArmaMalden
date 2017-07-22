/*
	@fichier : fn_robNational.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_moldus", "_reb", "_montant", "_ui", "_progress", "_pgText", "_cP", "_rip", "_position"];

_moldus = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_reb = [_this,1,objNull,[objNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;
_rip = false;

if (side _reb != civilian) exitWith { hint "Vous n'êtes pas un civil." };
if (_reb distance _moldus > 10) exitWith { hint "Vous devez rester à dix mètres pour braquer." };
if (vehicle player != player) exitWith { hint "Vous êtes dans un véhicule." };
if (currentWeapon _reb == "") exitWith { hint "Vous n'avez pas d'arme." };
if (_rip) exitWith { hint "Braquage déjà en cours." };
if !(alive _reb) exitWith { hint "?" };
if (license_civ_brinks) exitWith { hint "Vous ne pouvez pas braquer qui vous fait vivre." };

_rip = true;
_montant = 50000 + round(random 40000);
_moldus removeAction _action;
_moldus switchMove "AmovPercMstpSsurWnonDnon";

[1,"La banque nationale est braquée."] remoteExec ["life_fnc_broadcast",west];

_cops = (west countSide playableUnits);
if (_cops < 5) exitWith { hint "Il faut cinq gendarmes pour braquer." };
if (count nearestObject [_moldus, ["Man"], 5] < 3) exitWith { hint "Vous devez être trois à côté du moldus." };

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format ["Braquage (1%1)","%"];
_progress progressSetPosition 0.001;
_cP = 0.00001;

if (_rip) then
{
	while {true} do
	{
		sleep 1;
		_cP = _cP + 0.001;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format ["Braquage (%1%2)",round(_cP * 100),"%"];
		_position = position player;
		_marqueur1 = createMarker ["zone_conflit", _position];
		"zone_conflit" setMarkerColor "ColorOPFOR";
		"zone_conflit" setMarkerText "Zone Conflit";
		"zone_conflit" setMarkerType "KIA";
		_marqueur2 = createMarker ["diago_rouge", _position];
		"diago_rouge" setMarkerColor "ColorRed";
		"diago_rouge" setMarkerShape "ellipse";
		"diago_rouge" setMarkerBrush "FDiagonal";
		"diago_rouge" setMarkerSize [60,60];
		_marqueur3 = createMarker ["bordure_noire", _position];
		"bordure_noire" setMarkerColor "ColorBlack";
		"bordure_noire" setMarkerShape "ellipse";
		"bordure_noire" setMarkerBrush "Border";
		"bordure_noire" setMarkerSize [60,60];

		if (_cP >= 1) exitWith { };
		if (_reb distance _moldus > 10) exitWith { };
		if !(alive _reb) exitWith { };
	};

	if !(alive _reb) exitWith { };
	if (_reb distance _moldus > 10) exitWith {
		deleteMarker "zone_conflit";
		deleteMarker "diago_rouge";
		deleteMarker "bordure_noire";
		_moldus switchMove "";
		hint "Vous devez rester à 10 mètres.";
		5 cutText ["","PLAIN"];
		_rip = false;
	};

	5 cutText ["","PLAIN"];

	titleText[format["+ %1 $",[_montant] call life_fnc_numberText],"PLAIN"];

	deleteMarker "zone_conflit";
	deleteMarker "diago_rouge";
	deleteMarker "bordure_noire";

	life_cash = life_cash + _montant;

	_rip = false;
	life_use_atm = false;
	sleep (30 + random(180));
	life_use_atm = true;

	if !(alive _reb) exitWith { };

	[getPlayerUID _reb, name _reb,"211"] remoteExec ["life_fnc_wantedAdd",2];

};
sleep 1200;
_action = _moldus addAction [localize "STR_MAR_Rob_National",life_fnc_robNational,"",0,false,false,"",' isNull objectParent player && player distance _target < 4 '];
_moldus switchMove "";