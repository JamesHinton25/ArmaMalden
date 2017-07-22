#include "..\..\script_macros.hpp"

private ["_skinName"];

switch (playerSide) do
{
    case civilian: { };
    case independent:
    {
        if (uniform player == "U_I_CombatUniform") then { player setObjectTextureGlobal [0, "textures\uniforms\med\med_uniform.jpg"]; };
        if (backpack player != "") then { (unitBackpack player) setObjectTextureGlobal [0, ""]; };
    };
    case west:
    {
        if (backpack player != "") then { (unitBackpack player) setObjectTextureGlobal [0, ""]; };
        if (uniform player == "U_B_CombatUniform_mcam_vest") then { player setObjectTextureGlobal [0, "textures\uniforms\cop\uniform_1.jpg"]; };
        if (uniform player == "U_B_CombatUniform_mcam") then { player setObjectTextureGlobal [0, "textures\uniforms\cop\uniform_2.jpg"]; };
        if (uniform player == "U_B_CombatUniform_mcam_worn") then { player setObjectTextureGlobal [0, "textures\uniforms\cop\uniform_3.jpg"]; };
    };
};
