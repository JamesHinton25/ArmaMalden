#include "..\..\script_macros.hpp"

private ["_list","_side"];

if (FETCH_CONST(life_coplevel) < 1) exitWith { closeDialog 0; };

disableSerialization;

waitUntil {!isNull (findDisplay 8900)};

_list = CONTROL(8900,8902);

if (FETCH_CONST(life_coplevel) < 1) exitWith { closeDialog 0; };

lbClear _list;

{
    _side = switch (side _x) do
    {
        case west: { "Cop" };
        case civilian: { "Civ" };
        case independent: { "Medic" };
        default { "wtf" };
    };
    _list lbAdd format [ "%1 - %2", _x getVariable [ "realname", name _x ], _side ];
    _list lbSetdata [ (lbSize _list) -1, str(_x) ];
}
forEach playableUnits;