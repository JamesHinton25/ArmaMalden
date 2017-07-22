#include "..\..\script_macros.hpp"
/*
	@fichier : fn_cashOtage.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_valeur", "_action", "_brinkConnected"];

_brinkConnected = { license_civ_brinks } count playableUnits > 0;
_valeur = 250000;

if (license_civ_brinks) then {
	CASH = CASH + _valeur;
	hint format [localize "STR_ANOTF_Success", [_valeur] call life_fnc_numberText];
} else {
	if (_brinkConnected) then {
		hint "Veuillez contacter un brinks afin d'obtenir de l'argent";
	} else {
		CASH = CASH + _valeur;
		hint format [localize "STR_ANOTF_Success", [_valeur] call life_fnc_numberText];
	};
};


if (LIFE_SETTINGS(getNumber,"player_moneyLog") == 1) then {
	if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") == 1) then {
		money_log = format ["Retrait de %1 $ pour prise d'otage. Cash: %2 $", _valeur, [CASH] call life_fnc_numberText];
	} else {
		money_log = format ["%1 - %2 retrait de %3 $ pour prise d'otage. Cash: %4 $", profileName, (getPlayerUID player), _valeur, [CASH] call life_fnc_numberText];
	};
	publicVariableServer "money_log";
};
