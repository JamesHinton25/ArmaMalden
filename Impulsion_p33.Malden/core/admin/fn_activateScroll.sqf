sleep 1;

waitUntil { alive player };

if ((getPlayerUID player) in [
	"76561198154050322", 	//dabeast
	"76561198067614182", 	//idrakz
	"76561198060904372",	//brone
	"76561198052870688", 	//aléna
	"76561198109860065"		//heyoxe
]) then
{
	player addAction
	[
		("<t color=""#FF4400"">" + ("Tools Menu") + "</t>"),
		"core\admin\fn_adminScroll.sqf",
		"",
		-5,
		false,
		true,
		"",
		""
	];
};