class CfgPatches {
  class RPL_Characters_Headgear {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "DZ_Characters"
    };
  };
};
class CfgVehicles {
  class Clothing_Base;
  class PrisonerCap;
  class RPL_PrisonerCap_Olive: PrisonerCap {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\prison_cap_green_co.paa",
      "RevivalPlus\characters\headgear\data\prison_cap_green_co.paa",
      "RevivalPlus\characters\headgear\data\prison_cap_green_co.paa"
    };
  };
  class CowboyHat_ColorBase;
  class RPL_CowboyHat_BlackWhite: CowboyHat_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\cowboyhat_pattern1_cowboy_co.paa",
      "RevivalPlus\characters\headgear\data\cowboyhat_pattern1_cowboy_co.paa",
      "RevivalPlus\characters\headgear\data\cowboyhat_pattern1_cowboy_co.paa"
    };
  };
  class RPL_CowboyHat_BrownWhite: CowboyHat_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\cowboyhat_pattern2_cowboy_co.paa",
      "RevivalPlus\characters\headgear\data\cowboyhat_pattern2_cowboy_co.paa",
      "RevivalPlus\characters\headgear\data\cowboyhat_pattern2_cowboy_co.paa"
    };
  };
  class RPL_CowboyHat_DarkBrown: CowboyHat_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\cowboyhat_darkbrown_co.paa",
      "RevivalPlus\characters\headgear\data\cowboyhat_darkbrown_co.paa",
      "RevivalPlus\characters\headgear\data\cowboyhat_darkbrown_co.paa"
    };
  };

  class NBCHoodBase;
  class RPL_NBCHood_Black: NBCHoodBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\nbc_hood_black_co.paa",
      "RevivalPlus\characters\headgear\data\nbc_hood_black_co.paa",
      "RevivalPlus\characters\headgear\data\nbc_hood_black_co.paa"
    };
  };
  class RPL_NBCHood_Yellow: NBCHoodBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\nbc_hood_yellow_co.paa",
      "RevivalPlus\characters\headgear\data\nbc_hood_yellow_co.paa",
      "RevivalPlus\characters\headgear\data\nbc_hood_yellow_co.paa"
    };
  };
  class RPL_NBCHood_Green: NBCHoodBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\nbc_hood_green_co.paa",
      "RevivalPlus\characters\headgear\data\nbc_hood_green_co.paa",
      "RevivalPlus\characters\headgear\data\nbc_hood_green_co.paa"
    };
  };
  class RPL_NBCHood_Blue: NBCHoodBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\nbc_hood_blue_co.paa",
      "RevivalPlus\characters\headgear\data\nbc_hood_blue_co.paa",
      "RevivalPlus\characters\headgear\data\nbc_hood_blue_co.paa"
    };
  };

  class MilitaryBeret_ColorBase;
  class RPL_MilitaryBeret_Black: MilitaryBeret_ColorBase {
    scope = 2;
    displayName = "#STR_MilitaryBeret_Black";
    descriptionShort = "#STR_MilitaryBeret_Black_Description";
    model = "\DZ\characters\headgear\MilitaryBeret_g.p3d";
    class ClothingTypes {
      male = "\DZ\characters\headgear\MilitaryBeret_m.p3d";
      female = "\DZ\characters\headgear\MilitaryBeret_f.p3d";
    };
    hiddenSelections[] = {
      "camoGround",
      "camoMale",
      "camoFemale"
    };
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\militaryberet_black_co.paa",
      "RevivalPlus\characters\headgear\data\militaryberet_black_co.paa",
      "RevivalPlus\characters\headgear\data\militaryberet_black_co.paa"
    };
  };
  class BallisticHelmet_ColorBase;
  class RPL_BallisticHelmet_Green: BallisticHelmet_ColorBase {
    scope = 2;
    weight = 980;
    lootTag[] = {
      "Military_west"
    };
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\helmetmich_green_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_green_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_green_co.paa"
    };
  };
  class RPL_BallisticHelmet_Blue: BallisticHelmet_ColorBase {
    scope = 2;
    weight = 980;
    lootTag[] = {
      "Military_west"
    };
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\helmetmich_blue_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_blue_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_blue_co.paa"
    };
  };
  class RPL_BallisticHelmet_Black: BallisticHelmet_ColorBase {
    scope = 2;
    weight = 980;
    lootTag[] = {
      "Military_west"
    };
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\helmetmich_black_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_black_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_black_co.paa"
    };
  };
  class RPL_BallisticHelmet_Black_Punisher: BallisticHelmet_ColorBase {
    scope = 2;
    weight = 980;
    lootTag[] = {
      "Military_west"
    };
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\helmetmich_black_punisher_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_black_punisher_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_black_punisher_co.paa"
    };
  };
  class BaseballCap_ColorBase;
  class RPL_BaseballCap_WalkingDead: BaseballCap_ColorBase {
    scope = 2;
    color = "WalkingDead";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_wd_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_wd_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_wd_co.paa"
    };
  };
  class RPL_BaseballCap_TTsKO: BaseballCap_ColorBase {
    scope = 2;
    color = "TTsKO";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_co.paa"
    };
  };
  class RPL_BaseballCap_TTsKO_Urban: BaseballCap_ColorBase {
    scope = 2;
    color = "TTsKOU";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_greyscale_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_greyscale_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_greyscale_co.paa"
    };
  };
  class RPL_BaseballCap_RUSMPT: BaseballCap_ColorBase {
    scope = 2;
    color = "RUSMPT";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_marpat_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_marpat_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_marpat_co.paa"
    };
  };
  class RPL_BaseballCap_RUSMPT_Winter: BaseballCap_ColorBase {
    scope = 2;
    color = "WINMPT";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_winpat_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_winpat_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_winpat_co.paa"
    };
  };
  class RPL_BaseballCap2_ColorBase: Clothing_Base {
    displayName = "$STR_CfgVehicles_BaseballCap_ColorBase0";
    descriptionShort = "$STR_CfgVehicles_BaseballCap_ColorBase1";
    model = "RevivalPlus\characters\headgear\RPL_BaseballCap2_G.p3d";
    inventorySlot[] = {
      "Headgear"
    };
    simulation = "clothing";
    vehicleClass = "Clothing";
    ContinuouActions[] = {
      "AT_WRING_CLOTHES"
    };
    itemInfo[] = {
      "Clothing",
      "Headgear"
    };
    rotationFlags = 16;
    weight = 110;
    itemSize[] = {
      2,
      1
    };
    varWetMax = 0.79;
    heatIsolation = 0.5;
    repairableWithKits[] = {
      5,
      2
    };
    repairCosts[] = {
      30,
      25
    };
    headSelectionsToHide[] = {
      "Clipping_baseballcap"
    };
    hiddenSelections[] = {
      "camoGround",
      "camoMale",
      "camoFemale"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 100;
          healthLevels[] = {
            {
              1,
              {
                "DZ\characters\headgear\data\baseballcapii.rvmat"
              }
            },
            {
              0.7,
              {
                "DZ\characters\headgear\data\baseballcapii.rvmat"
              }
            },
            {
              0.5,
              {
                "DZ\characters\headgear\data\baseballcapii_damage.rvmat"
              }
            },
            {
              0.3,
              {
                "DZ\characters\headgear\data\baseballcapii_damage.rvmat"
              }
            },
            {
              0,
              {
                "DZ\characters\headgear\data\baseballcapii_destruct.rvmat"
              }
            }
          };
        };
      };
    };
    class ClothingTypes {
      male = "RevivalPlus\characters\headgear\RPL_BaseballCap2_M.p3d";
      female = "RevivalPlus\characters\headgear\RPL_BaseballCap2_F.p3d";
    };
    class AnimEvents {
      class SoundWeapon {
        class pickUpItem {
          soundSet = "Shirt_pickup_SoundSet";
          id = 797;
        };
        class drop {
          soundset = "Shirt_drop_SoundSet";
          id = 898;
        };
      };
    };
  };
  class RPL_BaseballCap2_Blue: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "Blue";
    visibilityModifier = 0.95;
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_blue_co.paa",
      "\dz\characters\headgear\data\baseballcapii_blue_co.paa",
      "\dz\characters\headgear\data\baseballcapii_blue_co.paa"
    };
  };
  class RPL_BaseballCap2_Beige: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "Beige";
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_beige_co.paa",
      "\dz\characters\headgear\data\baseballcapii_beige_co.paa",
      "\dz\characters\headgear\data\baseballcapii_beige_co.paa"
    };
  };
  class RPL_BaseballCap2_Black: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "Black";
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_black_co.paa",
      "\dz\characters\headgear\data\baseballcapii_black_co.paa",
      "\dz\characters\headgear\data\baseballcapii_black_co.paa"
    };
  };
  class RPL_BaseballCap2_Olive: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "Olive";
    visibilityModifier = 0.8;
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_olive_co.paa",
      "\dz\characters\headgear\data\baseballcapii_olive_co.paa",
      "\dz\characters\headgear\data\baseballcapii_olive_co.paa"
    };
  };
  class RPL_BaseballCap2_Pink: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "Pink";
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_pink_co.paa",
      "\dz\characters\headgear\data\baseballcapii_pink_co.paa",
      "\dz\characters\headgear\data\baseballcapii_pink_co.paa"
    };
  };
  class RPL_BaseballCap2_Red: RPL_BaseballCap2_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_red_co.paa",
      "\dz\characters\headgear\data\baseballcapii_red_co.paa",
      "\dz\characters\headgear\data\baseballcapii_red_co.paa"
    };
    color = "Red";
  };
  class RPL_BaseballCap2_Camo: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "Camo";
    visibilityModifier = 0.75;
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_camo_co.paa",
      "\dz\characters\headgear\data\baseballcapii_camo_co.paa",
      "\dz\characters\headgear\data\baseballcapii_camo_co.paa"
    };
  };
  class RPL_BaseballCap2_CMMGBlack: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "CMMGBlack";
    visibilityModifier = 0.8;
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
      "\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
      "\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa"
    };
  };
  class RPL_BaseballCap2_CMMGPink: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "CMMGPink";
    hiddenSelectionsTextures[] = {
      "\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
      "\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
      "\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa"
    };
  };
  class RPL_BaseballCap2_TTsKO: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "TTsKO";
    visibilityModifier = 0.75;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_co.paa"
    };
  };
  class RPL_BaseballCap2_TTsKO_Urban: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "TTsKOU";
    visibilityModifier = 0.75;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_greyscale_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_greyscale_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_ttsko_greyscale_co.paa"
    };
  };
  class RPL_BaseballCap2_RUSMPT: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "RUSMPT";
    visibilityModifier = 0.75;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_marpat_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_marpat_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_marpat_co.paa"
    };
  };
  class RPL_BaseballCap2_RUSMPT_Winter: RPL_BaseballCap2_ColorBase {
    scope = 2;
    color = "WINMPT";
    visibilityModifier = 0.75;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_winpat_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_winpat_co.paa",
      "RevivalPlus\characters\headgear\data\baseballcap_spetsnaz_winpat_co.paa"
    };
  };

  class BurlapSackCover;
  class RPL_BurlapSackCover_PaintBase: BurlapSackCover {
    scope = 0;
  };
  class RPL_BurlapSackCover_Black: RPL_BurlapSackCover_PaintBase {
    scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\head_sack_black_co.paa",
      "RevivalPlus\characters\headgear\data\head_sack_black_co.paa",
      "RevivalPlus\characters\headgear\data\head_sack_black_co.paa"
    };
  };
  class RPL_BurlapSackCover_Olive: RPL_BurlapSackCover_PaintBase {
    scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\head_sack_olive_co.paa",
      "RevivalPlus\characters\headgear\data\head_sack_olive_co.paa",
      "RevivalPlus\characters\headgear\data\head_sack_olive_co.paa"
    };
  };
  class RPL_BurlapSackCover_DarkTan: RPL_BurlapSackCover_PaintBase {
    scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\head_sack_darktan_co.paa",
      "RevivalPlus\characters\headgear\data\head_sack_darktan_co.paa",
      "RevivalPlus\characters\headgear\data\head_sack_darktan_co.paa"
    };
  };
  class RPL_BurlapSackCover_White: RPL_BurlapSackCover_PaintBase {
    scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\head_sack_white_co.paa",
      "RevivalPlus\characters\headgear\data\head_sack_white_co.paa",
      "RevivalPlus\characters\headgear\data\head_sack_white_co.paa"
    };
  };

  class RPL_BallisticHelmet_PaintBase: BallisticHelmet_ColorBase {
    scope = 0;
  };
  class RPL_BallisticHelmet2_Black: RPL_BallisticHelmet_PaintBase {
    scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\helmetmich_black_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_black_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_black_co.paa"
    };
  };
  class RPL_BallisticHelmet2_Olive: RPL_BallisticHelmet_PaintBase {
    scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\helmetmich_olive_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_olive_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_olive_co.paa"
    };
  };
  class RPL_BallisticHelmet2_DarkTan: RPL_BallisticHelmet_PaintBase {
    scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\helmetmich_darktan_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_darktan_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_darktan_co.paa"
    };
  };
  class RPL_BallisticHelmet2_White: RPL_BallisticHelmet_PaintBase {
    scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\helmetmich_white_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_white_co.paa",
      "RevivalPlus\characters\headgear\data\helmetmich_white_co.paa"
    };
  };

  class GorkaHelmet;
  class RPL_GorkaHelmet_PaintBase: GorkaHelmet {
    scope = 0;
  };
  class RPL_GorkaHelmet_Black: RPL_GorkaHelmet_PaintBase {
    scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\maska_black_co.paa",
      "RevivalPlus\characters\headgear\data\maska_black_co.paa",
      "RevivalPlus\characters\headgear\data\maska_black_co.paa"
    };
  };
  class RPL_GorkaHelmet_Olive: RPL_GorkaHelmet_PaintBase {
    scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\maska_olive_co.paa",
      "RevivalPlus\characters\headgear\data\maska_olive_co.paa",
      "RevivalPlus\characters\headgear\data\maska_olive_co.paa"
    };
  };
  class RPL_GorkaHelmet_DarkTan: RPL_GorkaHelmet_PaintBase {
    scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\maska_darktan_co.paa",
      "RevivalPlus\characters\headgear\data\maska_darktan_co.paa",
      "RevivalPlus\characters\headgear\data\maska_darktan_co.paa"
    };
  };
  class RPL_GorkaHelmet_White: RPL_GorkaHelmet_PaintBase {
    scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\maska_white_co.paa",
      "RevivalPlus\characters\headgear\data\maska_white_co.paa",
      "RevivalPlus\characters\headgear\data\maska_white_co.paa"
    };
  };

  class MotoHelmet_ColorBase;
  class RPL_MotoHelmet_PaintBase: MotoHelmet_ColorBase {
    scope = 0;
  };
  class RPL_MotoHelmet_Black: RPL_MotoHelmet_PaintBase {
    scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\motohelmet_black_co.paa"
    };
  };
  class RPL_MotoHelmet_Olive: RPL_MotoHelmet_PaintBase {
    scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\motohelmet_olive_co.paa"
    };
  };
  class RPL_MotoHelmet_DarkTan: RPL_MotoHelmet_PaintBase {
    scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\motohelmet_darktan_co.paa"
    };
  };
  class RPL_MotoHelmet_White: RPL_MotoHelmet_PaintBase {
    scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\motohelmet_white_co.paa"
    };
  };

  class Ushanka_ColorBase;
  class RPL_Ushanka_ColorBase : Ushanka_ColorBase
  {
    scope = 0;
    hiddenSelections[] = {"camoGround", "camoMale", "camoFemale"};
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\headgear\data\ushanka.rvmat",
      "RevivalPlus\characters\headgear\data\ushanka.rvmat",
      "RevivalPlus\characters\headgear\data\ushanka.rvmat",
    };
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints = 100;
          healthLevels[] = {
            {1.0,{"RevivalPlus\characters\headgear\data\ushanka.rvmat"}},
            {0.7,{"RevivalPlus\characters\headgear\data\ushanka.rvmat"}},
            {0.5,{"RevivalPlus\characters\headgear\data\ushanka_damage.rvmat"}},
            {0.3,{"RevivalPlus\characters\headgear\data\ushanka_damage.rvmat"}},
            {0.0,{"RevivalPlus\characters\headgear\data\ushanka_destruct.rvmat"}}
          };
        };
      };
    };
  };
  class RPL_Ushanka_Blue_Russia : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_blue_russia_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_blue_russia_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_blue_russia_co.paa"
    };
  };
  class RPL_Ushanka_Blue_CCCP : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_blue_cccp_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_blue_cccp_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_blue_cccp_co.paa"
    };
  };
  class RPL_Ushanka_Blue_Chernarus : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_blue_chernarus_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_blue_chernarus_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_blue_chernarus_co.paa"
    };
  };
  class RPL_Ushanka_Black_Russia : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_black_russia_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_black_russia_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_black_russia_co.paa"
    };
  };
  class RPL_Ushanka_Black_CCCP : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_black_cccp_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_black_cccp_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_black_cccp_co.paa"
    };
  };
  class RPL_Ushanka_Black_Chernarus : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_black_chernarus_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_black_chernarus_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_black_chernarus_co.paa"
    };
  };
  class RPL_Ushanka_Green_Russia : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_green_russia_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_green_russia_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_green_russia_co.paa"
    };
  };
  class RPL_Ushanka_Green_CCCP : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_green_cccp_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_green_cccp_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_green_cccp_co.paa"
    };
  };
  class RPL_Ushanka_Green_Chernarus : RPL_Ushanka_ColorBase
  {
    scope = 2;
    displayName = "$STR_RPL_Ushanka_Patch";
    descriptionShort = "$STR_RPL_Ushanka_Patch_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_green_chernarus_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_green_chernarus_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_green_chernarus_co.paa"
    };
  };

  /* Festive Items */

  class RPL_Ushanka_Christmas : Ushanka_ColorBase
  {
    scope = 0;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\ushanka_christmas_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_christmas_co.paa",
      "RevivalPlus\characters\headgear\data\ushanka_christmas_co.paa"
    };
  };

  // Christmas
  class SantasHat;
  class RPL_SantasHat_Crook : SantasHat
  {
    scope = 2;
    displayName = "$STR_RPL_SantasHat_Crook";
    descriptionShort = "$STR_RPL_SantasHat_Crook_D";
    hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\santashat_crook_co.paa",
      "RevivalPlus\characters\headgear\data\santashat_crook_co.paa",
      "RevivalPlus\characters\headgear\data\santashat_crook_co.paa"
    };
  };
  class RPL_SantasHat_Green : SantasHat
  {
    scope = 2;
    displayName = "$STR_RPL_SantasHat_Green";
    descriptionShort = "$STR_RPL_SantasHat_Green_D";
    hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\headgear\data\santashat_green_co.paa",
      "RevivalPlus\characters\headgear\data\santashat_green_co.paa",
      "RevivalPlus\characters\headgear\data\santashat_green_co.paa"
    };
  };


};
