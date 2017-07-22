#include "..\..\script_macros.hpp"

private ["_val","_total"];

_val = [_this,0,"",["",0]] call BIS_fnc_param;
_total = [_this,1,"",["",0]] call BIS_fnc_param;

if (_val isEqualTo _total) then
{
    hint parseText format [localize "STR_Cop_BountyRecieve",[_val] call life_fnc_numberText];
}
else
{
    hint parseText format [localize "STR_Cop_BountyKill",[_val] call life_fnc_numberText,[_total] call life_fnc_numberText];
};

BANK = BANK + _val;