#include "..\script_macros.hpp"

private "_end";
player addRating 9999999;

waitUntil {!(isNull (findDisplay 46))};
_end = false;

if (life_blacklisted) exitWith
{
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if (!(str(player) in [""])) then
{
    if ((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then
    {
        ["NotWhitelisted",false,true] call BIS_fnc_endMission;
        sleep 35;
    };
};

/*
if (!(str(player) in ["copO_15","copO_14","copO_13","copO_12","copO_11","copO_10","copO_9","copO_8","copO_7","copO_6","copO_5","copO_4","copO_3","copO_2","copO_1"])) then
{
	if ((FETCH_CONST(life_adminlevel) == 0) && !(license_cop_onu)) then
	{
		["NotWhitelisted", false, true] call BIS_fnc_endMission;
		sleep 35;
	};
};
*/

player setVariable["rank",(FETCH_CONST(life_coplevel)),true];

[] call life_fnc_spawnMenu;

waitUntil{!isNull (findDisplay 38500)};
waitUntil{isNull (findDisplay 38500)};

[] spawn life_fnc_placeablesInit;