class VirtualShops
{
    class market
    {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            "waterBottle",
            "rabbit",
            "apple",
            "redgull",
            "tbacon",
            "pickaxe",
            "toolkit",
            "fuelFull",
            "peach",
            "storagesmall",
            "storagebig",
            "rabbit_raw",
            "hen_raw",
            "rooster_raw",
            "sheep_raw",
            "goat_raw"
        };
    };
    class black_market
    {
        name = "STR_Shops_BlackMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "antiquity2", "dollars_2K" };
    };
    class med
    {
        name = "STR_Shops_Market";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            "waterBottle",
            "rabbit",
            "apple",
            "redgull",
            "tbacon",
            "toolkit",
            "fuelFull",
            "peach",
            "defibrillator"
        };
    };
    class rebel
    {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] =
        {
            "waterBottle",
            "rabbit",
            "apple",
            "redgull",
            "tbacon",
            "lockpick",
            "pickaxe",
            "toolkit",
            "handcuffs",
            "fuelFull",
            "peach",
            "boltcutter",
            "blastingcharge"
        };
    };
    class gang
    {
        name = "STR_Shops_Gang";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            "waterBottle",
            "rabbit",
            "apple",
            "redgull",
            "tbacon",
            "lockpick",
            "pickaxe",
            "toolkit",
            "fuelFull",
            "peach",
            "boltcutter",
            "blastingcharge"
        };
    };
    class fishmarket
    {
        name = "STR_Shops_FishMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            "salema_raw",
            "salema",
            "ornate_raw",
            "ornate",
            "mackerel_raw",
            "mackerel",
            "tuna_raw",
            "tuna",
            "mullet_raw",
            "mullet",
            "catshark_raw",
            "catshark"
        };
    };
    class wongs
    {
        name = "STR_Shops_Wongs";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "turtle_soup", "turtle_raw" };
    };
    class coffee
    {
        name = "STR_Shops_Coffee";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts" };
    };
    class f_station_coffee
    {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };
    class drugdealer
    {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };
    class oil
    {
        name = "STR_Shops_Oil";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "oilWater_processed", "pickaxe", "fuelFull" };
    };
    class potatoe
    {
        name = "Grossiste Vodka";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "potatoe_processed", "fuelFull" };
    };
    class glass
    {
        name = "STR_Shops_Glass";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "glass", "pickaxe", "fuelFull" };
    };
    class iron
    {
        name = "STR_Shops_Iron";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "iron_refined", "pickaxe", "fuelFull" };
    };
    class copper
    {
        name = "STR_Shops_Copper";
        side = "civ";
        license = "";
        level[] = { "", "", -1 };
        items[] = { "copper_refined", "pickaxe", "fuelFull" };
    };
    class diamond
    {
        name = "STR_Shops_Diamond";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_uncut", "diamond_cut", "pickaxe", "fuelFull" };
    };
    class salt
    {
        name = "STR_Shops_Salt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salt_refined", "pickaxe", "fuelFull" };
    };
    class gold
    {
        name = "STR_Shops_Gold";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar", "pickaxe", "fuelFull" };
    };
    class cop
    {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "handcuffs", "fuelFull", "defusekit", "defibrillator" };
    };
};
class VirtualItems
{
    class pickaxe
    {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
    class defibrillator
    {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };
    class toolkit
    {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };
    class fuelEmpty
    {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };
    class fuelFull
    {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };
    class spikeStrip
    {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };
    class lockpick
    {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };
    class handcuffs
    {
        variable = "handcuffs";
        displayName = "STR_Item_Handcuffs";
        weight = 1;
        buyPrice = 500;
        sellPrice = 150;
        illegal = true;
        edible = -1;
        icon = "icons\ico_handcuffs.paa";
    };
    class dollars_2K
    {
        variable = "dollars_2K";
        displayName = "STR_Item_Dollars_2K";
        weight = 0;
        buyPrice = -1;
        sellPrice = 1765;
        illegal = false;
        edible = -1;
        icon = "icons\ico_money.paa";
    };
    class phone
    {
        variable = "phone";
        displayName = "STR_Item_Phone";
        weight = 1;
        buyPrice = 1350;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_phone.paa";
    };
    class potatoe_processed
    {
        variable = "potatoeProcessed";
        displayName = "STR_Item_Vodka";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1315;
        illegal = false;
        edible = -1;
        icon = "icons\ico_vodka.paa";
    };
    class potatoe_unprocessed
    {
        variable = "potatoeUnprocessed";
        displayName = "STR_Item_Potatoe";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_potatoe.paa";
    };
    class antiquity
    {
        variable = "antiquity";
        displayName = "STR_Item_Antiquity";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_antiquityU.paa";
    };
    class antiquity2
    {
        variable = "antiquity2";
        displayName = "STR_Item_Antiquity2";
        weight = 3;
        buyPrice = -1;
        sellPrice = 4461;
        illegal = true;
        edible = -1;
        icon = "icons\ico_antiquityP.paa";
    };
    class goldbar
    {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };
    class blastingcharge
    {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };
    class boltcutter
    {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };
    class defusekit
    {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };
    class storagesmall
    {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };
    class storagebig
    {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };
    class oilWater_unprocessed
    {
        variable = "oilWaterUnprocessed";
        displayName = "STR_Item_OilWU";
        weight = 8;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };
    class oilWater_processed
    {
        variable = "oilWaterProcessed";
        displayName = "STR_Item_OilWP";
        weight = 7;
        buyPrice = -1;
        sellPrice = 7599;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };
    class copper_unrefined
    {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };
    class copper_refined
    {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 4;
        buyPrice = -1;
        sellPrice = 1350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };
    class iron_unrefined
    {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };
    class iron_refined
    {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1048;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };
    class salt_unrefined
    {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };
    class salt_refined
    {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 932;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };
    class sand
    {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };
    class glass
    {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1159;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };
    class diamond_uncut
    {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };
    class diamond_cut
    {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2687;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };
    class heroin_unprocessed
    {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };
    class heroin_processed
    {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1417;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };
    class cannabis
    {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };
    class marijuana
    {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 1;
        buyPrice = 2138;
        sellPrice = 1069;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };
    class cocaine_unprocessed
    {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };
    class cocaine_processed
    {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2043;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };
    class redgull
    {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };
    class coffee
    {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };
    class waterBottle
    {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };
    class apple
    {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };
    class peach
    {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };
    class tbacon
    {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };
    class donuts
    {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };
    class rabbit_raw
    {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };
    class rabbit
    {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };
    class salema_raw
    {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };
    class salema
    {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };
    class ornate_raw
    {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };
    class ornate
    {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };
    class mackerel_raw
    {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };
    class mackerel
    {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };
    class tuna_raw
    {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };
    class tuna
    {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };
    class mullet_raw
    {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };
    class mullet
    {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };
    class catshark_raw
    {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };
    class catshark
    {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };
    class turtle_raw
    {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };
    class turtle_soup
    {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };
    class hen_raw
    {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };
    class hen
    {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };
    class rooster_raw
    {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };
    class rooster
    {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };
    class sheep_raw
    {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };
    class sheep
    {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };
    class goat_raw
    {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };
    class goat
    {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
};
