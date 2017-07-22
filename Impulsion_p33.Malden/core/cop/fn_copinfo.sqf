#include "..\..\script_macros.hpp"

private ["_ret","_unit","_prim","_sec","_vest","_uni","_bp","_attach","_steamName","_secondary"];

_ret = _this;

disableSerialization;

_unit = _ret select 3;

CONTROL(8900,8903) ctrlSetStructuredText parseText format [
    "
    <t size='.8'>
        Nom RP : %1<br/>
        Player ID: %11<br/>
        Side Joueur : %12<br/>
        Banque : %2<br/>
        Cash : %3
    </t>
    ",
    _unit getVariable ["realname",name _unit],
    [(_ret select 0)] call life_fnc_numberText,
    [(_ret select 1)] call life_fnc_numberText,
    _uni,
    _vest,
    _bp,
    _prim,
    _sec,
    _attach,
    _steamName,
    (_ret select 5),
    (_ret select 6),
    _secondary
];