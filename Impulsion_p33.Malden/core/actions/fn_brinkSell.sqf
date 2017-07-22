/*
	@fichier : fn_brinkSell.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_moldus", "_brinks", "_moi"];

_moldus = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_moi = [_this,1,objNull,[objNull]] call BIS_fnc_param;
_brinks = player;

if (playerSide != civilian) exitWith { hint "Vous n'êtes pas un civil." };
if (vehicle player != _brinks) exitWith { hint "Vous êtes dans un véhicule." };
if !(license_civ_brinks) exitWith { hint "Vous n'êtes pas un brinks." };
if !(alive _brinks) exitWith { hint "Vous devez être vivant" };
if (currentWeapon _brinks == "") exitWith { hint "Vous n'avez pas d'arme." };
if (_moi distance _moldus > 15) exitWith { hint "Vous devez être à 15 mètres." };
if !([false,"dollars_2K",1] call life_fnc_handleInv) exitWith { hint "Vous n'avez pas d'items à vendre." };

while {true} do
{
	life_cash = life_cash + 2000;
	life_inv_dollars_2K = life_inv_dollars_2K - 1;
	titleText ["+ 2.000 $", "PLAIN"];
	titleFadeOut 1;
	sleep 2;
	if (_moi distance _moldus > 10) exitWith { hint "Vous devez rester à 10 mètres." };
	if !(alive _brinks) exitWith { };
	if !([false,"dollars_2K",1] call life_fnc_handleInv) exitWith { };
};
