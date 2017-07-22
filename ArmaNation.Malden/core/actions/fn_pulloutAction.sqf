#include "..\..\script_macros.hpp"
/*
	@fichier : fn_pulloutAction.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private["_crew"];

_crew = crew cursorObject;

{
    if (side _x != independent) then
    {
        _x setVariable ["transporting", false, true];
        _x setVariable ["Escorting", false, true];
        [_x] remoteExecCall ["life_fnc_pulloutVeh", _x];
    };
} forEach _crew;
