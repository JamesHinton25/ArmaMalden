private "_unit";

_unit = lbData[2902,lbCurSel (2902)];
_unit = call compile format["%1", _unit];

if (isNil "_unit") exitWith {};
if (isNull _unit) exitWith {};

[_unit,player] remoteExecCall ["TON_fnc_getID",2];