#include "..\..\script_macros.hpp"

private "_target";
_target = param [0,ObjNull,[ObjNull]];

if (isNull _target) exitWith {};
if (!isPlayer _target) exitWith {};
if (player distance _target > 4) exitWith {};

life_knockout = true;

[player,"AwopPercMstpSgthWrflDnon_End2"] remoteExecCall ["life_fnc_animSync",RCLIENT];

sleep 0.08;

[_target,profileName] remoteExec ["life_fnc_knockedOut",_target];

sleep 3;
life_knockout = false;