#include "..\..\script_macros.hpp"

private "_obj";

params [
    ["_target",objNull,[objNull]],
    ["_who","",[""]]
];

if (isNull _target) exitWith {};
if (_target != player) exitWith {};
if (_who isEqualTo "") exitWith {};

hint parseText format [localize "STR_Civ_KnockedOut",_who];
player playMoveNow "Incapacitated";

_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
_obj setPosATL ASLTOATL(visiblePositionASL player);

life_isknocked = true;

player attachTo [_obj,[0,0,0]];
sleep 15;
player playMoveNow "AmovPpneMstpSrasWrflDnon";
detach player;
deleteVehicle _obj;

life_isknocked = false;

player setVariable ["robbed",FALSE,TRUE];