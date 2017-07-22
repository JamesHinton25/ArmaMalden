#include "..\..\script_macros.hpp"

if (!alive player || dialog) exitWith { };

createDialog "playerSettings";

disableSerialization;

switch (playerSide) do
{
    case west:
    {
        ctrlShow [2011, false];
        ctrlShow [29011, false];
        ctrlShow [2019, false];
    };
    case civilian:
    {
        ctrlShow [2012, false];
        ctrlShow [29012, false];
        ctrlShow [2999, false];
        ctrlShow [20003, false];
        ctrlShow [290003, false];
        ctrlShow [2017, false];
    };
    case independent:
    {
        ctrlShow [2012, false];
        ctrlShow [29012, false];
        ctrlShow [2011, false];
        ctrlShow [2999, false];
        ctrlShow [2017, false];
    };
};

if (FETCH_CONST(life_adminlevel) < 1) then
{
    ctrlShow [2020, false];
    ctrlShow [2021, false];
    ctrlShow [29021, false];
};

if !(license_civ_brinks) then
{
    ctrlShow [2019, false];
};

[] call life_fnc_p_updateMenu;