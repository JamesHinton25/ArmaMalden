#include "..\..\script_macros.hpp"

private ["_vehicle"];

_vehicle = param [0,ObjNull,[ObjNull]];

if (isNull _vehicle) exitWith { };
if (!(typeOf _vehicle in [
	"C_Offroad_01_F",
	"B_MRAP_01_F",
	"C_SUV_01_F",
	"C_Hatchback_01_sport_F",
	"B_Heli_Light_01_F",
	"B_Heli_Transport_01_F"
])) exitWith { };

_trueorfalse = _vehicle getVariable ["lights", false];

if (_trueorfalse) then
{
    _vehicle setVariable ["lights", false, true];
}
else
{
    _vehicle setVariable ["lights", true, true];
    [_vehicle,0.22] remoteExec ["life_fnc_copLights",RCLIENT];
};