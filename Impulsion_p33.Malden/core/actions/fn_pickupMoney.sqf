#include "..\..\script_macros.hpp"
/*
	@fichier : fn_pickupMoney.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private "_value";
if ((time - life_action_delay) < 1.5) exitWith {hint parseText localize "STR_NOTF_ActionDelay"; _this setVariable ["inUse",false,true];};
if (isNull _this || {player distance _this > 3}) exitWith {_this setVariable ["inUse",false,true];};

_value = ((_this getVariable "item") select 1);
if (!isNil "_value") exitWith {
    deleteVehicle _this;

    switch (true) do {
        case (_value > 20000000) : {_value = 100000;}; //VAL>20mil->100k
        case (_value > 5000000) : {_value = 250000;}; //VAL>5mil->250k
        default {};
    };

    player playMove "AinvPknlMstpSlayWrflDnon";
    hint parseText format [localize "STR_NOTF_PickedMoney",[_value] call life_fnc_numberText];
    CASH = CASH + _value;
    life_action_delay = time;

    if (LIFE_SETTINGS(getNumber,"player_moneyLog") == 1) then {
        if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") == 1) then {
            money_log = format ["picked up $%1 from the ground. Bank Balance: $%2  On Hand Balance: $%3",[_value] call life_fnc_numberText,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
        } else {
            money_log = format ["%1 - %2 picked up $%3 from the ground. Bank Balance: $%4  On Hand Balance $%5",profileName,(getPlayerUID player),[_value] call life_fnc_numberText,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
        };
    publicVariableServer "money_log";
};
};
