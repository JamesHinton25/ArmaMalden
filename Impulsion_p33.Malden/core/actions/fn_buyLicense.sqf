#include "..\..\script_macros.hpp"
/*
	@fichier : fn_buyLicense.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_type", "_varName", "_displayName", "_sideFlag", "_price"];

_type = _this select 3;

if (!isClass (missionConfigFile >> "Licenses" >> _type)) exitWith { };

_varName = M_CONFIG(getText,"Licenses",_type,"variable");
_displayName = M_CONFIG(getText,"Licenses",_type,"displayName");
_price = M_CONFIG(getNumber,"Licenses",_type,"price");
_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
_varName = LICENSE_VARNAME(_varName,_sideFlag);

if (CASH < _price) exitWith {
    hint parseText format [localize "STR_NOTF_NE_1",[_price] call life_fnc_numberText,localize _displayName];
};
CASH = CASH - _price;

hint parseText format [localize "STR_NOTF_B_1", localize _displayName,[_price] call life_fnc_numberText];

missionNamespace setVariable [_varName,true];
