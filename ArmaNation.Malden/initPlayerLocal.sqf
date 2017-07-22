#include "script_macros.hpp"

if (!hasInterface && !isServer) exitWith
{
    [] call compile PreprocessFileLineNumbers "\life_hc\initHC.sqf";
};

#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

CONST(BIS_fnc_endMission,BIS_fnc_endMission);

[] execVM "core\server\init.sqf";
[] execVM "core\functions\fn_fuel.sqf";
[] execVM "core\gangs\fn_gangMarkers.sqf";
[] execVM "core\functions\fn_disableAnimals.sqf";
[] execVM "core\admin\fn_activateScroll.sqf";
