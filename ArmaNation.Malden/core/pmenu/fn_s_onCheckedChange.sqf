#include "..\..\script_macros.hpp"

private ["_option", "_state"];

_option = _this select 0;
_state = _this select 1;

switch (_option) do {
    case "tags": {
        if (_state == 1) then {
            life_settings_tagson = true;
            profileNamespace setVariable["life_settings_tagson",true];
            LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
        } else {
            life_settings_tagson = false;
            profileNamespace setVariable["life_settings_tagson",false];
            [LIFE_ID_PlayerTags,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
        };
    };

    case "objects": {
        if (_state == 1) then {
            life_settings_revealObjects = true;
            profileNamespace setVariable["life_settings_revealObjects",true];
            LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;
        } else {
            life_settings_revealObjects = false;
            profileNamespace setVariable["life_settings_revealObjects",false];
            [LIFE_ID_RevealObjects,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
        };
    };

    case "sidechat": {
        if (isNil "terrain") then { terrain = true; } else { terrain = !terrain; };
        if (terrain) then {
            setTerrainGrid 50;
            hint parseText "Statut Herbes : <t color='#8cff9b'>on</t>";
        } else {
            setTerrainGrid 40;
            hint parseText "Statut Herbes : <t color='#e02f2f'>off</t>";
        };
    };
};
