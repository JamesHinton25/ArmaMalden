#include "..\..\script_macros.hpp"
/*
	@fichier : fn_putInCar.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];
if (isNull _unit || !isPlayer _unit) exitWith {};

_nearestVehicle = nearestObjects[getPosATL player,["Car","Ship","Submarine","Air"],10] select 0;
if (isNil "_nearestVehicle") exitWith {hint localize "STR_NOTF_VehicleNear"};

detach _unit;

[_nearestVehicle] remoteExecCall ["life_fnc_moveIn",_unit];

_unit setVariable["Escorting",FALSE,TRUE];
_unit setVariable["transporting",TRUE,TRUE];
