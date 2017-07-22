#include "..\..\script_macros.hpp"
/*
    File: fn_lockHouse.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Unlocks / locks the house.
*/
private["_house"];
_house = param [0,ObjNull,[ObjNull]];
if (isNull _house || !(_house isKindOf "House_F")) exitWith {};

_state = _house getVariable ["locked",true];
if (_state) then {
    _house setVariable ["locked",false,true];
    hint parseText localize "STR_House_StorageUnlock";
} else {
    _house setVariable ["locked",true,true];
    hint parseText localize "STR_House_StorageLock";
};