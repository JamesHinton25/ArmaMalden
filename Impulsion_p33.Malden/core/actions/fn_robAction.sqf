#include "..\..\script_macros.hpp"
/*
	@fichier : fn_robAction.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_target"];
_target = cursorObject;

if (isNull _target) exitWith { };
if (!isPlayer _target) exitWith { };
if (_target getVariable ["robbed",false]) exitWith { };

[player] remoteExecCall ["life_fnc_robPerson",_target];

_target setVariable ["robbed",TRUE,TRUE];
