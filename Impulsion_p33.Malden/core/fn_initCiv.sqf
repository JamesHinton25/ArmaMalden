#include "..\script_macros.hpp"

private["_spawnPos"];

civ_spawn_5 = nearestObjects[getMarkerPos  "civ_spawn_5", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
//civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];

waitUntil {!(isNull (findDisplay 46))};

if (life_is_alive && !life_is_arrested) then
{
    player setVehiclePosition [life_civ_position, [], 0, "CAN_COLLIDE"];
}
else
{
    if (!life_is_alive && !life_is_arrested) then
    {
        if (LIFE_SETTINGS(getNumber,"save_civilian_positionStrict") isEqualTo 1) then
        {
            _handle = [] spawn life_fnc_civLoadout;
            waitUntil {scriptDone _handle};
            CASH = 0;
        };
        [] call life_fnc_spawnMenu;
        waitUntil{!isNull (findDisplay 38500)};
        waitUntil{isNull (findDisplay 38500)};
    }
    else
    {
        if (life_is_arrested) then
        {
            life_is_arrested = false;
            [player,true] spawn life_fnc_jail;
        };
    };
};

life_is_alive = true;
player addRating 9999999;

[] call life_fnc_custom;