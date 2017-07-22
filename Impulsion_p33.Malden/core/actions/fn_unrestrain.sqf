#include "..\..\script_macros.hpp"
/*
	@fichier : fn_unrestrain.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_unit"];

_unit = param [0,ObjNull,[ObjNull]];

if (isNull _unit || !(_unit getVariable ["restrained", false])) exitWith { };

_unit setVariable ["restrained", false, true];
_unit setVariable ["Escorting", false, true];
_unit setVariable ["transporting", false, true];

detach _unit;

[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
