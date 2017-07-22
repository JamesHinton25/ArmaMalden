#include "..\..\script_macros.hpp"

disableSerialization;

cutRsc ["playerHUD", "PLAIN", 2, false];
[] call life_fnc_hudUpdate;

[] spawn
{
    private["_dam"];
    for "_i" from 0 to 1 step 0 do {
        _dam = damage player;
        waitUntil {(damage player) != _dam};
        [] call life_fnc_hudUpdate;
    };
};
