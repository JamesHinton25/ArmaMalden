class CfgGather
{
    zoneSize = 30;
    class Resources
    {
        class apple
        {
            amount = 5;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
        };
        class peach
        {
            amount = 5;
            zones[] = { "peache_1", "peache_2", "peache_3", "peache_4" };
            item = "";
        };
        class heroin_unprocessed
        {
            amount = 3;
            zones[] = { "heroin_1" };
            item = "";
        };
        class cocaine_unprocessed
        {
            amount = 3;
            zones[] = { "cocaine_1" };
            item = "";
        };
        class cannabis
        {
            amount = 3;
            zones[] = { "weed_1" };
            item = "";
        };
        class potatoe_unprocessed
        {
            amout = 3;
            zones[] = { "potatoe_1" };
            item = "";
        };
    };
    class Minerals
    {
        class copper_unrefined
        {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
        };
        class iron_unrefined
        {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
        };
        class salt_unrefined
        {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
        };
        class sand
        {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
        };
        class diamond_uncut
        {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
        };
    };
};
