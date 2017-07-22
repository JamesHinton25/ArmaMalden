StartProgress = false;

[] execVM "core\impulsion\cron.sqf";
[] execVM "core\functions\fn_status.sqf";
[] execVM "core\functions\fn_autoMsg.sqf";

StartProgress = true;

0 setOvercast 0;
0 setRain 0;
0 setFog 0;

[] spawn
{
	while { true } do
	{
		0 setFog 0;
		sleep 1;
	};
};