#include "..\..\script_macros.hpp"

_path = "core\admin\";
_exec = 'player execVM "'+_path+'%1"';

adminScroll =
[
	"76561198154050322", 	//dabeast
	"76561198067614182", 	//idrakz
	"76561198060904372",	//brone
	"76561198052870688", 	//aléna
	"76561198109860065"		//heyoxe
];

if ((getPlayerUID player) in adminScroll) then
{
	adminmenu =
	[
		["QUICK MANAGEMENT", true],
			["FOURRIÈRE", 	[],"",-5,[["expression", format[_exec,"fn_adminImpound.sqf"]]],"1","1"],
			["ATM", 		[],"",-5,[["expression", format[_exec,"fn_adminATM.sqf"]]],"1","1"],
			["MODE DIEU", 	[],"",-5,[["expression", format[_exec,"fn_adminGodMode.sqf"]]],"1","1"],
			["ME TP", 		[],"",-5,[["expression", format[_exec,"fn_adminTeleport.sqf"]]],"1","1"],
			["ME LIBÉRER", 	[],"",-5,[["expression", format[_exec,"fn_adminFree.sqf"]]],"1","1"],
			["MARQUEURS", 	[],"",-5,[["expression", format[_exec,"fn_adminMarkers.sqf"]]],"1","1"],
		["QUITTER", [], "", -5, [["expression", "pselect5 = 'exit';"]], "1", "1"]
	];
};

showCommandingMenu "#USER:adminmenu";