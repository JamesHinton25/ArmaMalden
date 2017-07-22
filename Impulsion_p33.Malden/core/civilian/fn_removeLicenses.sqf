#include "..\..\script_macros.hpp"

private "_state";

_state = param [0, 1, [0] ];

switch (_state) do {
    case 0: { };
    case 1: { };
    case 2: { };
    case 3: { };
    case 4:
    {
        missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("trucking","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("pilot","civ"),false];
    };
};