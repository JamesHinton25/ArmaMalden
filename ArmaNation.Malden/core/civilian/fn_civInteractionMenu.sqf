#include "..\..\script_macros.hpp"

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Title 37401

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];

if (player getVariable ["Escorting", false]) then
{
    if (isNull _curTarget) exitWith { closeDialog 0; };
    if (player distance _curTarget > 4 ) exitWith { closeDialog 0; };
};

if (!dialog) then { createDialog "pInteraction_Menu"; };

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
life_pInact_curTarget = _curTarget;

if (player getVariable ["isEscorting",false]) then
{
    {
    	_x ctrlShow false;
    } forEach [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7,_Btn8];
};

_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

_Btn2 ctrlSetText localize "STR_pAct_RobPerson";
_Btn2 buttonSetAction "[] call life_fnc_robAction;";

if (player getVariable ["isEscorting",false]) then
{
    _Btn3 ctrlSetText localize "STR_pInAct_StopEscort";
    _Btn3 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
}
else
{
    _Btn3 ctrlSetText localize "STR_pInAct_Escort";
    _Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

_Btn4 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

if (license_civ_taxi) then
{
	_Btn5 ctrlSetText "Payer Client";
	_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_paymentUAction;";
}
else
{
	_Btn5 ctrlShow false;
};

_Btn6 ctrlShow false;
_Btn7 ctrlShow false;
_Btn8 ctrlShow false;