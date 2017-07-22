private ["_vehiculeFuel","_velocity","_consomation"];

while {true} do
{
	_vehiculeFuel = (vehicle player);
	if(isEngineOn _vehiculeFuel
  && ((driver _vehiculeFuel) == player)
  && (_vehiculeFuel != player)) then
	{
		_velocity = sqrt(((velocity _vehiculeFuel select 0)^2)+((velocity _vehiculeFuel select 1)^2))*3.6;
		_consomation = _velocity/100000 + 0.0001;
		if(_consomation > 0.002) then {_consomation = 0.002;};
		_vehiculeFuel setFuel ((fuel _vehiculeFuel)-_consomation);
	};
	sleep 2;
};
