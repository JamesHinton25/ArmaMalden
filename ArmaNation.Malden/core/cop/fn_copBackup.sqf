params [
	["_player", objNull, [objNull]],
	["_deleteTime", 60, [0]]
];

if (isNull _player) exitWith { };
if (playerSide != west) exitWith { };
if (!("ItemGPS" in (assignedItems player))) exitwith { hint "Vous n'avez pas de GPS." };

_marqueur = createMarkerLocal [("_marqueur" + (_player getVariable ["realname", name player])), getPos _player];
_marqueur setMarkerTypeLocal "Mil_dot";
_marqueur setMarkerColorLocal "ColorBlack";
_marqueur setMarkerTextLocal format ["%1", _player getVariable ["realname", name player]];

[1, format ["%1 à besoin d'aide !", name _player]] remoteExec ["life_fnc_broadcast",west];
uisleep _deleteTime;
deleteMarkerLocal _marqueur;