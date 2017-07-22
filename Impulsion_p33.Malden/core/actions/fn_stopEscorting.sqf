#include "..\..\script_macros.hpp"
/*
	@fichier : fn_stopEscorting.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private["_unit"];

_unit = player getVariable ["escortingPlayer",objNull];

if (isNull _unit) then {_unit = cursorTarget;};
if (isNull _unit) exitWith {};
if (!(_unit getVariable ["Escorting",false])) exitWith {};
if (side _unit != civilian) exitWith {};

detach _unit;

_unit setVariable ["Escorting",false,true];
player setVariable ["currentlyEscorting",nil];
player setVariable ["isEscorting",false];
