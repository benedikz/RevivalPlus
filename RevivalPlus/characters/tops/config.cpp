class CfgPatches {
  class RPL_Characters_Tops {
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

  class NurseDress_ColorBase;
  class RPL_NurseDress_Black: NurseDress_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\nursedress_black_co.paa",
      "RevivalPlus\characters\tops\data\nursedress_black_co.paa",
      "RevivalPlus\characters\tops\data\nursedress_black_co.paa"
    };
	};

  class TTsKOJacket_ColorBase;
  class RPL_TTsKOJacket_Flora: TTsKOJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.5;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\ttsko_jacket_flora_co.paa",
      "RevivalPlus\characters\tops\data\ttsko_jacket_flora_co.paa",
      "RevivalPlus\characters\tops\data\ttsko_jacket_flora_co.paa"
    };
  };

  class Sweater_ColorBase;
  class RPL_Sweater_BlueRUS: Sweater_ColorBase {
    scope = 2;
    visibilityModifier = 0.95;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\sweater_blue_rus_g_co.paa",
      "RevivalPlus\characters\tops\data\sweater_blue_rus_co.paa",
      "RevivalPlus\characters\tops\data\sweater_blue_rus_co.paa"
    };
  };
  class RPL_Sweater_MilitaryRUS: Sweater_ColorBase {
    scope = 2;
    visibilityModifier = 0.95;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\sweater_green_rusarmy_g_co.paa",
      "RevivalPlus\characters\tops\data\sweater_green_rusarmy_co.paa",
      "RevivalPlus\characters\tops\data\sweater_green_rusarmy_co.paa"
    };
  };
  class RPL_Sweater_DarkGray: Sweater_ColorBase {
    scope = 2;
    visibilityModifier = 0.95;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\sweater_darkgrey_g_co.paa",
      "RevivalPlus\characters\tops\data\sweater_darkgrey_co.paa",
      "RevivalPlus\characters\tops\data\sweater_darkgrey_co.paa"
    };
  };

  class Blouse_ColorBase;
  class RPL_Blouse_Camo: Blouse_ColorBase {
    scope = 2;
    visibilityModifier = 0.95;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\blouse_camo_co.paa",
      "RevivalPlus\characters\tops\data\blouse_camo_co.paa",
      "RevivalPlus\characters\tops\data\blouse_camo_co.paa"
    };
  };
  class RPL_Blouse_NavyBlue: Blouse_ColorBase {
    scope = 2;
    visibilityModifier = 0.95;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\blouse_navyblue_co.paa",
      "RevivalPlus\characters\tops\data\blouse_navyblue_co.paa",
      "RevivalPlus\characters\tops\data\blouse_navyblue_co.paa"
    };
  };

  class PrisonUniformJacket;
  class RPL_PrisonUniformJacket_Olive: PrisonUniformJacket {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\prison_top_green_g_co.paa",
      "RevivalPlus\characters\tops\data\prison_top_green_co.paa",
      "RevivalPlus\characters\tops\data\prison_top_green_co.paa"
    };
  };
  class RPL_PrisonUniformJacket_Orange: PrisonUniformJacket {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\prison_top_orange_g_co.paa",
      "RevivalPlus\characters\tops\data\prison_top_orange_co.paa",
      "RevivalPlus\characters\tops\data\prison_top_orange_co.paa"
    };
  };
  class RPL_PrisonUniformJacket_LividBrown: PrisonUniformJacket {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\prison_top_lividbrown_g_co.paa",
      "RevivalPlus\characters\tops\data\prison_top_lividbrown_co.paa",
      "RevivalPlus\characters\tops\data\prison_top_lividbrown_co.paa"
    };
  };

  class Shirt_ColorBase;
  class RPL_Shirt_CheckBrown: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_checkbrown_co.paa",
      "RevivalPlus\characters\tops\data\shirt_checkbrown_co.paa",
      "RevivalPlus\characters\tops\data\shirt_checkbrown_co.paa"
    };
  };
  class RPL_Shirt_CheckGreen: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_checkgreen_co.paa",
      "RevivalPlus\characters\tops\data\shirt_checkgreen_co.paa",
      "RevivalPlus\characters\tops\data\shirt_checkgreen_co.paa"
    };
  };
  class RPL_Shirt_CheckViolet: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_checkviolet_co.paa",
      "RevivalPlus\characters\tops\data\shirt_checkviolet_co.paa",
      "RevivalPlus\characters\tops\data\shirt_checkviolet_co.paa"
    };
  };
  class RPL_Shirt_PlaneAirbourne: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planemineshaft_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planeairbourne_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planeairbourne_co.paa"
    };
  };
  class RPL_Shirt_PlaneBlue: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planeblue_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planeblue_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planeblue_co.paa"
    };
  };
  class RPL_Shirt_PlaneBrown: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planebrown_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planebrown_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planebrown_co.paa"
    };
  };
  class RPL_Shirt_PlaneDenimBlue: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planedenimblue_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planedenimblue_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planedenimblue_co.paa"
    };
  };
  class RPL_Shirt_PlaneGreen: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planegreen_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planegreen_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planegreen_co.paa"
    };
  };
  class RPL_Shirt_PlaneLightBlue: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planelblue_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planelblue_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planelblue_co.paa"
    };
  };
  class RPL_Shirt_PlaneMineshaft: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planemineshaft_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planemineshaft_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planemineshaft_co.paa"
    };
  };
  class RPL_Shirt_PlaneMint: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planemint_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planemint_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planemint_co.paa"
    };
  };
  class RPL_Shirt_PlanePink: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planepink_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planepink_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planepink_co.paa"
    };
  };
  class RPL_Shirt_PlaneSandy: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planesand_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planesandy_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planesandy_co.paa"
    };
  };
  class RPL_Shirt_PlaneThunder: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planethunder_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planethunder_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planethunder_co.paa"
    };
  };
  class RPL_Shirt_PlaneWhite: Shirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\shirt_ground_planewhite_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planewhite_co.paa",
      "RevivalPlus\characters\tops\data\shirt_planewhite_co.paa"
    };
  };

  class NBCJacketBase;
  class RPL_NBCJacket_Black: NBCJacketBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\nbc_jacket_g_black_co.paa",
      "RevivalPlus\characters\tops\data\nbc_jacket_black_co.paa",
      "RevivalPlus\characters\tops\data\nbc_jacket_black_co.paa"
    };
  };
  class RPL_NBCJacket_Yellow: NBCJacketBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\nbc_jacket_yellow_g_co.paa",
      "RevivalPlus\characters\tops\data\nbc_jacket_yellow_co.paa",
      "RevivalPlus\characters\tops\data\nbc_jacket_yellow_co.paa"
    };
  };
  class RPL_NBCJacket_Green: NBCJacketBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\nbc_jacket_green_g_co.paa",
      "RevivalPlus\characters\tops\data\nbc_jacket_green_co.paa",
      "RevivalPlus\characters\tops\data\nbc_jacket_green_co.paa"
    };
  };
  class RPL_NBCJacket_Blue: NBCJacketBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\nbc_jacket_blue_g_co.paa",
      "RevivalPlus\characters\tops\data\nbc_jacket_blue_co.paa",
      "RevivalPlus\characters\tops\data\nbc_jacket_blue_co.paa"
    };
  };

  class TelnyashkaShirt;
  class RPL_TelnyashkaShirt_BlackWhite: TelnyashkaShirt {
    scope = 2;
    displayName = "#STR_Telnyashka_Shirt";
    descriptionShort = "#STR_Telnyashka_Shirt_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\telnyashka_blkwht_co.paa",
      "RevivalPlus\characters\tops\data\telnyashka_blkwht_co.paa",
      "RevivalPlus\characters\tops\data\telnyashka_blkwht_co.paa"
    };
  };
  class RPL_TelnyashkaShirt_Red: TelnyashkaShirt {
    scope = 2;
    displayName = "#STR_Telnyashka_Shirt";
    descriptionShort = "#STR_Telnyashka_Shirt_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\telnyashka_red_co.paa",
      "RevivalPlus\characters\tops\data\telnyashka_red_co.paa",
      "RevivalPlus\characters\tops\data\telnyashka_red_co.paa"
    };
  };
  class RPL_TelnyashkaShirt_Orange: TelnyashkaShirt {
    scope = 2;
    displayName = "#STR_Telnyashka_Shirt";
    descriptionShort = "#STR_Telnyashka_Shirt_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\telnyashka_orange_co.paa",
      "RevivalPlus\characters\tops\data\telnyashka_orange_co.paa",
      "RevivalPlus\characters\tops\data\telnyashka_orange_co.paa"
    };
  };

  class RPL_LongSleeveShirt_Base: TelnyashkaShirt {
    scope = 0;
    hiddenSelections[] = {
      "camoGround",
      "camoMale",
      "camoFemale"
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\tops\data\longsleeveshirt.rvmat",
      "RevivalPlus\characters\tops\data\longsleeveshirt.rvmat",
      "RevivalPlus\characters\tops\data\longsleeveshirt.rvmat"
    };
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\telnyashka_blkwht_co.paa",
      "RevivalPlus\characters\tops\data\telnyashka_blkwht_co.paa",
      "RevivalPlus\characters\tops\data\telnyashka_blkwht_co.paa"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 100;
          healthLevels[] = {
            {
              1,
              {
                "RevivalPlus\characters\tops\data\longsleeveshirt.rvmat"
              }
            },
            {
              0.7,
              {
                "RevivalPlus\characters\tops\data\longsleeveshirt.rvmat"
              }
            },
            {
              0.5,
              {
                "RevivalPlus\characters\tops\data\longsleeveshirt_damage.rvmat"
              }
            },
            {
              0.3,
              {
                "RevivalPlus\characters\tops\data\longsleeveshirt_damage.rvmat"
              }
            },
            {
              0,
              {
                "RevivalPlus\characters\tops\data\longsleeveshirt_destruct.rvmat"
              }
            }
          };
        };
      };
    };
  };
  class RPL_LongSleeveShirt_Blue: RPL_LongSleeveShirt_Base {
    scope = 2;
    displayName = "#STR_LongSleeveShirt";
    descriptionShort = "#STR_LongSleeveShirt_Blue_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\longsleeve_blueish_co.paa",
      "RevivalPlus\characters\tops\data\longsleeve_blueish_co.paa",
      "RevivalPlus\characters\tops\data\longsleeve_blueish_co.paa"
    };
  };
  class RPL_LongSleeveShirt_Green: RPL_LongSleeveShirt_Base {
    scope = 2;
    displayName = "#STR_LongSleeveShirt";
    descriptionShort = "#STR_LongSleeveShirt_Green_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\longsleeve_green_co.paa",
      "RevivalPlus\characters\tops\data\longsleeve_green_co.paa",
      "RevivalPlus\characters\tops\data\longsleeve_green_co.paa"
    };
  };
  class RPL_LongSleeveShirt_VineGray: RPL_LongSleeveShirt_Base {
    scope = 2;
    displayName = "#STR_LongSleeveShirt";
    descriptionShort = "#STR_LongSleeveShirt_VineGray_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\longsleeve_vinegray_co.paa",
      "RevivalPlus\characters\tops\data\longsleeve_vinegray_co.paa",
      "RevivalPlus\characters\tops\data\longsleeve_vinegray_co.paa"
    };
  };

  class TShirt_ColorBase;
  class RPL_TShirt_ColorBase: TShirt_ColorBase {};
  class RPL_TShirt_Black_Adios: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_Black_Adios";
    descriptionShort = "#STR_TShirt_Black_Adios_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_ground_black_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_black_adios_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_black_adios_co.paa"
    };
  };
  class RPL_TShirt_White_Adios: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_White_Adios";
    descriptionShort = "#STR_TShirt_White_Adios_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_ground_white_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_white_adios_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_white_adios_co.paa"
    };
  };
  class RPL_TShirt_White_Bloody: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_White_Bloody";
    descriptionShort = "#STR_TShirt_White_Bloody_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_ground_whitebloody_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_white_bloody_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_white_bloody_co.paa"
    };
  };
  class RPL_TShirt_Black_Bloody: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_Black_Bloody";
    descriptionShort = "#STR_TShirt_Black_Bloody_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_ground_blackbloody_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_black_bloody_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_black_bloody_co.paa"
    };
  };
  class RPL_TShirt_VineRed_Sputnik: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_VineRed_Sputnik";
    descriptionShort = "#STR_TShirt_VineRed_Sputnik_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_ground_sputnik_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_hardred_sputnik_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_hardred_sputnik_co.paa"
    };
  };
  class RPL_TShirt_Black_Sputnik: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_Black_Sputnik";
    descriptionShort = "#STR_TShirt_Black_Sputnik_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_ground_sputnik2_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_hardblack_sputnik_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_hardblack_sputnik_co.paa"
    };
  };
  class RPL_TShirt_NavyBlue_Sputnik: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_NavyBlue_Sputnik";
    descriptionShort = "#STR_TShirt_NavyBlue_Sputnik_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_ground_sputnik3_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_navyblue_sputnik_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_navyblue_sputnik_co.paa"
    };
  };
  class RPL_TShirt_RussianGreb: RPL_TShirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_russiangreb_ground_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_russiangreb_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_russiangreb_co.paa"
    };
  };
  class RPL_EasterEgg_Lada: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_EasterEgg_Lada";
    descriptionShort = "#STR_EasterEgg_Lada_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_ground_black_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_easteregg1_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_easteregg1_co.paa"
    };
  };
  class RPL_TShirt_BlackOrangeStripes: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "Pruhované tričko";
    descriptionShort = "Černo-oranžové pruhované tričko.";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_stripes_blackorange_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_stripes_blackorange_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_stripes_blackorange_co.paa"
    };
  };
  class RPL_TShirt_BlackLBrownStripes: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "Pruhované tričko";
    descriptionShort = "Černo-hnědé pruhované tričko.";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_stripes_blacklightbrown_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_stripes_blacklightbrown_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_stripes_blacklightbrown_co.paa"
    };
  };
  class RPL_TShirt_GreyWhiteStripes: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "Pruhované tričko";
    descriptionShort = "Šedo-bílé pruhované tričko.";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_stripes_greywhite_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_stripes_greywhite_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_stripes_greywhite_co.paa"
    };
  };
  class RPL_TShirt_Police: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_Police";
    descriptionShort = "#STR_TShirt_Police_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_police_g_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_police_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_police_co.paa"
    };
  };
  class RPL_TShirt_Astra: RPL_TShirt_ColorBase {
    scope = 2;
    displayName = "#STR_TShirt_Astra";
    descriptionShort = "#STR_TShirt_Astra_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_astra_g_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_astra_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_astra_co.paa"
    };
  };
  class RPL_TShirt_White_Chernarus: RPL_TShirt_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tshirt_white_chernarus_g_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_white_chernarus_co.paa",
      "RevivalPlus\characters\tops\data\tshirt_white_chernarus_co.paa"
    };
  };

  /* Half-Shirts */
  class RPL_HalfShirt_Base: RPL_TShirt_ColorBase {
    scope = 0;
    displayName = "#STR_HalfShirt_Base";
    descriptionShort = "#STR_HalfShirt_Base_D";
  };
  class RPL_HalfShirt_White: RPL_HalfShirt_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\halfshirt_white_g_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_white_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_white_co.paa"
    };
  };
  class RPL_HalfShirt_Blue: RPL_HalfShirt_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\halfshirt_blue_g_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_blue_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_blue_co.paa"
    };
  };
  class RPL_HalfShirt_Gray: RPL_HalfShirt_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\halfshirt_gray_g_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_gray_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_gray_co.paa"
    };
  };
  class RPL_HalfShirt_Red: RPL_HalfShirt_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\halfshirt_red_g_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_red_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_red_co.paa"
    };
  };
  class RPL_HalfShirt_Violet: RPL_HalfShirt_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\halfshirt_violet_g_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_violet_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_violet_co.paa"
    };
  };
  class RPL_HalfShirt_Yellow: RPL_HalfShirt_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\halfshirt_yellow_g_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_yellow_co.paa",
      "RevivalPlus\characters\tops\data\halfshirt_yellow_co.paa"
    };
  };


  class Hoodie_ColorBase;
  // NAHRADIT NOVEJMA (GROUND TEXTURY)
  class RPL_Hoodie_TwoTone_Blue: Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_bluetwotone_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_bluetwotone_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_bluetwotone_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_bluetwotone_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_bluetwotone_co.paa"
    };
  };
  /* GROUND */
  class RPL_Hoodie_TwoTone_Brown: Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_brown_twotone_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_brown_twotone_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_brown_twotone_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_brown_twotone_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_brown_twotone_co.paa"
    };
  };
  /* GROUND */
  class RPL_Hoodie_SolidBlack: Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_black_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_black_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_black_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_black_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_black_co.paa"
    };
  };
  class RPL_Hoodie_BlackGray : Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_ground_blackgray_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_blackgray_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_blackgray_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_blackgray_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_blackgray_co.paa"
    };
  };
  class RPL_Hoodie_GreyOlive: Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_grd_greyolive_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_greyolive_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_greyolive_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_greyolive_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_greyolive_co.paa"
    };
  };
  class RPL_Hoodie_FlanelBlack : Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_grd_flanelblack_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelblack_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelblack_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelblack_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelblack_co.paa"
    };
  };
  class RPL_Hoodie_FlanelBlack_Skull : Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_grd_flanelblack_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelskull_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelskull_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelskull_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelskull_co.paa"
    };
  };
  class RPL_Hoodie_FlanelBlue : Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_grd_flanelblue_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelblue_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelblue_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelblue_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelblue_co.paa"
    };
  };
  class RPL_Hoodie_FlanelRed : Hoodie_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hoodie_grd_flanelred_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelred_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelred_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelred_co.paa",
      "RevivalPlus\characters\tops\data\hoodie_flanelred_co.paa"
    };
  };

  class HikingJacket_ColorBase;
  class TacticalShirt_ColorBase;
  class RPL_HikingJacket_B : HikingJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hikingjacket_g_black_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_black_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_black_co.paa"
    };
  };
  class RPL_HikingJacket_G : HikingJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hikingjacket_g_olive_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_olive_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_olive_co.paa"
    };
  };
  class RPL_HikingJacket_T : HikingJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hikingjacket_g_tan_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_tan_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_tan_co.paa"
    };
  };
  // GROUND
  class RPL_HikingJacket_Flanel : HikingJacket_ColorBase {
    scope = 0;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hikingjacket_flanel_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_flanel_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_flanel_co.paa"
    };
  };
  // GROUND
  class RPL_HikingJacket_Brown : HikingJacket_ColorBase {
    scope = 0;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hikingjacket_brown_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_brown_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_brown_co.paa"
    };
  };
  // GROUND
  class RPL_HikingJacket_OD : HikingJacket_ColorBase {
    scope = 0;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hikingjacket_darkgreen_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_darkgreen_co.paa",
      "RevivalPlus\characters\tops\data\hikingjacket_darkgreen_co.paa"
    };
  };

  class DenimJacket;
  class RPL_DenimJacket_Black : DenimJacket {
    scope = 2;
    displayName = "#STR_DenimJacket_Black";
    descriptionShort = "#STR_DenimJacket_Black_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\denim_jacket_black_co.paa",
      "RevivalPlus\characters\tops\data\denim_jacket_black_co.paa",
      "RevivalPlus\characters\tops\data\denim_jacket_black_co.paa"
    };
  };
  class RPL_DenimJacket_GruppaKino : DenimJacket {
    scope = 2;
    displayName = "#STR_DenimJacket_GruppaKino";
    descriptionShort = "#STR_DenimJacket_GruppaKino_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\denim_jacket_gruppakino_co.paa",
      "RevivalPlus\characters\tops\data\denim_jacket_gruppakino_co.paa",
      "RevivalPlus\characters\tops\data\denim_jacket_gruppakino_co.paa"
    };
  };
  class RPL_DenimJacket_KapelaTeam : DenimJacket {
    scope = 2;
    displayName = "#STR_DenimJacket_KapelaTeam";
    descriptionShort = "#STR_DenimJacket_KapelaTeam_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\denim_jacket_kapelateam_co.paa",
      "RevivalPlus\characters\tops\data\denim_jacket_kapelateam_co.paa",
      "RevivalPlus\characters\tops\data\denim_jacket_kapelateam_co.paa"
    };
  };
  class RPL_DenimJacket_PaloHabera : DenimJacket {
    scope = 2;
    displayName = "#STR_DenimJacket_PaloHabera";
    descriptionShort = "#STR_DenimJacket_PaloHabera_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\denim_jacket_palohabera_co.paa",
      "RevivalPlus\characters\tops\data\denim_jacket_palohabera_co.paa",
      "RevivalPlus\characters\tops\data\denim_jacket_palohabera_co.paa"
    };
  };

  class PoliceJacketOrel;
  class RPL_PoliceJacket_KamyshUrban : PoliceJacketOrel {
    scope = 2;
    displayName = "#STR_PoliceJacket_KamyshUrban";
    descriptionShort = "#STR_PoliceJacket_KamyshUrban_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\policejacket_g_kamyshcamo_urban_co.paa",
      "RevivalPlus\characters\tops\data\policejacket_kamyshcamo_urban_co.paa",
      "RevivalPlus\characters\tops\data\policejacket_kamyshcamo_urban_co.paa"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 100;
          healthLabels[] = {
            1,
            0.7,
            0.5,
            0.3,
            0
          };
          healthLevels[] = {
            {
              1,
              {
                "RevivalPlus\characters\tops\data\policejacket.rvmat",
                "RevivalPlus\characters\tops\data\policejacket_g.rvmat"
              }
            },
            {
              0.5,
              {
                "RevivalPlus\characters\tops\data\policejacket_damage.rvmat",
                "RevivalPlus\characters\tops\data\policejacket_g_damage.rvmat"
              }
            },
            {
              0,
              {
                "RevivalPlus\characters\tops\data\policejacket_destruct.rvmat",
                "RevivalPlus\characters\tops\data\policejacket_g_destruct.rvmat"
              }
            }
          };
        };
      };
    };
  };

  class PoliceJacket;
  class RPL_PoliceJacket_Redstripe: PoliceJacket {
    scope = 2;
    displayName = "#STR_PoliceJacket_Black";
    descriptionShort = "#STR_PoliceJacket_Black_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\policejacket_red_g_co.paa",
      "RevivalPlus\characters\tops\data\policejacket_red_co.paa",
      "RevivalPlus\characters\tops\data\policejacket_red_co.paa"
    };
  };
  class RPL_PoliceJacket_Black_Red: PoliceJacket {
    scope = 2;
    displayName = "#STR_PoliceJacket_Black";
    descriptionShort = "#STR_PoliceJacket_Black_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\policejacket_black_red_g_co.paa",
      "RevivalPlus\characters\tops\data\policejacket_black_red_co.paa",
      "RevivalPlus\characters\tops\data\policejacket_black_red_co.paa"
    };
  };
  class RPL_PoliceJacket_Black_Green: PoliceJacket {
    scope = 2;
    displayName = "#STR_PoliceJacket_Black";
    descriptionShort = "#STR_PoliceJacket_Black_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\policejacket_black_green_g_co.paa",
      "RevivalPlus\characters\tops\data\policejacket_black_green_co.paa",
      "RevivalPlus\characters\tops\data\policejacket_black_green_co.paa"
    };
  };

  class QuiltedJacket_ColorBase;
  class RPL_QuiltedJacket_BlueGray: QuiltedJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.9;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\quiltedjacket_bluegray_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_bluegray_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_bluegray_co.paa"
    };
  };
  class RPL_QuiltedJacket_BrownGray: QuiltedJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.9;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\quiltedjacket_browngray_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_browngray_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_browngray_co.paa"
    };
  };
  class RPL_QuiltedJacket_GreenBlack: QuiltedJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.9;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\quiltedjacket_greenblack_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_greenblack_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_greenblack_co.paa"
    };
  };
  class RPL_QuiltedJacket_WhiteGray: QuiltedJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.9;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\quiltedjacket_whitegray_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_whitegray_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_whitegray_co.paa"
    };
  };
  class RPL_QuiltedJacket_WhiteGrayBloody: QuiltedJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.9;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\quiltedjacket_whitegray_bloody_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_whitegray_bloody_co.paa",
      "RevivalPlus\characters\tops\data\quiltedjacket_whitegray_bloody_co.paa"
    };
  };
  class M65Jacket_ColorBase;
  class RPL_M65Jacket_Brown: M65Jacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\m65_jacket_brown_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_brown_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_brown_co.paa"
    };
  };
  class RPL_M65Jacket_BrownLeather: M65Jacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\m65_jacket_brownleather_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_brownleather_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_brownleather_co.paa"
    };
  };
  class RPL_M65Jacket_DeepBrown: M65Jacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\m65_jacket_deepbrown_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_deepbrown_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_deepbrown_co.paa"
    };
  };
  class RPL_M65Jacket_Grey: M65Jacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\m65_jacket_grey_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_grey_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_grey_co.paa"
    };
  };
  class RPL_M65Jacket_DesertDPM: M65Jacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\m65_jacket_dpmdesert_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_dpmdesert_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_dpmdesert_co.paa"
    };
  };
  class RPL_M65Jacket_White: M65Jacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\m65_jacket_white_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_white_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_white_co.paa"
    };
  };

  /* Festive Item */
  class RPL_M65Jacket_Crook: M65Jacket_ColorBase {
    scope = 2;
    displayName = "#STR_RPL_M65Jacket_Crook";
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\m65_jacket_crook_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_crook_co.paa",
      "RevivalPlus\characters\tops\data\m65_jacket_crook_co.paa"
    };
  };


  class WoolCoat_ColorBase;
  class RPL_WoolCoat_White: WoolCoat_ColorBase {
    scope = 2;
    hiddenSelections[] = {
      "camoGround",
      "camoMale",
      "camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\woolcoat_white_co.paa",
      "RevivalPlus\characters\tops\data\woolcoat_white_co.paa",
      "RevivalPlus\characters\tops\data\woolcoat_white_co.paa",
      "RevivalPlus\characters\tops\data\woolcoat_white_co.paa"
    };
  };

  class TrackSuitJacket_ColorBase;
  class RPL_TrackSuitJacket_Yellow: TrackSuitJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_jacket_yellow_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_jacket_yellow_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_jacket_yellow_co.paa"
    };
  };
  class RPL_TrackSuitJacket_Violet: TrackSuitJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_jacket_violet_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_jacket_violet_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_jacket_violet_co.paa"
    };
  };
  class RPL_TrackSuitJacket_LightBlue: TrackSuitJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_jacket_lightblue_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_jacket_lightblue_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_jacket_lightblue_co.paa"
    };
  };
  class RPL_TrackSuitJacket_Loverboy: TrackSuitJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_jacket_loverboy_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_jacket_loverboy_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_jacket_loverboy_co.paa"
    };
  };
  class RPL_TrackSuitJacket_Bohous: TrackSuitJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_bohous_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_bohous_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_bohous_co.paa"
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\tops\data\tracksuit_plane.rvmat",
      "RevivalPlus\characters\tops\data\tracksuit_plane.rvmat",
      "RevivalPlus\characters\tops\data\tracksuit_plane.rvmat"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {
            {1.0,{"RevivalPlus\characters\tops\data\tracksuit_plane.rvmat"}},
            {0.7,{"RevivalPlus\characters\tops\data\tracksuit_plane.rvmat"}},
            {0.5,{"RevivalPlus\characters\tops\data\tracksuit_plane_damage.rvmat"}},
            {0.3,{"RevivalPlus\characters\tops\data\tracksuit_plane_damage.rvmat"}},
            {0.0,{"RevivalPlus\characters\tops\data\tracksuit_plane_destruct.rvmat"}}
          };
				};
			};
    };
  };

  class RPL_TrackSuitJacket_PlaneBase: TrackSuitJacket_ColorBase {
    scope = 0;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "",
      "",
      ""
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\tops\data\tracksuit_plane.rvmat",
      "RevivalPlus\characters\tops\data\tracksuit_plane.rvmat",
      "RevivalPlus\characters\tops\data\tracksuit_plane.rvmat"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {
            {1.0,{"RevivalPlus\characters\tops\data\tracksuit_plane.rvmat"}},
            {0.7,{"RevivalPlus\characters\tops\data\tracksuit_plane.rvmat"}},
            {0.5,{"RevivalPlus\characters\tops\data\tracksuit_plane_damage.rvmat"}},
            {0.3,{"RevivalPlus\characters\tops\data\tracksuit_plane_damage.rvmat"}},
            {0.0,{"RevivalPlus\characters\tops\data\tracksuit_plane_destruct.rvmat"}}
          };
				};
			};
    };
  };
  class RPL_TrackSuitJacket_PlaneBlack: RPL_TrackSuitJacket_PlaneBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_planeblack_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planeblack_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planeblack_co.paa"
    };
  };
  class RPL_TrackSuitJacket_PlaneBlack2: RPL_TrackSuitJacket_PlaneBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_planeblack_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planeblack_v2_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planeblack_v2_co.paa"
    };
  };
  class RPL_TrackSuitJacket_PlaneBlue: RPL_TrackSuitJacket_PlaneBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_planeblue_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planeblue_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planeblue_co.paa"
    };
  };
  class RPL_TrackSuitJacket_PlaneGreen: RPL_TrackSuitJacket_PlaneBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_planegreen_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planegreen_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planegreen_co.paa"
    };
  };
  class RPL_TrackSuitJacket_PlaneOlive: RPL_TrackSuitJacket_PlaneBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_planeolive_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planeolive_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planeolive_co.paa"
    };
  };
  class RPL_TrackSuitJacket_PlaneRed: RPL_TrackSuitJacket_PlaneBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\tracksuit_planered_g_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planered_co.paa",
      "RevivalPlus\characters\tops\data\tracksuit_planered_co.paa"
    };
  };

  class USMCJacket_ColorBase;
  class RPL_SpetsnazJacket_RUSMPT: USMCJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.6;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\spetsnaz_jacket_marpat_co.paa",
      "RevivalPlus\characters\tops\data\spetsnaz_jacket_marpat_co.paa",
      "RevivalPlus\characters\tops\data\spetsnaz_jacket_marpat_co.paa"
    };
  };
  class RPL_SpetsnazJacket_RUSMPT_Winter: USMCJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.6;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\spetsnaz_jacket_winpat_co.paa",
      "RevivalPlus\characters\tops\data\spetsnaz_jacket_winpat_co.paa",
      "RevivalPlus\characters\tops\data\spetsnaz_jacket_winpat_co.paa"
    };
  };

  class BomberJacket_ColorBase;
  class RPL_BomberJacket_Black: BomberJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.9;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\bomberjacket_black_co.paa",
      "RevivalPlus\characters\tops\data\bomberjacket_black_co.paa",
      "RevivalPlus\characters\tops\data\bomberjacket_black_co.paa"
    };
  };

  class LeatherJacket_ColorBase;
  class RPL_HumanLeatherJacket: LeatherJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    displayName = "#STR_RPL_HumanLeatherJacket";
    descriptionShort = "#STR_RPL_HumanLeatherJacket_D";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\leatherjacket_top_human_co.paa",
      "RevivalPlus\characters\tops\data\leatherjacket_top_human_co.paa",
      "RevivalPlus\characters\tops\data\leatherjacket_top_human_co.paa"
    };
  };

  class RidersJacket_ColorBase;
  class RPL_LeatherJacket: RidersJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\leatherjacket_co.paa",
      "RevivalPlus\characters\tops\data\leatherjacket_co.paa",
      "RevivalPlus\characters\tops\data\leatherjacket_co.paa"
    };
  };
  class RPL_LeatherJacket_Light: RidersJacket_ColorBase {
    scope = 2;
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\leatherjacket_light_co.paa",
      "RevivalPlus\characters\tops\data\leatherjacket_light_co.paa",
      "RevivalPlus\characters\tops\data\leatherjacket_light_co.paa"
    };
  };

  class HuntingJacket_ColorBase;
  class RPL_HuntingJacket_Green : HuntingJacket_ColorBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hunting_jacket_green_g_co.paa",
      "RevivalPlus\characters\tops\data\hunting_jacket_green_co.paa",
      "RevivalPlus\characters\tops\data\hunting_jacket_green_co.paa"
    };
  };
  class RPL_HuntingJacket_NavyBlue : HuntingJacket_ColorBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hunting_jacket_navyblue_g_co.paa",
      "RevivalPlus\characters\tops\data\hunting_jacket_navyblue_co.paa",
      "RevivalPlus\characters\tops\data\hunting_jacket_navyblue_co.paa"
    };
  };
  class RPL_HuntingJacket_LightBlue : HuntingJacket_ColorBase
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\tops\data\hunting_jacket_blue_g_co.paa",
      "RevivalPlus\characters\tops\data\hunting_jacket_blue_co.paa",
      "RevivalPlus\characters\tops\data\hunting_jacket_blue_co.paa"
    };
  };
};
