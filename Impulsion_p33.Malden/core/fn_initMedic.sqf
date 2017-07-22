#include "..\script_macros.hpp"

private["_end"];

player addRating 99999999;

waitUntil {!(isNull (findDisplay 46))};

if ((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith
{
    ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
    sleep 35;
};

if (LIFE_SETTINGS(getNumber,"restrict_medic_weapons") isEqualTo 1) then
{
    [] spawn
    {
        for "_i" from 0 to 1 step 0 do
        {
            waitUntil
            {
                sleep 3;
                currentWeapon player != ""
            };
            removeAllWeapons player;
        };
    };
};

[] call life_fnc_spawnMenu;

waitUntil{!isNull (findDisplay 38500)};
waitUntil{isNull (findDisplay 38500)};