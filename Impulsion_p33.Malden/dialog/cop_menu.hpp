class life_cop_menu
{
    idd = 8900;
    name= "life_cop_menu";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_copMenu;";
    class controlsBackground
    {
        class MainBackground: Life_RscText
        {
            idc = -1;
            colorBackground[] = {0,0,0,0.7};
            x = 0.314375 * safezoneW + safezoneX;
            y = 0.313 * safezoneH + safezoneY;
            w = 0.37125 * safezoneW;
            h = 0.396 * safezoneH;
        };
        class Life_RscTitleBackground: Life_RscText
        {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            text = "$STR_Cop_Menu";
            x = 0.314375 * safezoneW + safezoneX;
            y = 0.291 * safezoneH + safezoneY;
            w = 0.37125 * safezoneW;
            h = 0.022 * safezoneH;
        };
    };
    class controls
    {
        class RscButtonMenu_2400: Life_RscButtonMenu
        {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.324687 * safezoneW + safezoneX;
            y = 0.643 * safezoneH + safezoneY;
            w = 0.061875 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class PlayerList_Admin: Life_RscListBox
        {
            idc = 8902;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[_this] spawn life_fnc_copQuery";
            x = 0.324687 * safezoneW + safezoneX;
            y = 0.335 * safezoneH + safezoneY;
            w = 0.159844 * safezoneW;
            h = 0.275 * safezoneH;
        };
        class PlayerBInfo: Life_RscStructuredText
        {
            idc = 8903;
            text = "";
            x = 0.489687 * safezoneW + safezoneX;
            y = 0.335 * safezoneH + safezoneY;
            w = 0.185625 * safezoneW;
            h = 0.275 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
    };
};