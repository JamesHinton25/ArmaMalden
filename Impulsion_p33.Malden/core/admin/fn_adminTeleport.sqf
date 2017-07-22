#include "..\..\script_macros.hpp"

if (FETCH_CONST(life_adminlevel) < 3) exitWith {closeDialog 0;};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

openMap [true, false];

onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call life_fnc_teleport";