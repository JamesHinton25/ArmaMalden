class WeaponShops
{
    //CIV
    class gun
    {
        name = "Armurerie";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "arifle_SDAR_F", "", 23200, -1 }
        };
        mags[] =
        {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "20Rnd_556x45_UW_mag", "", 60 }
        };
        accs[] =
        {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };
    class brinks
    {
        name = "Armurerie Brinks";
        side = "civ";
        license = "brinks";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "SmokeShell", "", 4000, -1 },                        //Fumigène
            { "HandGrenade", "", 8500, -1 },                       //Grenade
            { "arifle_AK12_F", "", 65550, -1 },                    //AK-12 7.62mm
            { "arifle_AKM_F", "", 70750, -1 },                     //AKM 7.62mm
            { "arifle_AKS_F", "", 29750, -1 },                     //AKS-74U 5.45mm
            { "srifle_DMR_04_Tan_F", "", 92000, -1 },              //ASP-1 Kir 12.7mm (brun roux)
            { "arifle_CTARS_hex_F", "", 37840, -1 },               //CAR-95-1 5.8mm (hex vert)
            { "arifle_CTAR_hex_F", "", 37840, -1 },                //CAR-95 5.8mm
            { "arifle_Katiba_C_F", "", 46980, -1 },                //Carabine Katiba 6.5mm
            { "srifle_DMR_07_hex_F", "", 48150, -1 },              //CMR-76 6.5mm
            { "srifle_DMR_05_hex_F", "", 87500, -1 },              //Cyrus 9.3mm (brun roux)
            { "srifle_GM6_camo_F", "", 110000, -1 },               //GM6 Lynx 12.7mm
            { "arifle_Katiba_F", "", 49500, -1 },                  //Katiba 6.5mm
            { "LMG_03_F", "", 34000, -1 },                         //LIM-85 5.56mm
            { "srifle_LRR_camo_F", "", 90000, -1 },                //M320 LRR. 408 (tropique)
            { "srifle_DMR_02_sniper_F", "", 85000, -1 },           //MAR-10 .338 (camo)
            { "srifle_DMR_03_multicam_F", "", 71250, -1 },         //Mk-I EMR 7.62mm (boisé)
            { "srifle_DMR_03_tan_F", "", 71250, -1 },              //Mk-I EMR 7.62mm (khaki)
            { "srifle_DMR_06_camo_F", "", 68400, -1 },             //Mk14 7.62mm (camo)
            { "srifle_DMR_06_olive_F", "", 68400, -1 },            //Mk14 7.62mm (olive)
            { "srifle_EBR_F", "", 68400, -1 },                     //Mk18 ABR 7.62mm
            { "arifle_Mk20_plain_F", "", 27200, -1 },              //Mk20 5.56mm (camouflage)
            { "srifle_DMR_01_F", "", 63650, -1 },                  //Rahim 7.62mm
            { "arifle_SPAR_01_snd_F", "", 30600, -1 },             //SPAR-16 5.56mm (kakhi)
            { "arifle_SPAR_02_snd_F", "", 32300, -1 },             //SPAR-16S 5.56mm (kakhi)
            { "arifle_SPAR_03_snd_F", "", 61250, -1 },             //SPAR-17 7.62mm (kakhi)
            { "arifle_TRG21_F", "", 32300, -1 },                   //TRG-21 5.56
            { "arifle_ARX_hex_F", "", 44550, -1 },                 //Type 115 6.5mm (hex vert)
            { "LMG_Zafir_F", "", 76000, -1 }                       //Zafir 7.62mm
        };
        mags[] =
        {
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "30Rnd_545x39_Mag_F", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "5Rnd_127x108_Mag", "", 0, -1 },
            { "5Rnd_127x108_Mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "10Rnd_762x54_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 }
        };
        accs[] =
        {
            { "acc_pointer_IR", "", 1000, -1 },
            { "acc_flashlight", "", 500, -1 },
            { "bipod_01_F_snd", "", 100, -1 },
            { "bipod_01_F_blk", "", 100, -1 },
            { "bipod_01_F_mtp", "", 100, -1 },
            { "bipod_02_F_blk", "", 100, -1 },
            { "bipod_02_F_tan", "", 100, -1 },
            { "bipod_02_F_hex", "", 100, -1 },
            { "bipod_03_F_blk", "", 100, -1 },
            { "bipod_03_F_oli", "", 100, -1 },
            { "bipod_01_F_khk", "", 100, -1 },
            { "muzzle_snds_H", "", 200, -1 },
            { "muzzle_snds_L", "", 200, -1 },
            { "muzzle_snds_M", "", 200, -1 },
            { "muzzle_snds_B", "", 200, -1 },
            { "muzzle_snds_H_MG", "", 200, -1 },
            { "muzzle_snds_H_SW", "", 200, -1 },
            { "muzzle_snds_acp", "", 200, -1 },
            { "muzzle_snds_338_black", "", 15000, -1 },
            { "muzzle_snds_338_green", "", 15000, -1 },
            { "muzzle_snds_338_sand", "", 15000, -1 },
            { "muzzle_snds_93mmg", "", 10000, -1 },
            { "muzzle_snds_93mmg_tan", "", 10000, -1 },
            { "muzzle_snds_H_khk_F", "", 10000, -1 },
            { "muzzle_snds_H_snd_F", "", 10000, -1 },
            { "muzzle_snds_58_blk_F", "", 10000, -1 },
            { "muzzle_snds_m_khk_F", "", 10000, -1 },
            { "muzzle_snds_m_snd_F", "", 10000, -1 },
            { "muzzle_snds_B_khk_F", "", 10000, -1 },
            { "muzzle_snds_B_snd_F", "", 10000, -1 },
            { "muzzle_snds_58_wdm_F ", "", 10000, -1 },
            { "muzzle_snds_65_TI_blk_F ", "", 10000, -1 },
            { "muzzle_snds_65_TI_hex_F", "", 10000, -1 },
            { "muzzle_snds_65_TI_ghex_F", "", 10000, -1 },
            { "muzzle_snds_H_MG_blk_F", "", 10000, -1 },
            { "muzzle_snds_H_MG_khk_F", "", 10000, -1 },
            { "optic_ERCO_snd_F", "", 200, -1 },
            { "optic_Holosight", "", 200, -1 },
            { "optic_Holosight_smg", "", 200, -1 },
            { "optic_KHS_tan", "", 200, -1 },
            { "optic_KHS_old", "", 200, -1 },
            { "optic_KHS_hex", "", 200, -1 },
            { "optic_KHS_blk", "", 200, -1 },
            { "optic_MRD", "", 200, -1 },
            { "optic_Yorris", "", 200, -1 },
            { "optic_MRCO", "", 200, -1 },
            { "optic_Aco", "", 200, -1 },
            { "optic_ACO_grn", "", 200, -1 },
            { "optic_Aco_smg", "", 200, -1 },
            { "optic_ACO_grn_smg", "", 200, -1 },
            { "optic_Arco", "", 200, -1 },
            { "optic_Hamr", "", 200, -1 },
            { "optic_Hamr_khk_F", "", 200, -1 },
            { "optic_SOS", "", 200, -1 },
            { "optic_SOS_khk_F", "", 200, -1 },
            { "optic_NVS", "", 200, -1 },
            { "optic_LRPS", "", 200, -1 },
            { "optic_LRPS_ghex_F", "", 200, -1 },
            { "optic_LRPS_tna_F", "", 200, -1 },
            { "optic_AMS", "", 200, -1 },
            { "optic_AMS_khk", "", 200, -1 },
            { "optic_AMS_snd", "", 200, -1 },
            { "optic_DMS", "", 200, -1 }
        };
    };
    class rebel
    {
        name = "Armurerie Rebelle";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "SmokeShell", "", 4000, -1 },                        //Fumigène
            { "HandGrenade", "", 8500, -1 },                       //Grenade
            { "arifle_AK12_F", "", 65550, -1 },                    //AK-12 7.62mm
            { "arifle_AKM_F", "", 70750, -1 },                     //AKM 7.62mm
            { "arifle_AKS_F", "", 29750, -1 },                     //AKS-74U 5.45mm
            { "srifle_DMR_04_Tan_F", "", 92000, -1 },              //ASP-1 Kir 12.7mm (brun roux)
            { "arifle_CTARS_hex_F", "", 37840, -1 },               //CAR-95-1 5.8mm (hex vert)
            { "arifle_CTAR_hex_F", "", 37840, -1 },                //CAR-95 5.8mm
            { "arifle_Katiba_C_F", "", 46980, -1 },                //Carabine Katiba 6.5mm
            { "srifle_DMR_07_hex_F", "", 48150, -1 },              //CMR-76 6.5mm
            { "srifle_DMR_05_hex_F", "", 87500, -1 },              //Cyrus 9.3mm (brun roux)
            { "srifle_GM6_camo_F", "", 110000, -1 },               //GM6 Lynx 12.7mm
            { "arifle_Katiba_F", "", 49500, -1 },                  //Katiba 6.5mm
            { "LMG_03_F", "", 34000, -1 },                         //LIM-85 5.56mm
            { "srifle_LRR_camo_F", "", 90000, -1 },                //M320 LRR. 408 (tropique)
            { "srifle_DMR_02_sniper_F", "", 85000, -1 },           //MAR-10 .338 (camo)
            { "srifle_DMR_03_multicam_F", "", 71250, -1 },         //Mk-I EMR 7.62mm (boisé)
            { "srifle_DMR_03_tan_F", "", 71250, -1 },              //Mk-I EMR 7.62mm (khaki)
            { "srifle_DMR_06_camo_F", "", 68400, -1 },             //Mk14 7.62mm (camo)
            { "srifle_DMR_06_olive_F", "", 68400, -1 },            //Mk14 7.62mm (olive)
            { "srifle_EBR_F", "", 68400, -1 },                     //Mk18 ABR 7.62mm
            { "arifle_Mk20_plain_F", "", 27200, -1 },              //Mk20 5.56mm (camouflage)
            { "srifle_DMR_01_F", "", 63650, -1 },                  //Rahim 7.62mm
            { "arifle_SPAR_01_snd_F", "", 30600, -1 },             //SPAR-16 5.56mm (kakhi)
            { "arifle_SPAR_02_snd_F", "", 32300, -1 },             //SPAR-16S 5.56mm (kakhi)
            { "arifle_SPAR_03_snd_F", "", 61250, -1 },             //SPAR-17 7.62mm (kakhi)
            { "arifle_TRG21_F", "", 32300, -1 },                   //TRG-21 5.56
            { "arifle_ARX_hex_F", "", 44550, -1 },                 //Type 115 6.5mm (hex vert)
            { "LMG_Zafir_F", "", 76000, -1 }                       //Zafir 7.62mm
        };
        mags[] =
        {
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "30Rnd_545x39_Mag_F", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "5Rnd_127x108_Mag", "", 0, -1 },
            { "5Rnd_127x108_Mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "10Rnd_762x54_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 }
        };
        accs[] =
        {
            { "acc_pointer_IR", "", 1000, -1 },
            { "acc_flashlight", "", 500, -1 },
            { "bipod_01_F_snd", "", 100, -1 },
            { "bipod_01_F_blk", "", 100, -1 },
            { "bipod_01_F_mtp", "", 100, -1 },
            { "bipod_02_F_blk", "", 100, -1 },
            { "bipod_02_F_tan", "", 100, -1 },
            { "bipod_02_F_hex", "", 100, -1 },
            { "bipod_03_F_blk", "", 100, -1 },
            { "bipod_03_F_oli", "", 100, -1 },
            { "bipod_01_F_khk", "", 100, -1 },
            { "muzzle_snds_H", "", 200, -1 },
            { "muzzle_snds_L", "", 200, -1 },
            { "muzzle_snds_M", "", 200, -1 },
            { "muzzle_snds_B", "", 200, -1 },
            { "muzzle_snds_H_MG", "", 200, -1 },
            { "muzzle_snds_H_SW", "", 200, -1 },
            { "muzzle_snds_acp", "", 200, -1 },
            { "muzzle_snds_338_black", "", 15000, -1 },
            { "muzzle_snds_338_green", "", 15000, -1 },
            { "muzzle_snds_338_sand", "", 15000, -1 },
            { "muzzle_snds_93mmg", "", 10000, -1 },
            { "muzzle_snds_93mmg_tan", "", 10000, -1 },
            { "muzzle_snds_H_khk_F", "", 10000, -1 },
            { "muzzle_snds_H_snd_F", "", 10000, -1 },
            { "muzzle_snds_58_blk_F", "", 10000, -1 },
            { "muzzle_snds_m_khk_F", "", 10000, -1 },
            { "muzzle_snds_m_snd_F", "", 10000, -1 },
            { "muzzle_snds_B_khk_F", "", 10000, -1 },
            { "muzzle_snds_B_snd_F", "", 10000, -1 },
            { "muzzle_snds_58_wdm_F ", "", 10000, -1 },
            { "muzzle_snds_65_TI_blk_F ", "", 10000, -1 },
            { "muzzle_snds_65_TI_hex_F", "", 10000, -1 },
            { "muzzle_snds_65_TI_ghex_F", "", 10000, -1 },
            { "muzzle_snds_H_MG_blk_F", "", 10000, -1 },
            { "muzzle_snds_H_MG_khk_F", "", 10000, -1 },
            { "optic_ERCO_snd_F", "", 200, -1 },
            { "optic_Holosight", "", 200, -1 },
            { "optic_Holosight_smg", "", 200, -1 },
            { "optic_KHS_tan", "", 200, -1 },
            { "optic_KHS_old", "", 200, -1 },
            { "optic_KHS_hex", "", 200, -1 },
            { "optic_KHS_blk", "", 200, -1 },
            { "optic_MRD", "", 200, -1 },
            { "optic_Yorris", "", 200, -1 },
            { "optic_MRCO", "", 200, -1 },
            { "optic_Aco", "", 200, -1 },
            { "optic_ACO_grn", "", 200, -1 },
            { "optic_Aco_smg", "", 200, -1 },
            { "optic_ACO_grn_smg", "", 200, -1 },
            { "optic_Arco", "", 200, -1 },
            { "optic_Hamr", "", 200, -1 },
            { "optic_Hamr_khk_F", "", 200, -1 },
            { "optic_SOS", "", 200, -1 },
            { "optic_SOS_khk_F", "", 200, -1 },
            { "optic_NVS", "", 200, -1 },
            { "optic_LRPS", "", 200, -1 },
            { "optic_LRPS_ghex_F", "", 200, -1 },
            { "optic_LRPS_tna_F", "", 200, -1 },
            { "optic_AMS", "", 200, -1 },
            { "optic_AMS_khk", "", 200, -1 },
            { "optic_AMS_snd", "", 200, -1 },
            { "optic_DMS", "", 200, -1 }
        };
    };
    class gang
    {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] =
        {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] =
        {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };
    class med_basic
    {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
    class genstore
    {
        name = "Magasin Général";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 50, -1 },
            { "ItemCompass", "", 50, -1 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 2000, -1 }
        };
        mags[] = {};
        accs[] = {};
    };
    class genstoreMed
    {
        name = "Magasin Général Médecin";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 50, -1 },
            { "ItemCompass", "", 50, -1 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 500, { -1 } },
            { "NVGoggles", "", 2000, -1 }
        };
        mags[] = {};
        accs[] = {};
    };
    class genstoreReb
    {
        name = "Magasin Général Rebelle";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 5000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 },
            { "O_NVGoggles_hex_F", "", 500, -1 },
            { "O_NVGoggles_urb_F", "", 500, -1 },
            { "NVGoggles_OPFOR", "", 500, -1 }
        };
        mags[] = {};
        accs[] = {};
    };
    class genstoreCop
    {
        name = "Magasin Général G.N.";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] =
        {
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 500, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 500, -1 }
        };
        mags[] = {};
        accs[] = {};
    };
    class cop_1
    {
        name = "Armurerie G.N. (1C.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Vous n'êtes pas level 1" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "arifle_SDAR_F", "SDAR", 0, -1 },
            { "SMG_05_F", "A-protector", 0, -1 },
            { "SMG_01_Holo_pointer_snds_F", "Vermin", 0, -1 },
            { "SMG_02_F", "Sting", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_2
    {
        name = "Armurerie G.N. (Bgd.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous n'êtes pas level 2" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "arifle_SPAR_01_blk_F", "A-Spar 16 ", 0, -1 },
            { "arifle_CTAR_blk_F", "A CAR95", 2, -1 },
            { "arifle_MX_Black_F", "", 0, -1 },
            { "SmokeShell", "", 1, -1 },
            { "SmokeShellYellow", "", 1, -1 },
            { "SmokeShellGreen", "", 1, -1 },
            { "SmokeShellRed", "", 1, -1 },
            { "SmokeShellPurple", "", 1, -1 },
            { "SmokeShellOrange", "", 1, -1 },
            { "SmokeShellBlue", "", 1, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_3
    {
        name = "Armurerie G.N. (Bgd-C.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Vous n'êtes pas level 3" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "arifle_Katiba_F", "", 0, -1 },
            { "arifle_MX_SW_Black_F", "", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_4
    {
        name = "Armurerie G.N. (Mdl.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Vous n'êtes pas level 4" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "arifle_SPAR_02_blk_F", "A-spar 16S", 0, -1 },
            { "arifle_CTARS_blk_Pointer_F", "A CAR95-1", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_5
    {
        name = "Armurerie G.N. (Gdm.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Vous n'êtes pas level 5" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "arifle_MXM_Black_F", "", 0, -1 },
            { "arifle_ARX_blk_F", "A type 115", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_6
    {
        name = "Armurerie G.N. (Mdl-C.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Vous n'êtes pas level 6" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "srifle_EBR_F", "", 0, -1 },
            { "LMG_03_F", "Lym 85", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_7
    {
        name = "Armurerie G.N. (Adj.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Vous n'êtes pas level 7" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "LMG_Mk200_pointer_F", "", 0, -1 },
            { "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_8
    {
        name = "Armurerie G.N. (Adj-C.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Vous n'êtes pas level 8" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade_Stone", "Flashbang", 1, -1 },
            { "HandGrenade", "", 0, -1 },
            { "LMG_Mk200_pointer_F", "", 0, -1 },
            { "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F", "", 0, -1 },
            { "srifle_DMR_03_F", "", 0, -1 },
            { " srifle_DMR_03_multicam_F", "", 0, -1 },
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_9
    {
        name = "Armurerie G.N. (Maj.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "Vous n'êtes pas level 9" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "LMG_Zafir_pointer_F", "", 0, -1 },
            { "srifle_DMR_02_F", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_10
    {
        name = "Armurerie G.N. (Asp.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "Vous n'êtes pas level 10" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "DemoCharge_Remote_Mag", "", 0, -1 },
            { "srifle_DMR_05_blk_F", "", 0, -1 },
            { "srifle_DMR_05_tan_f", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_11
    {
        name = "Armurerie G.N. (S-Ltn.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 11, "Vous n'êtes pas level 11" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "srifle_LRR_LRPS_F", "", 0, -1 },
            { "srifle_LRR_camo_LRPS_F", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_12
    {
        name = "Armurerie G.N. (Ltn.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 12, "Vous n'êtes pas level 12" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "SatchelCharge_Remote_Mag", "", 0, -1 },
            { "srifle_DMR_04_F", "", 0, -1 },
            { "MMG_02_camo_F", "", 0, -1 },
            { "MMG_02_black_F", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_13
    {
        name = "Armurerie G.N. (Cpt.)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 13, "Vous n'êtes pas level 13/14" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade_Stone", "Flashbang", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "SatchelCharge_Remote_Mag", "", 0, -1 },
            { "B_UavTerminal", "", 0, -1 },
            { "B_UavTerminal", "", 0, -1 },
            { "B_UAV_01_backpack_F", "", 0, -1 },
            { "MMG_01_tan_F", "", 0, -1 },
            { "srifle_GM6_LRPS_F", "", 0, -1 },
            { "srifle_GM6_camo_LRPS_F", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
    class cop_14
    {
        name = "Armurerie G.N. (Cmdt & +)";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 14, "Vous n'êtes pas level 14/15/16/17/18" };
        items[] =
        {
            { "hgun_P07_snds_F", "Tazer", 0, -1 },
            { "SmokeShell", "", 0, -1 },
            { "SmokeShellYellow", "", 0, -1 },
            { "SmokeShellGreen", "", 0, -1 },
            { "SmokeShellRed", "", 0, -1 },
            { "SmokeShellPurple", "", 0, -1 },
            { "SmokeShellOrange", "", 0, -1 },
            { "SmokeShellBlue", "", 0, -1 },
            { "HandGrenade", "", 0, -1 },
            { "SatchelCharge_Remote_Mag", "", 0, -1 },
            { "B_UavTerminal", "", 0, -1 },
            { "B_UavTerminal", "", 0, -1 },
            { "B_UAV_01_backpack_F", "", 0, -1 },
            { "MMG_01_tan_F", "", 0, -1 },
            { "srifle_GM6_LRPS_F", "", 0, -1 },
            { "srifle_GM6_camo_LRPS_F", "", 0, -1 }
        };
        mags[] =
        {
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_93x64_Mag", "", 0, -1 },
            { "130Rnd_338_Mag", "", 0, -1 },
            { "10Rnd_127x54_Mag", "", 0, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, -1 },
            { "30Rnd_65x39_caseless_mag", "", 0, -1 },
            { "30Rnd_65x39_caseless_green", "", 0, -1 },
            { "100Rnd_65x39_caseless_mag", "", 0, -1 },
            { "5Rnd_127x108_APDS_Mag", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "7Rnd_408_Mag", "", 0, -1 },
            { "10Rnd_93x64_DMR_05_Mag", "", 0, -1 },
            { "10Rnd_338_Mag", "", 0, -1 },
            { "20Rnd_762x51_Mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "200Rnd_65x39_cased_Box", "", 0, -1 },
            { "16Rnd_9x21_Mag", "", 0, -1 },
            { "30Rnd_9x21_Mag", "", 0, -1 },
            { "10Rnd_50BW_Mag_F", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "20Rnd_556x45_UW_mag", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0, -1 },
            { "30Rnd_580x42_Mag_F", "", 0, -1 },
            { "100Rnd_580x42_Mag_F", "", 0, -1 },
            { "30Rnd_762x39_Mag_F", "", 0, -1 },
            { "150Rnd_762x54_Box", "", 0, -1 },
            { "200Rnd_556x45_Box_F", "", 0, -1 },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 0, -1 },
            { "Titan_AA", "", 0, -1 },
            { "Titan_AT", "", 0, -1 },
            { "Titan_AP", "", 0, -1 },
            { "NLAW_F", "", 0, -1 },
            { "RPG32_F", "", 0, -1 },
            { "RPG32_HE_F", "", 0, -1 }
        };
        accs[] = {{ "acc_pointer_IR", "", 0, -1 },{ "acc_flashlight", "", 0, -1 },{ "bipod_01_F_snd", "", 0, -1 },{ "bipod_01_F_blk", "", 0, -1 },{ "bipod_01_F_mtp", "", 0, -1 },{ "bipod_02_F_blk", "", 0, -1 },{ "bipod_02_F_tan", "", 0, -1 },{ "bipod_02_F_hex", "", 0, -1 },{ "bipod_03_F_blk", "", 0, -1 },{ "bipod_03_F_oli", "", 0, -1 },{ "bipod_01_F_khk", "", 0, -1 },{ "muzzle_snds_H", "", 0, -1 },{ "muzzle_snds_L", "", 0, -1 },{ "muzzle_snds_M", "", 0, -1 },{ "muzzle_snds_B", "", 0, -1 },{ "muzzle_snds_H_MG", "", 0, -1 },{ "muzzle_snds_H_SW", "", 0, -1 },{ "muzzle_snds_acp", "", 0, -1 },{ "muzzle_snds_338_black", "", 0, -1 },{ "muzzle_snds_338_green", "", 0, -1 },{ "muzzle_snds_338_sand", "", 0, -1 },{ "muzzle_snds_93mmg", "", 0, -1 },{ "muzzle_snds_93mmg_tan", "", 0, -1 },{ "muzzle_snds_H_khk_F", "", 0, -1 },{ "muzzle_snds_H_snd_F", "", 0, -1 },{ "muzzle_snds_58_blk_F", "", 0, -1 },{ "muzzle_snds_m_khk_F", "", 0, -1 },{ "muzzle_snds_m_snd_F", "", 0, -1 },{ "muzzle_snds_B_khk_F", "", 0, -1 },{ "muzzle_snds_B_snd_F", "", 0, -1 },{ "muzzle_snds_58_wdm_F ", "", 0, -1 },{ "muzzle_snds_65_TI_blk_F ", "", 0, -1 },{ "muzzle_snds_65_TI_hex_F", "", 0, -1 },{ "muzzle_snds_65_TI_ghex_F", "", 0, -1 },{ "muzzle_snds_H_MG_blk_F", "", 0, -1 },{ "muzzle_snds_H_MG_khk_F", "", 0, -1 },{ "optic_ERCO_snd_F", "", 0, -1 },{ "optic_Holosight", "", 0, -1 },{ "optic_Holosight_smg", "", 0, -1 },{ "optic_KHS_tan", "", 0, -1 },{ "optic_KHS_old", "", 0, -1 },{ "optic_KHS_hex", "", 0, -1 },{ "optic_KHS_blk", "", 0, -1 },{ "optic_MRD", "", 0, -1 },{ "optic_Yorris", "", 0, -1 },{ "optic_MRCO", "", 0, -1 },{ "optic_Aco", "", 0, -1 },{ "optic_ACO_grn", "", 0, -1 },{ "optic_Aco_smg", "", 0, -1 },{ "optic_ACO_grn_smg", "", 0, -1 },{ "optic_Arco", "", 0, -1 },{ "optic_Hamr", "", 0, -1 },{ "optic_Hamr_khk_F", "", 0, -1 },{ "optic_SOS", "", 0, -1 },{ "optic_SOS_khk_F", "", 0, -1 },{ "optic_NVS", "", 0, -1 },{ "optic_LRPS", "", 0, -1 },{ "optic_LRPS_ghex_F", "", 0, -1 },{ "optic_LRPS_tna_F", "", 0, -1 },{ "optic_AMS", "", 0, -1 },{ "optic_AMS_khk", "", 0, -1 },{ "optic_AMS_snd", "", 0, -1 },{ "optic_DMS", "", 0, -1 }};
    };
};