private ["_house"];

_house = [_this,0,"",[""]] call BIS_fnc_param;
if (_house == "") exitWith {[]};

switch (true) do {
    case (_house in ["Land_i_House_Big_02_V1_F","Land_i_House_Big_02_V2_F","Land_i_House_Big_02_V3_F"]): {[1550000,3]};
    case (_house in ["Land_i_House_Big_01_V1_F","Land_i_House_Big_01_V2_F","Land_i_House_Big_01_V3_F"]): {[2200000,4]};
    case (_house in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"]): {[500000,0]};
    case (_house in ["Land_i_House_Small_01_V1_F","Land_i_House_Small_01_V2_F","Land_i_House_Small_01_V3_F"]): {[1050000,2]};
    case (_house in ["Land_i_House_Small_02_V1_F","Land_i_House_Small_02_V2_F","Land_i_House_Small_02_V3_F"]): {[1000500,2]};
    case (_house in ["Land_i_House_Small_03_V1_F"]): {[1250000,3]};
    case (_house in ["Land_i_Stone_HouseSmall_V2_F","Land_i_Stone_HouseSmall_V1_F","Land_i_Stone_HouseSmall_V3_F"]): {[750000,1]};
    case (_house in ["Land_i_House_Big_02_b_blue_F","Land_i_House_Big_02_b_pink_F","Land_i_House_Big_02_b_whiteblue_F","Land_i_House_Big_02_b_white_F","Land_i_House_Big_02_b_brown_F","Land_i_House_Big_02_b_yellow_F",""]): {[1550000,3]};
    case (_house in ["Land_i_House_Big_01_b_blue_F","Land_i_House_Big_01_b_pink_F","Land_i_House_Big_01_b_whiteblue_F","Land_i_House_Big_01_b_white_F","Land_i_House_Big_01_b_brown_F","Land_i_House_Big_01_b_yellow_F"]): {[2200000,4]};
    case (_house in ["Land_i_House_Small_01_b_blue_F","Land_i_House_Small_01_b_pink_F"]): {[1050000,2]};
    case (_house in ["Land_i_House_Small_02_b_blue_F","Land_i_House_Small_02_b_pink_F","Land_i_House_Small_02_b_whiteblue_F","Land_i_House_Small_02_b_white_F","Land_i_House_Small_02_b_brown_F","Land_i_House_Small_02_b_yellow_F"]): {[1000500,2]};
    default {[]};
};