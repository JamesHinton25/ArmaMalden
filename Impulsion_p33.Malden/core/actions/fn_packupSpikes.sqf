private["_spikes"];
/*
	@fichier : fn_pakupSpikes.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
_spikes = nearestObjects [getPos player, [ "Land_Razorwire_F "], 8] select 0;

if (isNil "_spikes") exitWith { };

if ([true,"spikeStrip",1] call life_fnc_handleInv) then
{
    titleText [localize "STR_NOTF_SpikeStrip", "PLAIN"];
    player removeAction life_action_spikeStripPickup;
    life_action_spikeStripPickup = nil;
    deleteVehicle _spikes;
};
