/*
	@fichier : fn_copSeize.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
_clear = nearestObjects [player,["weaponholder"],3];
_clear = _clear + nearestObjects [player,["GroundWeaponHolder"],3];
_clear = _clear + nearestObjects [player,["WeaponHolderSimulated"],3];

_detruire = 0;

for "_i" from 0 to count _clear - 1 do {
	_detruire = _detruire + 1;
	deleteVehicle (_clear select _i);
};

hint parseText format ["Merci <t color='#1b8ebf'>%1</t>, d'avoir retiré <t color='#8cff9b'>%2 objets</t> qui étaient sur le sol.", name player, _detruire];