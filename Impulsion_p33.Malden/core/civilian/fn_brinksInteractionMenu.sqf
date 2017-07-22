#include "..\..\script_macros.hpp"
/*
    @fichier : fn_brinksInteractionMenu.sqf
    @credits : par Snake.
    @serveur : Malden (Impulsion)
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Title 37401

private ["_display", "_Btn1", "_Btn2", "_Btn3", "_Btn4", "_Btn5", "_Btn6", "_Btn7", "_Btn8"];

disableSerialization;

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

_Btn1 ctrlSetText localize "STR_pInAct_CallCop";
_Btn1 buttonSetAction " hint 'Ce module est en cours de développement.'; ";

_Btn2 ctrlShow false;
_Btn3 ctrlShow false;
_Btn4 ctrlShow false;
_Btn5 ctrlShow false;
_Btn7 ctrlShow false;
_Btn6 ctrlShow false;
_Btn8 ctrlShow false;