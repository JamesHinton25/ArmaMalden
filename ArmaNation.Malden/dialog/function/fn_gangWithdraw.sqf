#include "..\..\script_macros.hpp"

private["_value"];

_value = parseNumber(ctrlText 2702);
_gFund = GANG_FUNDS;
_gChef = (group player getVariable "gang_owner");

group player setVariable["gbank_in_use_by",player,true];

if (_value > 999999) exitWith {hint parseText localize "STR_ATM_WithdrawMax";};
if (_value < 0) exitWith {};
if (!([str(_value)] call TON_fnc_isnumber)) exitWith {hint localize "STR_ATM_notnumeric"};
if (_value > _gFund) exitWith {hint localize "STR_ATM_NotEnoughFundsG"};
if (_val < 100 && _gFund > 20000000) exitWith {hint parseText localize "STR_ATM_WithdrawMin"};
if ((group player getVariable ["gbank_in_use_by",player]) != player) exitWith {hint localize "STR_ATM_WithdrawInUseG"};
if (_gChef != getPlayerUID player) exitWith { hint "Seul le chef du gang peu retirer de l'argent !"; };

_gFund = _gFund - _value;
CASH = CASH + _value;
group player setVariable ["gang_bank",_gFund,true];

if (life_HC_isActive) then
{
    [1,group player] remoteExec ["HC_fnc_updateGang",HC_Life];
}
else
{
    [1,group player] remoteExec ["TON_fnc_updateGang",RSERV];
};

hint parseText format [localize "STR_ATM_WithdrawSuccessG",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then
{
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then
    {
        money_log = format ["withdrew $%1 from their gang bank. Gang Bank Balance: $%2  Bank Balance: $%3  On Hand Balance: $%4",_value,[_gFund] call life_fnc_numberText,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    }
    else
    {
        money_log = format ["%1 - %2 withdrew $%3 from their gang bank. Gang Bank Balance: $%4  Bank Balance: $%5  On Hand Balance: $%6",profileName,(getPlayerUID player),_value,[_gFund] call life_fnc_numberText,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};