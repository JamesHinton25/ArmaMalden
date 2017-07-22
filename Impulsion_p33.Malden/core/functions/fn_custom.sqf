#include "..\..\script_macros.hpp"
/*
	@fichier : fn_brinks.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
switch (playerSide) do
{
	case civilian:
	{
		if (license_civ_brinks) then { life_paycheck = life_paycheck + 430; };
	};
};