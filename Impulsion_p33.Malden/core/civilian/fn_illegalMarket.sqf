#include "..\..\script_macros.hpp"
/*
	@fichier : fn_information.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private "_action";

_action = [_this,3,"",[""]] call BIS_fnc_param;

switch (_action) do
{
	case "buy_phone":
	{
		if (life_cash < 1325) exitWith { hint parseText "Vous n'avez pas 1.325 $ sur vous."; };
		hint parseText "Vous avez acheté un <t color='#8cff9b'>téléphone jetable</t> pour <t color='#1b8ebf'>1,325 $</t>.";
		life_cash = life_cash - 1325;
		life_inv_phone = life_inv_phone + 1;
	};
	case "money":
	{
		[] call TON_fnc_missionMoney;
	};
	case "car":
	{
		[] call TON_fnc_missionCar;
	};
	case "beret":
	{
		[] call TON_fnc_missionBeret;
	};
};