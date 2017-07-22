#include "..\..\script_macros.hpp"
/*
	@fichier : fn_gatherSuub.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_recolt", "_nombreRecolt"];

_nombreRecolt = ceil(random 2);
_recolt = ["oilWater_unprocessed",_nombreRecolt,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if (_recolt > 0) then
{
    life_action_inUse = true;
    titleText [ format [ localize "STR_NOTF_GatherSub" ], "PLAIN" ];
    titleFadeOut 8;
    sleep 8;
    if (([true,"oilWater_unprocessed",_recolt] call life_fnc_handleInv)) then
    {
        titleText[format[localize "STR_NOTF_GatherSuub_Finish",_recolt],"PLAIN"];
    };
};

life_action_inUse = false;
