switch (playerSide) do
{
    case civilian:
    {
        life_actions = [
          player addAction [
            localize "STR_pAct_DropFishingNet",
            life_fnc_dropFishingNet,"",0,false,false,"",
            '
              (surfaceisWater (getPos vehicle player))
              && (vehicle player isKindOf "Ship")
              && life_carryWeight < life_maxWeight
              && speed (vehicle player) < 2
              && speed (vehicle player) > -1
              && !life_net_dropped
            '
          ]
        ];
        life_actions = life_actions + [
          player addAction [
            localize "STR_pAct_RobPerson",
            life_fnc_robAction,"",0,false,false,"",
            '
              !isNull cursorObject
              && player distance cursorObject < 3.5
              && isPlayer cursorObject
              && animationState cursorObject == "Incapacitated"
              && !(cursorObject getVariable["robbed",false])
            '
          ]
        ];
    };
    case west:
    {
        life_actions = life_actions + [player addAction["Saisir Objets",life_fnc_copSeize,cursorTarget,0,false,false,"",'((count(nearestObjects [player,["WeaponHolder"],3])>0) || (count(nearestObjects [player,["GroundWeaponHolder"],3])>0) || (count(nearestObjects [player,["WeaponHolderSimulated"],3])>0))']];
    };
};
