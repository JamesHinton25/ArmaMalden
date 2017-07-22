#include "..\..\script_macros.hpp"
/*
	@fichier : fn_gatherSub.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_recolt", "_nombreRecolt"];

_nombreRecolt = ceil(random 2);
_recolt = ["antiquity",_nombreRecolt,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if (_recolt > 0) then
{
    life_action_inUse = true;
    titleText [ format [ localize "STR_NOTF_GatherSub" ], "PLAIN" ];
    titleFadeOut 8;
    sleep 8;
    if (([true,"antiquity",_recolt] call life_fnc_handleInv)) then
    {
        titleText[format[localize "STR_NOTF_GatherSub_Finish",_recolt],"PLAIN"];
    };
};

life_action_inUse = false;
