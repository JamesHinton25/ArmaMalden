#include "..\..\script_macros.hpp"

private "_medicsOnline";

_medicsOnline = { _x != player && {side _x isEqualTo independent} && {alive _x} } count playableUnits > 0;

life_corpse setVariable ["Revive", false, true];

if (_medicsOnline) then
{
    [life_corpse,profileName] remoteExecCall ["life_fnc_medicRequest",independent];
}
else
{
    [life_corpse,profileName] remoteExecCall ["life_fnc_medicRequest",independent];
};

[] spawn
{
    ((findDisplay 7300) displayCtrl 7303) ctrlEnable false;
    sleep (2 * 60);
    ((findDisplay 7300) displayCtrl 7303) ctrlEnable true;
};