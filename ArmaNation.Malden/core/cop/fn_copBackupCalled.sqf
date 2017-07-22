/*
	@fichier : fn_copBackupCalled.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
if (!life_copBackupCalled) exitWith { hint "Veuillez patienter avant de refaire cela."; };

_time = 60;
[player, _time] remoteExec ["life_fnc_copBackup", west];

life_copBackup = false;
sleep _time + 320;
life_copBackup = true;

hint parseText "Vous <t color='#8cff9b'>êtes autorisé</t> à refaire une demande d'aide.";