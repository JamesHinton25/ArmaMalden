#include "..\..\script_macros.hpp"

private ["_marqueurs", "_membresGang"];

_marqueurs = [];
_membresGang = [];

sleep 0.1;

if (visibleMap) then
{
    _membresGang = units grpPlayer;
    {
        _marqueur = createMarkerLocal [format["%1_marqueur", _x], visiblePosition _x];
        _marqueur setMarkerColorLocal "ColorRed";
        _marqueur setMarkerTypeLocal "Mil_dot";
        _marqueur setMarkerTextLocal format ["%1", name _x];
        _marqueurs set[count _marqueurs, [_marqueur, _x]]
    } forEach _membresGang;
    while {visibleMap} do
    {
        {
            private ["_marqueur", "_cible"];
            _marqueur = _x select 0;
            _cible = _x select 1;
            if (!isNil "_cible") then
            {
                if(!isNull _cible) then
                {
                    _marqueur setMarkerPosLocal (visiblePosition _cible);
                };
            };
        } forEach _marqueurs;

        if (!visibleMap) exitWith { };
        sleep 0.5;
    };
    {
        deleteMarkerLocal (_x select 0);
    } forEach _marqueurs;
    _marqueurs = [];
    _membresGang = [];
};