/*
	@fichier : fn_vodkaSell.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_moldus", "_player", "_moi", "_action"];

_moldus = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_moi = [_this,1,objNull,[objNull]] call BIS_fnc_param;
_player = player;

if (playerSide != civilian) exitWith { hint "Vous n'êtes pas un civil." };
if (vehicle player != _player) exitWith { hint "Vous êtes dans un véhicule." };
if !(alive _player) exitWith { hint "Vous n'êtes pas vivant." };
if (_moi distance _moldus > 10) exitWith { hint "Vous devez rester à 10 mètres." };
if !([false,"potatoe_processed",1] call life_fnc_handleInv) exitWith { hint "Vous n'avez pas d'items à vendre." };

while {true} do {
    life_cash = life_cash + 1844;
    titleText ["+ 1.844 $", "PLAIN"];
    titleFadeOut 1;
    sleep 2;
    if (_moi distance _moldus > 10) exitWith { hint "Vous devez rester à 10 mètres." };
    if !(alive _player) exitWith { hint "Vous n'êtes pas vivant." };
    if !([false,"potatoe_processed",1] call life_fnc_handleInv) exitWith { };
};
