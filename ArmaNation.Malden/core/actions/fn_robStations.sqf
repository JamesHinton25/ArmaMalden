/*
	@fichier : fn_robStations.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];

_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;
_rip = false;

if (side _robber != civilian) exitWith { hint "Tu ne peux pas braquer cette station!" };
if (_robber distance _shop > 5) exitWith { hint "Vous devez être à 5 mètres pour braquer!" };
if (vehicle player != _robber) exitWith { hint "Vous ne devez pas être dans un véhicule!" };

if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "Vous ne possédez aucune arme!" };
if (_rip) exitWith { hint "Braquage déjà en cours!" };

if (license_civ_brinks) exitWith { hint "Vous ne pouvez pas braquer qui vous fait vivre." };

_rip = true;
_kassa = 15000 + round(random 20000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";

_cops = (west countSide playableUnits);
if(_cops < 2) exitWith { hint "Pas assez de gendarmes connecté pour continuer!"; };

[1,format["ALARM! - Station: %1 se fait braquer!", _shop]] remoteExec ["life_fnc_broadcast",west];

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Braquage (1%1)","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;

if(_rip) then
{
	while{true} do
	{
		sleep 1;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Braquage (%1%2)",round(_cP * 100),"%"];
		_Pos = position player;
		_marqueur1 = createMarker ["zone_conflit", _Pos];
		"zone_conflit" setMarkerColor "ColorBlack";
		"zone_conflit" setMarkerText "Station Braquée";
		"zone_conflit" setMarkerType "KIA";
		_marqueur2 = createMarker ["diago_rouge", _Pos];
		"diago_rouge" setMarkerColor "ColorRed";
		"diago_rouge" setMarkerShape "ellipse";
		"diago_rouge" setMarkerBrush "FDiagonal";
		"diago_rouge" setMarkerSize [60,60];
		_marqueur3 = createMarker ["bordure_noire", _Pos];
		"bordure_noire" setMarkerColor "ColorBlack";
		"bordure_noire" setMarkerShape "ellipse";
		"bordure_noire" setMarkerBrush "Border";
		"bordure_noire" setMarkerSize [60,60];

		if(_cP >= 1) exitWith {};
		if(_robber distance _shop > 10.5) exitWith { };
		if!(alive _robber) exitWith {};
	};

	if!(alive _robber) exitWith { _rip = false; };
	if(_robber distance _shop > 10.5) exitWith
	{
		deleteMarker "zone_conflit";
		deleteMarker "diago_rouge";
		deleteMarker "bordure_noire";
		_shop switchMove "";
		hint "Vous devez rester à - de 10 mètres pour continuer!";
		5 cutText ["","PLAIN"];
		_rip = false;
	};

	5 cutText ["","PLAIN"];

	titleText[format["Vous avez pris %1 €",[_kassa] call life_fnc_numberText],"PLAIN"];
	deleteMarker "zone_conflit";
	deleteMarker "diago_rouge";
	deleteMarker "bordure_noire";
	life_cash = life_cash + _kassa;

	_rip = false;
	life_use_atm = false;
	sleep (30 + random(180));
	life_use_atm = true;
	if!(alive _robber) exitWith {};
	[getPlayerUID _robber,name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
};
sleep 300;
_action = _shop addAction["Braquer Station",life_fnc_robStations];
_shop switchMove "";
