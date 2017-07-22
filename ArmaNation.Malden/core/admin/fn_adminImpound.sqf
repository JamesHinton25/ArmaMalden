#include "..\..\script_macros.hpp"

if (FETCH_CONST(life_adminlevel) < 1) exitWith { hint localize "STR_ANOTF_ErrorLevel" };

if (cursorTarget in vehicles) then
{
	_vehicule = cursorTarget;
	_dataVehicule = _vehicule getVariable ["vehicle_info_owners",[]];
	[_vehicule, true, player] remoteExec ["TON_fnc_vehicleStore",RSERV];
	hint "Mise en fourrière effectuée.";
}
else
{
	hint "Regardez le milieu du véhicule !";
};