#define true 1
#define false 0

class Life_Settings {
    battlEye_friendlyLogging = false;
    player_advancedLog = false;
    player_moneyLog = false;
    player_deathLog = false;

    save_virtualItems = true;
    save_playerStats = true;
    save_civilian_weapons = true;
    save_civilian_position = false;
    save_civilian_position_restart = false;
    save_civilian_positionStrict = false;
    saved_virtualItems[] = {
        "handcuffs",
        "pickaxe",
        "fuelEmpty",
        "fuelFull",
        "spikeStrip",
        "lockpick",
        "defuseKit",
        "storageSmall",
        "storageBig",
        "redgull",
        "coffee",
        "waterBottle",
        "apple",
        "peach",
        "tbacon",
        "donuts",
        "rabbit",
        "salema",
        "ornate",
        "mackerel",
        "tuna",
        "mullet",
        "catshark",
        "turtle_soup",
        "hen",
        "rooster",
        "sheep",
        "goat",
        "defibrillator",
        "toolkit"
    };

    save_vehicle_virtualItems = false;
    save_vehicle_items[] = { "pickaxe","fuelEmpty","fuelFull", "spikeStrip", "lockpick", "defuseKit","storageSmall","storageBig","redgull","coffee","waterBottle","apple","peach","tbacon","donuts","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","defibrillator","toolkit" };
    save_vehicle_inventory = false;
    save_vehicle_fuel = false;
    save_vehicle_damage = false;
    save_vehicle_illegal = false;

    global_ATM = true;
    noatm_timer = 10;
    minimum_cops = 0;

    donor_level = false;
    enable_fatigue = false;
    total_maxWeight = 24;
    respawn_timer = 25;

    civ_skins = false;
    cop_extendedSkins = false;
    clothing_noTP = false;
    clothing_box = true;
    clothing_masks[] = {
        "H_Shemag_olive",
        "H_Shemag_khk",
        "H_Shemag_tan",
        "H_Shemag_olive_hs",
        "H_ShemagOpen_khk",
        "H_ShemagOpen_tan",
        "G_Balaclava_blk",
        "G_Balaclava_combat",
        "G_Balaclava_lowprofile",
        "G_Balaclava_oli",
        "G_Bandanna_aviator",
        "G_Bandanna_beast",
        "G_Bandanna_blk",
        "G_Bandanna_khk",
        "G_Bandanna_oli",
        "G_Bandanna_shades",
        "G_Bandanna_sport",
        "G_Bandanna_tan",
        "U_O_GhillieSuit",
        "U_I_GhillieSuit",
        "U_B_GhillieSuit",
        "H_RacingHelmet_1_black_F",
        "H_RacingHelmet_1_red_F",
        "H_RacingHelmet_1_white_F",
        "H_RacingHelmet_1_blue_F",
        "H_RacingHelmet_1_yellow_F",
        "H_RacingHelmet_1_green_F",
        "H_RacingHelmet_1_F",
        "H_RacingHelmet_2_F",
        "H_RacingHelmet_3_F",
        "H_RacingHelmet_4_F"
    };

    pump_service = true;
    fuel_cost = 17;
    service_chopper = 1000;
    fuelCan_refuel = 250;

    gang_price = 50000;
    gang_upgradeBase = 16000;
    gang_upgradeMultiplier = 2.5;

    house_limit = 5;

    animaltypes_fish[] = {
        "Salema_F",
        "Ornate_random_F",
        "Mackerel_F",
        "Tuna_F",
        "Mullet_F",
        "CatShark_F",
        "Turtle_F"
    };
    animaltypes_hunting[] = {
        "Sheep_random_F",
        "Goat_random_F",
        "Hen_random_F",
        "Cock_random_F",
        "Rabbit_F"
    };

    restrict_medic_weapons = true;
    restrict_clothingPickup = true;
    restrict_weaponPickup = false;
    restricted_weapons[] = {
        "hgun_P07_snds_F",
        "arifle_MX_F",
        "arifle_MXC_F"
    };
    restricted_uniforms[] = {
        "U_Rangemaster",
        "U_B_CombatUniform_mcam_tshirt",
        "U_B_CombatUniform_mcam_worn",
        "U_B_survival_uniform"
    };

    jail_seize_inventory = false;
    sendtoJail_locations[] = { "Correctional_Facility" };
    jail_seize_vItems[] = {
        "spikeStrip",
        "lockpick",
        "goldbar",
        "blastingcharge",
        "boltcutter",
        "defusekit",
        "heroin_unprocessed",
        "heroin_processed",
        "cannabis",
        "marijuana",
        "cocaine_unprocessed",
        "cocaine_processed",
        "turtle_raw"
    };

    revive_cops = true;
    revive_fee = 1500;
    hospital_heal_fee = 500;

    bank_cop = 150000;
    bank_civ = 150000;
    bank_med = 150000;

    paycheck_cop = 1455;
    paycheck_civ = 755;
    paycheck_med = 1355;

    paycheck_period = 5;
    bank_transferTax = .01;

    fuelTank_winMultiplier = 1;

    seize_uniform[] = { "U_Rangemaster" };
    seize_vest[] = { "V_TacVest_blk_POLICE" };
    seize_headgear[] = { "H_Cap_police" };
    seize_minimum_rank = 2;
    seize_exempt[] = {
        "Binocular",
        "ItemWatch",
        "ItemCompass",
        "ItemGPS",
        "ItemMap",
        "NVGoggles",
        "FirstAidKit",
        "ToolKit",
        "Chemlight_red",
        "Chemlight_yellow",
        "Chemlight_green",
        "Chemlight_blue",
        "optic_ACO_grn_smg"
    };

    vehicleShop_3D = true;
    chopShop_vehicles[] = { "Car", "Air" };
    vehicle_infiniteRepair[] = { false, false, true, false };
    vehicleShop_rentalOnly[] = { "B_G_Offroad_01_armed_F", "B_Boat_Armed_01_minigun_F" };

    vehicle_purchase_multiplier_CIVILIAN = 1;
    vehicle_purchase_multiplier_COP = .5;
    vehicle_purchase_multiplier_MEDIC = .75;
    vehicle_purchase_multiplier_OPFOR = -1;

    vehicle_rental_multiplier_CIVILIAN = .80;
    vehicle_rental_multiplier_COP = .3;
    vehicle_rental_multiplier_MEDIC = .55;
    vehicle_rental_multiplier_OPFOR = -1;

    vehicle_sell_multiplier_CIVILIAN = .5;
    vehicle_sell_multiplier_COP = .5;
    vehicle_sell_multiplier_MEDIC = .5;
    vehicle_sell_multiplier_OPFOR = -1;

    vehicle_insurance_multiplier_CIVILIAN = .25;
    vehicle_insurance_multiplier_COP = .1;
    vehicle_insurance_multiplier_MEDIC = .1;
    vehicle_insurance_multiplier_OPFOR = -1;

    vehicle_chopShop_multiplier = .25;
    vehicle_storage_fee_multiplier = .2;
    vehicle_cop_impound_multiplier = .1;

    crimes[] = {
        { "STR_Crime_187V", "650","187V"},
        { "STR_Crime_187",  "2000","187"},
        { "STR_Crime_901",  "450","901"},
        { "STR_Crime_215",  "200","215"},
        { "STR_Crime_213",  "1000","213"},
        { "STR_Crime_211",  "100","211"},
        { "STR_Crime_207",  "350","207"},
        { "STR_Crime_207A", "200","207A"},
        { "STR_Crime_390",  "1500","390"},
        { "STR_Crime_487",  "150","487"},
        { "STR_Crime_488",  "70","488"},
        { "STR_Crime_480",  "100","480"},
        { "STR_Crime_481",  "100","481"},
        { "STR_Crime_482",  "500","482"},
        { "STR_Crime_483",  "950","483"},
        { "STR_Crime_459",  "650","459"},
        { "STR_Crime_666",  "200","666"},
        { "STR_Crime_667",  "4500","667"},
        { "STR_Crime_668",  "1500","668"},
        { "STR_Crime_1",    "250","1"},
        { "STR_Crime_2",    "200","2"},
        { "STR_Crime_3",    "150","3"},
        { "STR_Crime_4",    "250","4"},
        { "STR_Crime_5",    "100","5"},
        { "STR_Crime_6",    "80","6"},
        { "STR_Crime_7",    "150","7"},
        { "STR_Crime_8",    "5000","8"},
        { "STR_Crime_9",    "5000","9"},
        { "STR_Crime_10",   "15000","10"},
        { "STR_Crime_11",   "10000","11"},
        { "STR_Crime_12",   "2500","12"},
        { "STR_Crime_13",   "1500","13"},
        { "STR_Crime_14",   "500","14"},
        { "STR_Crime_15",   "2500","15"},
        { "STR_Crime_16",   "1500","16"},
        { "STR_Crime_17",   "100","17"},
        { "STR_Crime_18",   "1500","18"},
        { "STR_Crime_19",   "2500","19"},
        { "STR_Crime_20",   "500","20"},
        { "STR_Crime_21",   "500","21"},
        { "STR_Crime_22",   "2000","22"},
        { "STR_Crime_23",   "5000","23"},
        { "STR_Crime_24",   "10000","24"},
        { "STR_Crime_25",   "20000","25"}
    };
};

#include "clothing.hpp"
#include "licenses.hpp"
#include "vehicles.hpp"
#include "vehicles_textures.hpp"
#include "items.hpp"
#include "weapons.hpp"
#include "gather.hpp"
#include "spawn.hpp"
#include "process.hpp"
#include "sounds.hpp"