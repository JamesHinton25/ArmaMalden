#include "..\..\script_macros.hpp" //[] spawn TON_fnc_MapMarkersAdmin;

if (FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

while { dialog } do { closeDialog 0; sleep 0.1; };

life_markers = !life_markers;

if (life_markers) then
{
	PlayerMarkers = [];
	FinishedLoop = false;
	hint "Marqueurs by SNAKE is ON";
	while { life_markers } do
	{
		{
			if !(_x in allUnits) then { deleteMarkerLocal str _X };
		} forEach PlayerMarkers;
		{
			if (alive _x && isPlayer _x) then
			{
				deleteMarkerLocal str _x;
				_pSee = createMarkerLocal [str _x, getPos _x];
				_pSee setMarkerTypeLocal "Mil_dot";
				_pSee setMarkerPosLocal getPos _x;
				_pSee setMarkerSizeLocal [1, 1];
				_pSee setMarkerTextLocal format ["%1", _x getVariable ["realname", name _x] ];
				_pSee setMarkerColorLocal "ColorBlack";
				PlayerMarkers = PlayerMarkers + [_x];
			};
		} forEach allUnits;
		sleep 0.4;
	};
	FinishedLoop = true;
}
else
{
	if (isNil "FinishedLoop") exitWith { };
	hint "Marqueurs by SNAKE is OFF";
	waitUntil { FinishedLoop };
	{
		deleteMarkerLocal str _x;
	} forEach PlayerMarkers;
};