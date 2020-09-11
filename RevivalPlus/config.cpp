class CfgPatches {
   class RevivalPlus {
      units[] = {};
      weapons[] = {};
      requiredVersion = 0.1;
      requiredAddons[] = {
         "DZ_Characters",
         "DZ_Characters_Backpacks",
         "DZ_Characters_Pants",
         "DZ_Characters_Tops",
         "DZ_Gear_Containers",
         "DZ_Characters_Headgear",
         "DZ_Structures_Signs",
         "DZ_Data"
      };
   };
};

class CfgMods {
   class RevivalPlus {
      dir = "RevivalPlus";
      picture = "";
      action = "";
      hideName = 1;
      hidePicture = 1;
      name = "RevivalPlus";
      credits = "";
      author = "benedi.kz";
      authorID = "0";
      version = "1.0";
      extra = 0;
      type = "mod";
      dependencies[] = {
        "Game",
        "World",
        "Mission"
      };
      class defs {
        class gameScriptModule {
          value = "";
          files[] = {
            "RevivalPlus/scripts/3_Game"
          };
        };
        class worldScriptModule {
          value = "";
          files[] = {
            "RevivalPlus/scripts/4_World"
          };
        };
        class missionScriptModule {
          value = "";
          files[] = {
            "RevivalPlus/scripts/5_Mission"
          };
        };
      };
   };
};

/*
class CfgSoundShaders {

  class RPL_Whistle_SoundShader_Base {
    samples[] = {};
    frequency = 1;
    range = 300;
    volume = 1;
  };
  class RPL_Whistle_Shader: RPL_Whistle_SoundShader_Base {
    samples[] = {

      {
        "RevivalPlus\ItemsPlus\instruments\sounds\track_whistle_mo",
        1
      }
    };
  };
};

class CfgSoundSets {
  class RPL_SoundSet_Whistle {
    soundShaders[] = {
      "RPL_Whistle_Shader"
    };
  };
};
*/

class cfgVehicles {

   // Base Classes
   class Clothing;
   class Edible_Base;
   class Container_Base;

   class Armband_ColorBase;
   class RPL_Armband_Test: Armband_ColorBase {
      displayName = "#str_rpl_langtest";
      descriptionShort = "#str_rpl_langtest";
      scope = 0;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_test_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_test_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_test_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_test_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_test_big_co.paa"
      };
   };
   class RPL_Armband_UNCNR: Armband_ColorBase {
      displayName = "#STR_Armband_UNCNR";
      descriptionShort = "#STR_Armband_UNCNR_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_uncnr_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_uncnr_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_uncnr_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_uncnr_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_uncnr_big_co.paa"
      };
   };
   class RPL_Armband_TradeUnion: Armband_ColorBase {
      displayName = "#STR_Armband_TradeUnion";
      descriptionShort = "#STR_Armband_TradeUnion_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_tradeunion_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_tradeunion_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_tradeunion_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_tradeunion_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_tradeunion_big_co.paa"
      };
   };
   class RPL_Armband_Medical: Armband_ColorBase {
      displayName = "#STR_Armband_Medical";
      descriptionShort = "#STR_Armband_Medical_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_medical_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_medical_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_medical_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_medical_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_medical_big_co.paa"
      };
   };
   class RPL_Armband_NAPA: Armband_ColorBase {
      displayName = "#STR_Armband_NAPA";
      descriptionShort = "#STR_Armband_NAPA_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_napa_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_napa_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_napa_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_napa_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_napa_big_co.paa"
      };
   };
   class RPL_Armband_CHDKZ: Armband_ColorBase {
      displayName = "#STR_Armband_CHDKZ";
      descriptionShort = "#STR_Armband_CHDKZ_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_chdkz_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_chdkz_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_chdkz_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_chdkz_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_chdkz_big_co.paa"
      };
   };
   class RPL_Armband_CDF: Armband_ColorBase {
      displayName = "#STR_Armband_CDF";
      descriptionShort = "#STR_Armband_CDF_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_cdf_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_cdf_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_cdf_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_cdf_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_cdf_big_co.paa"
      };
   };
   class RPL_Armband_JackForest: Armband_ColorBase {
      displayName = "#STR_Armband_JackForest";
      descriptionShort = "#STR_Armband_JackForest_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_jackforest_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_jackforest_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_jackforest_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_jackforest_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_jackforest_big_co.paa"
      };
   };
   class RPL_Armband_VlasteneckaUnie: Armband_ColorBase {
      displayName = "#STR_Armband_VlasteneckaUnie";
      descriptionShort = "#STR_Armband_VlasteneckaUnie_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_vlasteneckaunie_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_vlasteneckaunie_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_vlasteneckaunie_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_vlasteneckaunie_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_vlasteneckaunie_big_co.paa"
      };
   };
   class RPL_Armband_Milice: Armband_ColorBase {
      displayName = "#STR_Armband_Milice";
      descriptionShort = "#STR_Armband_Milice_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_milice_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_milice_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_milice_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_milice_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_milice_big_co.paa"
      };
   };
   class RPL_Armband_Duchari: Armband_ColorBase {
      displayName = "#STR_Armband_Duchari";
      descriptionShort = "#STR_Armband_Duchari_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_ordospiritus_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_ordospiritus_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_ordospiritus_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_ordospiritus_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_ordospiritus_big_co.paa"
      };
   };
   class RPL_Armband_Grishino: Armband_ColorBase {
      displayName = "#STR_Armband_Grishino";
      descriptionShort = "#STR_Armband_Grishino_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_grishino_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_grishino_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_grishino_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_grishino_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_grishino_big_co.paa"
      };
   };
   class RPL_Armband_KamenkaCoalition: Armband_ColorBase {
      displayName = "#STR_Armband_KamenkaCoalition";
      descriptionShort = "#STR_Armband_KamenkaCoalition_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_kamenkacoalition_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_kamenkacoalition_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_kamenkacoalition_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_kamenkacoalition_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_kamenkacoalition_big_co.paa"
      };
   };
   class RPL_Armband_BlackSkull: Armband_ColorBase {
      displayName = "#STR_Armband_BlackSkull";
      descriptionShort = "#STR_Armband_BlackSkull_Description";
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ArmbandsPlus\data\armbend_blackskull_g_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_blackskull_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_blackskull_small_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_blackskull_big_co.paa",
         "RevivalPlus\ArmbandsPlus\data\armbend_blackskull_big_co.paa"
      };
   };

   //
   //     TopsPlus
   //

   class TTsKOJacket_ColorBase;
   class RPL_TTsKOJacket_Flora: TTsKOJacket_ColorBase
   {
   		scope = 2;
   		visibilityModifier = 0.5;
   		hiddenSelectionsTextures[] = {
        "RevivalPlus\TopsPlus\data\ttsko_jacket_flora_co.paa",
        "RevivalPlus\TopsPlus\data\ttsko_jacket_flora_co.paa",
        "RevivalPlus\TopsPlus\data\ttsko_jacket_flora_co.paa"
      };
   };

   class Sweater_ColorBase;
   class RPL_Sweater_BlueRUS: Sweater_ColorBase
   {
      scope = 2;
      visibilityModifier = 0.95;
      hiddenSelectionsTextures[] = {
        "RevivalPlus\TopsPlus\data\sweater_blue_rus_g_co.paa",
        "RevivalPlus\TopsPlus\data\sweater_blue_rus_co.paa",
        "RevivalPlus\TopsPlus\data\sweater_blue_rus_co.paa"
      };
   };
   class RPL_Sweater_MilitaryRUS: Sweater_ColorBase
   {
      scope = 2;
      visibilityModifier = 0.95;
      hiddenSelectionsTextures[] = {
        "RevivalPlus\TopsPlus\data\sweater_green_rusarmy_g_co.paa",
        "RevivalPlus\TopsPlus\data\sweater_green_rusarmy_co.paa",
        "RevivalPlus\TopsPlus\data\sweater_green_rusarmy_co.paa"
      };
   };

   class Blouse_ColorBase;
   class RPL_Blouse_Camo: Blouse_ColorBase
   {
      scope=2;
   		visibilityModifier=0.94999999;
   		hiddenSelectionsTextures[]=
   		{
   			"RevivalPlus\TopsPlus\data\blouse_camo_co.paa",
   			"RevivalPlus\TopsPlus\data\blouse_camo_co.paa",
   			"RevivalPlus\TopsPlus\data\blouse_camo_co.paa"
   		};
   };

   class PrisonUniformJacket;
   class RPL_PrisonUniformJacket_Olive: PrisonUniformJacket {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\prison_top_green_g_co.paa",
         "RevivalPlus\TopsPlus\data\prison_top_green_co.paa",
         "RevivalPlus\TopsPlus\data\prison_top_green_co.paa"
      };
   };
   class Shirt_ColorBase;
   class RPL_Shirt_CheckBrown: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_checkbrown_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_checkbrown_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_checkbrown_co.paa"
      };
   };
   class RPL_Shirt_CheckGreen: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_checkgreen_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_checkgreen_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_checkgreen_co.paa"
      };
   };
   class RPL_Shirt_CheckViolet: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_checkviolet_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_checkviolet_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_checkviolet_co.paa"
      };
   };
   class RPL_Shirt_PlaneAirbourne: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planemineshaft_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planeairbourne_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planeairbourne_co.paa"
      };
   };
   class RPL_Shirt_PlaneBlue: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planeblue_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planeblue_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planeblue_co.paa"
      };
   };
   class RPL_Shirt_PlaneBrown: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planebrown_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planebrown_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planebrown_co.paa"
      };
   };
   class RPL_Shirt_PlaneDenimBlue: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planedenimblue_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planedenimblue_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planedenimblue_co.paa"
      };
   };
   class RPL_Shirt_PlaneGreen: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planegreen_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planegreen_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planegreen_co.paa"
      };
   };
   class RPL_Shirt_PlaneLightBlue: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planelblue_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planelblue_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planelblue_co.paa"
      };
   };
   class RPL_Shirt_PlaneMineshaft: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planemineshaft_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planemineshaft_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planemineshaft_co.paa"
      };
   };
   class RPL_Shirt_PlaneMint: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planemint_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planemint_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planemint_co.paa"
      };
   };
   class RPL_Shirt_PlanePink: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planepink_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planepink_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planepink_co.paa"
      };
   };
   class RPL_Shirt_PlaneSandy: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planesand_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planesandy_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planesandy_co.paa"
      };
   };
   class RPL_Shirt_PlaneThunder: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planethunder_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planethunder_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planethunder_co.paa"
      };
   };
   class RPL_Shirt_PlaneWhite: Shirt_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\shirt_ground_planewhite_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planewhite_co.paa",
         "RevivalPlus\TopsPlus\data\shirt_planewhite_co.paa"
      };
   };
   class NBCJacketBase;
   class RPL_NBCJacket_Black: NBCJacketBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\nbc_jacket_g_black_co.paa",
         "RevivalPlus\TopsPlus\data\nbc_jacket_black_co.paa",
         "RevivalPlus\TopsPlus\data\nbc_jacket_black_co.paa"
      };
   };
   class RPL_NBCJacket_Blue: NBCJacketBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\nbc_jacket_g_aquablue_co.paa",
         "RevivalPlus\TopsPlus\data\nbc_jacket_aquablue_co.paa",
         "RevivalPlus\TopsPlus\data\nbc_jacket_aquablue_co.paa"
      };
   };
   class RPL_TelnyashkaShirt_Base: Clothing {
      scope = 0;
      displayName = "#STR_Telnyashka_Shirt";
      descriptionShort = "#STR_Telnyashka_Shirt_Description";
      model = "\DZ\characters\tops\Telnyashka_g.p3d";
      inventorySlot[] = {
         "Body"
      };
      itemInfo[] = {
         "Clothing",
         "Body"
      };
      rotationFlags = 34;
      weight = 200;
      itemSize[] = {
         3,
         2
      };
      itemsCargoSize[] = {
         4,
         3
      };
      quickBarBonus = 1;
      ragQuantity = 3;
      heatIsolation = 0.8;
      absorbency = 0.9;
      repairableWithKits[] = {
         5,
         2
      };
      repairCosts[] = {
         30,
         25
      };
      soundAttType = "TShirt";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa"
      };
      class ClothingTypes {
         male = "\DZ\characters\tops\Telnyashka_m.p3d";
         female = "\DZ\characters\tops\Telnyashka_f.p3d";
      };
      class DamageSystem {
         class GlobalHealth {
            class Health {
               hitpoints = 100;
               healthLevels[] = {
                  {
                     1,
                     {
                        "RevivalPlus\TopsPlus\data\telnyashka.rvmat"
                     }
                  },
                  {
                     0.7,
                     {
                        "RevivalPlus\TopsPlus\data\telnyashka.rvmat"
                     }
                  },
                  {
                     0.5,
                     {
                        "RevivalPlus\TopsPlus\data\telnyashka_damage.rvmat"
                     }
                  },
                  {
                     0.3,
                     {
                        "RevivalPlus\TopsPlus\data\telnyashka_damage.rvmat"
                     }
                  },
                  {
                     0,
                     {
                        "RevivalPlus\TopsPlus\data\telnyashka_destruct.rvmat"
                     }
                  }
               };
            };
         };
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
   class RPL_TelnyashkaShirt_BlackWhite: RPL_TelnyashkaShirt_Base {
      scope = 2;
      displayName = "#STR_Telnyashka_Shirt";
      descriptionShort = "#STR_Telnyashka_Shirt_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa"
      };
   };
   class RPL_TelnyashkaShirt_Red: RPL_TelnyashkaShirt_Base {
      scope = 2;
      displayName = "#STR_Telnyashka_Shirt";
      descriptionShort = "#STR_Telnyashka_Shirt_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\telnyashka_red_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_red_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_red_co.paa"
      };
   };
   class RPL_TelnyashkaShirt_Orange: RPL_TelnyashkaShirt_Base {
      scope = 2;
      displayName = "#STR_Telnyashka_Shirt";
      descriptionShort = "#STR_Telnyashka_Shirt_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\telnyashka_orange_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_orange_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_orange_co.paa"
      };
   };
   class RPL_LongSleeveShirt_Base: RPL_TelnyashkaShirt_Base {
      scope = 0;
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsMaterials[] = {
         "RevivalPlus\TopsPlus\data\longsleeveshirt.rvmat",
         "RevivalPlus\TopsPlus\data\longsleeveshirt.rvmat",
         "RevivalPlus\TopsPlus\data\longsleeveshirt.rvmat"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa",
         "RevivalPlus\TopsPlus\data\telnyashka_blkwht_co.paa"
      };
      class DamageSystem {
         class GlobalHealth {
            class Health {
               hitpoints = 100;
               healthLevels[] = {
                  {
                     1,
                     {
                        "RevivalPlus\TopsPlus\data\longsleeveshirt.rvmat"
                     }
                  },
                  {
                     0.7,
                     {
                        "RevivalPlus\TopsPlus\data\longsleeveshirt.rvmat"
                     }
                  },
                  {
                     0.5,
                     {
                        "RevivalPlus\TopsPlus\data\longsleeveshirt_damage.rvmat"
                     }
                  },
                  {
                     0.3,
                     {
                        "RevivalPlus\TopsPlus\data\longsleeveshirt_damage.rvmat"
                     }
                  },
                  {
                     0,
                     {
                        "RevivalPlus\TopsPlus\data\longsleeveshirt_destruct.rvmat"
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
         "RevivalPlus\TopsPlus\data\longsleeve_blueish_co.paa",
         "RevivalPlus\TopsPlus\data\longsleeve_blueish_co.paa",
         "RevivalPlus\TopsPlus\data\longsleeve_blueish_co.paa"
      };
   };
   class RPL_LongSleeveShirt_Green: RPL_LongSleeveShirt_Base {
      scope = 2;
      displayName = "#STR_LongSleeveShirt";
      descriptionShort = "#STR_LongSleeveShirt_Green_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\longsleeve_green_co.paa",
         "RevivalPlus\TopsPlus\data\longsleeve_green_co.paa",
         "RevivalPlus\TopsPlus\data\longsleeve_green_co.paa"
      };
   };
   class RPL_LongSleeveShirt_VineGray: RPL_LongSleeveShirt_Base {
      scope = 2;
      displayName = "#STR_LongSleeveShirt";
      descriptionShort = "#STR_LongSleeveShirt_VineGray_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\longsleeve_vinegray_co.paa",
         "RevivalPlus\TopsPlus\data\longsleeve_vinegray_co.paa",
         "RevivalPlus\TopsPlus\data\longsleeve_vinegray_co.paa"
      };
   };
   class TShirt_ColorBase;
   class RPL_TShirt_Black_Adios: TShirt_ColorBase {
      scope = 2;
      displayName = "#STR_TShirt_Black_Adios";
      descriptionShort = "#STR_TShirt_Black_Adios_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_black_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_black_adios_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_black_adios_co.paa"
      };
   };
   class RPL_TShirt_White_Adios: TShirt_ColorBase {
      scope = 2;
      displayName = "#STR_TShirt_White_Adios";
      descriptionShort = "#STR_TShirt_White_Adios_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_white_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_white_adios_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_white_adios_co.paa"
      };
   };
   class RPL_TShirt_White_Bloody: TShirt_ColorBase {
      scope = 2;
      displayName = "#STR_TShirt_White_Bloody";
      descriptionShort = "#STR_TShirt_White_Bloody_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_whitebloody_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_white_bloody_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_white_bloody_co.paa"
      };
   };
   class RPL_TShirt_Black_Bloody: TShirt_ColorBase {
      scope = 2;
      displayName = "#STR_TShirt_Black_Bloody";
      descriptionShort = "#STR_TShirt_Black_Bloody_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_blackbloody_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_black_bloody_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_black_bloody_co.paa"
      };
   };
   class RPL_TShirt_VineRed_Sputnik: TShirt_ColorBase {
      scope = 2;
      displayName = "#STR_TShirt_VineRed_Sputnik";
      descriptionShort = "#STR_TShirt_VineRed_Sputnik_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_sputnik_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_hardred_sputnik_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_hardred_sputnik_co.paa"
      };
   };
   class RPL_TShirt_Black_Sputnik: TShirt_ColorBase {
      scope = 2;
      displayName = "#STR_TShirt_Black_Sputnik";
      descriptionShort = "#STR_TShirt_Black_Sputnik_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_sputnik2_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_hardblack_sputnik_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_hardblack_sputnik_co.paa"
      };
   };
   class RPL_TShirt_NavyBlue_Sputnik: TShirt_ColorBase {
      scope = 2;
      displayName = "#STR_TShirt_NavyBlue_Sputnik";
      descriptionShort = "#STR_TShirt_NavyBlue_Sputnik_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_sputnik3_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_navyblue_sputnik_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_navyblue_sputnik_co.paa"
      };
   };
   class RPL_EasterEgg_Lada: TShirt_ColorBase {
      scope = 2;
      displayName = "#STR_EasterEgg_Lada";
      descriptionShort = "#STR_EasterEgg_Lada_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_black_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_easteregg1_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_easteregg1_co.paa"
      };
   };
   class RPL_TShirt_BrownStripes: TShirt_ColorBase {
      scope = 2;
      displayName = "Pruhované tričko";
      descriptionShort = "Hnědé pruhované tričko.";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\tshirt_ground_brownstriped_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_brownstriped_co.paa",
         "RevivalPlus\TopsPlus\data\tshirt_brownstriped_co.paa"
      };
   };
   class Hoodie_ColorBase;
   class RPL_Hoodie_TwoTone_Blue: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_bluetwotone_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_bluetwotone_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_bluetwotone_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_bluetwotone_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_bluetwotone_co.paa"
      };
   };
   class RPL_Hoodie_TwoTone_Brown: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_brown_twotone_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_brown_twotone_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_brown_twotone_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_brown_twotone_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_brown_twotone_co.paa"
      };
   };
   class RPL_Hoodie_SolidBlack: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_black_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_black_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_black_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_black_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_black_co.paa"
      };
   };
   class RPL_Hoodie_BlackGray: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_ground_blackgray_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_blackgray_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_blackgray_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_blackgray_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_blackgray_co.paa"
      };
   };
   class RPL_Hoodie_SolidBlue: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_blue_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_blue_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_blue_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_blue_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_blue_co.paa"
      };
   };
   class RPL_Hoodie_SolidBrown: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_brown_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_brown_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_brown_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_brown_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_brown_co.paa"
      };
   };
   class RPL_Hoodie_SolidGreen: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_green_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_green_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_green_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_green_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_green_co.paa"
      };
   };
   class RPL_Hoodie_SolidPurple: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_purple_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_purple_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_purple_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_purple_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_purple_co.paa"
      };
   };
   class RPL_Hoodie_SolidRed: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_red_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_red_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_red_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_red_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_red_co.paa"
      };
   };
   class RPL_Hoodie_Panzer: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_panzer_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_panzer_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_panzer_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_panzer_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_panzer_co.paa"
      };
   };
   class RPL_Hoodie_Panda: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_panda_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_panda_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_panda_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_panda_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_panda_co.paa"
      };
   };
   class RPL_Hoodie_GreyOlive: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_grd_greyolive_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_greyolive_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_greyolive_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_greyolive_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_greyolive_co.paa"
      };
   };
   class RPL_Hoodie_FlanelBlack: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_grd_flanelblack_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelblack_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelblack_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelblack_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelblack_co.paa"
      };
   };
   class RPL_Hoodie_FlanelBlack_Skull: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_grd_flanelblack_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelskull_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelskull_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelskull_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelskull_co.paa"
      };
   };
   class RPL_Hoodie_FlanelBlue: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_grd_flanelblue_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelblue_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelblue_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelblue_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelblue_co.paa"
      };
   };
   class RPL_Hoodie_FlanelRed: Hoodie_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hoodie_grd_flanelred_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelred_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelred_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelred_co.paa",
         "RevivalPlus\TopsPlus\data\hoodie_flanelred_co.paa"
      };
   };

   class HikingJacket_ColorBase;
   class TacticalShirt_ColorBase;
   class RPL_HikingJacket_B: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_g_black_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_black_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_black_co.paa"
      };
   };
   class RPL_HikingJacket_G: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_g_olive_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_olive_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_olive_co.paa"
      };
   };
   class RPL_HikingJacket_T: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_g_tan_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_tan_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_tan_co.paa"
      };
   };
   class RPL_HikingJacket_Flanel: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_flanel_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_flanel_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_flanel_co.paa"
      };
   };
   class RPL_HikingJacket_Blue: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_blue_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_blue_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_blue_co.paa"
      };
   };
   class RPL_HikingJacket_Brown: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_brown_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_brown_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_brown_co.paa"
      };
   };
   class RPL_HikingJacket_OD: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_darkgreen_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_darkgreen_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_darkgreen_co.paa"
      };
   };
   class RPL_HikingJacket_ReflexGreen: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_green_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_green_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_green_co.paa"
      };
   };
   class RPL_HikingJacket_ReflexBlue: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_lightblue_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_lightblue_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_lightblue_co.paa"
      };
   };
   class RPL_HikingJacket_ReflexPink: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_pink_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_pink_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_pink_co.paa"
      };
   };
   class RPL_HikingJacket_BlackPL: TacticalShirt_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_pl_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_pl_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_pl_co.paa"
      };
   };
   class RPL_HikingJacket_ReflexYellow: HikingJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\hikingjacket_yellow_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_yellow_co.paa",
         "RevivalPlus\TopsPlus\data\hikingjacket_yellow_co.paa"
      };
   };
   class RPL_DenimJacket_Base: Clothing {
      scope = 0;
      model = "\DZ\characters\tops\denim_jacket_g.p3d";
      rotationFlags = 17;
      inventorySlot[] = {
         "Body"
      };
      itemInfo[] = {
         "Clothing",
         "Body"
      };
      weight = 350;
      itemSize[] = {
         4,
         3
      };
      itemsCargoSize[] = {
         6,
         5
      };
      visibilityModifier = 0.85;
      quickBarBonus = 1;
      absorbency = 0.8;
      heatIsolation = 0.5;
      ragQuantity = 3;
      repairableWithKits[] = {
         5,
         2
      };
      repairCosts[] = {
         30,
         25
      };
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\denim_jacket_black_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_black_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_black_co.paa"
      };
      class ClothingTypes {
         male = "\DZ\characters\tops\denim_jacket_m.p3d";
         female = "\DZ\characters\tops\denim_jacket_f.p3d";
      };
      class DamageSystem {
         class GlobalHealth {
            class Health {
               hitpoints = 100;
               healthLevels[] = {
                  {
                     1,
                     {
                        "RevivalPlus\TopsPlus\data\denim_jacket.rvmat"
                     }
                  },
                  {
                     0.7,
                     {
                        "RevivalPlus\TopsPlus\data\denim_jacket.rvmat"
                     }
                  },
                  {
                     0.5,
                     {
                        "RevivalPlus\TopsPlus\data\denim_jacket_damage.rvmat"
                     }
                  },
                  {
                     0.3,
                     {
                        "RevivalPlus\TopsPlus\data\denim_jacket_damage.rvmat"
                     }
                  },
                  {
                     0,
                     {
                        "RevivalPlus\TopsPlus\data\denim_jacket_destruct.rvmat"
                     }
                  }
               };
            };
         };
         class GlobalArmor {
            class Melee {
               class Health {
                  damage = 0.9;
               };
               class Blood {
                  damage = 0.9;
               };
               class Shock {
                  damage = 0.9;
               };
            };
            class Infected {
               class Health {
                  damage = 0.9;
               };
               class Blood {
                  damage = 0.9;
               };
               class Shock {
                  damage = 0.9;
               };
            };
         };
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
   class RPL_DenimJacket_Black: RPL_DenimJacket_Base {
      scope = 2;
      displayName = "#STR_DenimJacket_Black";
      descriptionShort = "#STR_DenimJacket_Black_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\denim_jacket_black_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_black_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_black_co.paa"
      };
   };
   class RPL_DenimJacket_GruppaKino: RPL_DenimJacket_Base {
      scope = 2;
      displayName = "#STR_DenimJacket_GruppaKino";
      descriptionShort = "#STR_DenimJacket_GruppaKino_Description";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\denim_jacket_gruppakino_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_gruppakino_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_gruppakino_co.paa"
      };
   };
   class RPL_DenimJacket_KapelaTeam: RPL_DenimJacket_Base {
      scope = 2;
      displayName = "#STR_DenimJacket_KapelaTeam";
      descriptionShort = "#STR_DenimJacket_KapelaTeam_Description";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\denim_jacket_kapelateam_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_kapelateam_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_kapelateam_co.paa"
      };
   };
   class RPL_DenimJacket_PaloHabera: RPL_DenimJacket_Base {
      scope = 2;
      displayName = "#STR_DenimJacket_PaloHabera";
      descriptionShort = "#STR_DenimJacket_PaloHabera_Description";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\denim_jacket_palohabera_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_palohabera_co.paa",
         "RevivalPlus\TopsPlus\data\denim_jacket_palohabera_co.paa"
      };
   };
   class RPL_PoliceJacket_KamyshUrban: Clothing {
      scope = 2;
      displayName = "#STR_PoliceJacket_KamyshUrban";
      descriptionShort = "#STR_PoliceJacket_KamyshUrban_Description";
      model = "\DZ\characters\tops\PoliceJacket_g.p3d";
      ContinuousActions[] = {
         190
      };
      inventorySlot = "Body";
      itemInfo[] = {
         "Clothing",
         "Body"
      };
      weight = 1000;
      itemSize[] = {
         3,
         2
      };
      itemsCargoSize[] = {
         5,
         5
      };
      quickBarBonus = 1;
      heatIsolation = 2.5;
      absorbency = 0.2;
      visibilityModifier = 0.9;
      repairableWithKits[] = {
         5,
         2
      };
      repairCosts[] = {
         30,
         25
      };
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\policejacket_g_kamyshcamo_urban_co.paa",
         "RevivalPlus\TopsPlus\data\policejacket_kamyshcamo_urban_co.paa",
         "RevivalPlus\TopsPlus\data\policejacket_kamyshcamo_urban_co.paa"
      };
      class DamageArmor {
         bleed = 0.1;
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
                        "RevivalPlus\TopsPlus\data\policejacket.rvmat",
                        "RevivalPlus\TopsPlus\data\policejacket_g.rvmat"
                     }
                  },
                  {
                     0.5,
                     {
                        "RevivalPlus\TopsPlus\data\policejacket_damage.rvmat",
                        "RevivalPlus\TopsPlus\data\policejacket_g_damage.rvmat"
                     }
                  },
                  {
                     0,
                     {
                        "RevivalPlus\TopsPlus\data\policejacket_destruct.rvmat",
                        "RevivalPlus\TopsPlus\data\policejacket_g_destruct.rvmat"
                     }
                  }
               };
            };
         };
         class GlobalArmor {
            class Projectile {
               Health = 0.9;
               Blood = 0.9;
               Shock = 0.9;
            };
            class Melee {
               Health = 0.9;
               Blood = 0.9;
               Shock = 0.9;
            };
            class Infected {
               Health = 0.9;
               Blood = 0.9;
               Shock = 0.9;
            };
         };
      };
      class ClothingTypes {
         male = "\DZ\characters\tops\PoliceJacket_m.p3d";
         female = "\DZ\characters\tops\PoliceJacket_f.p3d";
      };
   };
   class RPL_PoliceJacket_Black: RPL_PoliceJacket_KamyshUrban {
      scope = 2;
      displayName = "#STR_PoliceJacket_Black";
      descriptionShort = "#STR_PoliceJacket_Black_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\policejacket_black_co.paa",
         "RevivalPlus\TopsPlus\data\policejacket_black_co.paa",
         "RevivalPlus\TopsPlus\data\policejacket_black_co.paa"
      };
   };
   class QuiltedJacket_ColorBase;
   class RPL_QuiltedJacket_BlueGray: QuiltedJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.9;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\quiltedjacket_bluegray_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_bluegray_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_bluegray_co.paa"
      };
   };
   class RPL_QuiltedJacket_BrownGray: QuiltedJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.9;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\quiltedjacket_browngray_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_browngray_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_browngray_co.paa"
      };
   };
   class RPL_QuiltedJacket_GreenBlack: QuiltedJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.9;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\quiltedjacket_greenblack_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_greenblack_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_greenblack_co.paa"
      };
   };
   class RPL_QuiltedJacket_WhiteGray: QuiltedJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.9;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\quiltedjacket_whitegray_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_whitegray_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_whitegray_co.paa"
      };
   };
   class RPL_QuiltedJacket_WhiteGrayBloody: QuiltedJacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.9;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\quiltedjacket_whitegray_bloody_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_whitegray_bloody_co.paa",
         "RevivalPlus\TopsPlus\data\quiltedjacket_whitegray_bloody_co.paa"
      };
   };
   class M65Jacket_ColorBase;
   class RPL_M65Jacket_Brown: M65Jacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\m65_jacket_brown_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_brown_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_brown_co.paa"
      };
   };
   class RPL_M65Jacket_BrownLeather: M65Jacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\m65_jacket_brownleather_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_brownleather_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_brownleather_co.paa"
      };
   };
   class RPL_M65Jacket_DeepBrown: M65Jacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\m65_jacket_deepbrown_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_deepbrown_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_deepbrown_co.paa"
      };
   };
   class RPL_M65Jacket_Grey: M65Jacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\m65_jacket_grey_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_grey_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_grey_co.paa"
      };
   };
   class RPL_M65Jacket_DesertDPM: M65Jacket_ColorBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\TopsPlus\data\m65_jacket_dpmdesert_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_dpmdesert_co.paa",
         "RevivalPlus\TopsPlus\data\m65_jacket_dpmdesert_co.paa"
      };
   };

   //
   //   HeadgearPlus
   //

   class BaseballCap_ColorBase;
   class RPL_BaseballCap_WalkingDead: BaseballCap_ColorBase
   {
     scope=2;
     visibilityModifier=0.94999999;
     hiddenSelectionsTextures[]=
     {
       "RevivalPlus\HeadgearPlus\data\baseballcap_wd_co.paa",
       "RevivalPlus\HeadgearPlus\data\baseballcap_wd_co.paa",
       "RevivalPlus\HeadgearPlus\data\baseballcap_wd_co.paa"
     };
   };

   class PrisonerCap;
   class RPL_PrisonerCap_Olive: PrisonerCap {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\HeadgearPlus\data\prison_cap_green_co.paa",
         "RevivalPlus\HeadgearPlus\data\prison_cap_green_co.paa",
         "RevivalPlus\HeadgearPlus\data\prison_cap_green_co.paa"
      };
   };
   class CowboyHat_ColorBase;
   class RPL_CowboyHat_BlackWhite: CowboyHat_ColorBase {
      scope = 2;
      color = "black";
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\HeadgearPlus\data\cowboyhat_pattern1_cowboy_co.paa",
         "RevivalPlus\HeadgearPlus\data\cowboyhat_pattern1_cowboy_co.paa",
         "RevivalPlus\HeadgearPlus\data\cowboyhat_pattern1_cowboy_co.paa"
      };
   };
   class RPL_CowboyHat_BrownWhite: CowboyHat_ColorBase {
      scope = 2;
      color = "black";
      visibilityModifier = 0.85;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\HeadgearPlus\data\cowboyhat_pattern2_cowboy_co.paa",
         "RevivalPlus\HeadgearPlus\data\cowboyhat_pattern2_cowboy_co.paa",
         "RevivalPlus\HeadgearPlus\data\cowboyhat_pattern2_cowboy_co.paa"
      };
   };
   class NBCHoodBase;
   class RPL_NBCHood_Black: NBCHoodBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\HeadgearPlus\data\nbc_hood_black_co.paa",
         "RevivalPlus\HeadgearPlus\data\nbc_hood_black_co.paa",
         "RevivalPlus\HeadgearPlus\data\nbc_hood_black_co.paa"
      };
   };
   class RPL_NBCHood_Blue: NBCHoodBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\HeadgearPlus\data\nbc_hood_aquablue_co.paa",
         "RevivalPlus\HeadgearPlus\data\nbc_hood_aquablue_co.paa",
         "RevivalPlus\HeadgearPlus\data\nbc_hood_aquablue_co.paa"
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
         "RevivalPlus\HeadgearPlus\data\militaryberet_black_co.paa",
         "RevivalPlus\HeadgearPlus\data\militaryberet_black_co.paa",
         "RevivalPlus\HeadgearPlus\data\militaryberet_black_co.paa"
      };
   };

   //
   //   PantsPlus
   //

   class PrisonUniformPants;
   class RPL_PrisonUniformPants_Olive: PrisonUniformPants {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\prison_pants_green_g_co.paa",
         "RevivalPlus\PantsPlus\data\prison_pants_green_co.paa",
         "RevivalPlus\PantsPlus\data\prison_pants_green_co.paa"
      };
   };
   class RPL_PolicePants_Base: Clothing {
      scope = 0;
      model = "\DZ\characters\pants\PolicePants_g.p3d";
      ContinuouActions[] = {
         "AT_WRING_CLOTHES"
      };
      inventorySlot[] = {
         "Legs"
      };
      simulation = "clothing";
      itemInfo[] = {
         "Clothing",
         "Legs"
      };
      itemSize[] = {
         3,
         2
      };
      itemsCargoSize[] = {
         5,
         4
      };
      weight = 510;
      ragQuantity = 3;
      absorbency = 0.6;
      heatIsolation = 0.7;
      visibilityModifier = 0.9;
      repairableWithKits[] = {
         5,
         2
      };
      repairCosts[] = {
         30,
         25
      };
      quickBarBonus = 1;
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "DZ\characters\pants\data\PolicePants_co.paa",
         "DZ\characters\pants\data\PolicePants_co.paa",
         "DZ\characters\pants\data\PolicePants_co.paa"
      };
      class ClothingTypes {
         male = "\DZ\characters\pants\PolicePants_m.p3d";
         female = "\DZ\characters\pants\PolicePants_f.p3d";
      };
      class DamageSystem {
         class GlobalHealth {
            class Health {
               hitpoints = 100;
               healthLevels[] = {
                  {
                     1,
                     {
                        "RevivalPlus\PantsPlus\data\policepants.rvmat"
                     }
                  },
                  {
                     0.7,
                     {
                        "RevivalPlus\PantsPlus\data\policepants.rvmat"
                     }
                  },
                  {
                     0.5,
                     {
                        "RevivalPlus\PantsPlus\data\policepants_damage.rvmat"
                     }
                  },
                  {
                     0.3,
                     {
                        "RevivalPlus\PantsPlus\data\policepants_damage.rvmat"
                     }
                  },
                  {
                     0,
                     {
                        "RevivalPlus\PantsPlus\data\policepants_destruct.rvmat"
                     }
                  }
               };
            };
         };
         class GlobalArmor {
            class Melee {
               class Health {
                  damage = 0.9;
               };
               class Blood {
                  damage = 0.9;
               };
               class Shock {
                  damage = 0.9;
               };
            };
            class Infected {
               class Health {
                  damage = 0.9;
               };
               class Blood {
                  damage = 0.9;
               };
               class Shock {
                  damage = 0.9;
               };
            };
         };
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
   class RPL_PolicePants_Black: RPL_PolicePants_Base {
      scope = 2;
      displayName = "#STR_PolicePants_Black";
      descriptionShort = "#STR_PolicePants_Black_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\policepants_black_co.paa",
         "RevivalPlus\PantsPlus\data\policepants_black_co.paa",
         "RevivalPlus\PantsPlus\data\policepants_black_co.paa"
      };
   };
   class NBCPantsBase;
   class RPL_NBCPants_Black: NBCPantsBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\nbc_pants_black_co.paa",
         "RevivalPlus\PantsPlus\data\nbc_pants_black_co.paa",
         "RevivalPlus\PantsPlus\data\nbc_pants_black_co.paa"
      };
   };
   class RPL_NBCPants_Blue: NBCPantsBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\nbc_pants_aquablue_co.paa",
         "RevivalPlus\PantsPlus\data\nbc_pants_aquablue_co.paa",
         "RevivalPlus\PantsPlus\data\nbc_pants_aquablue_co.paa"
      };
   };
   class CargoPants_ColorBase;
   class RPL_CargoPants_Blue: CargoPants_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\cargopants_blue_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_blue_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_blue_co.paa"
      };
   };
   class RPL_CargoPants_Brown: CargoPants_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\cargopants_brown_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_brown_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_brown_co.paa"
      };
   };
   class RPL_CargoPants_Khaki: CargoPants_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\cargopants_khaki_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_khaki_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_khaki_co.paa"
      };
   };
   class RPL_CargoPants_Orange: CargoPants_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\cargopants_orange_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_orange_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_orange_co.paa"
      };
   };
   class RPL_CargoPants_Purple: CargoPants_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\cargopants_purple_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_purple_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_purple_co.paa"
      };
   };
   class RPL_CargoPants_Red: CargoPants_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\cargopants_red_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_red_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_red_co.paa"
      };
   };
   class RPL_CargoPants_White: CargoPants_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\cargopants_white_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_white_co.paa",
         "RevivalPlus\PantsPlus\data\cargopants_white_co.paa"
      };
   };
   class CanvasPants_ColorBase;
   class RPL_CanvasPants_Krtek: CanvasPants_ColorBase {
      scope = 2;
      displayName = "#STR_CanvasPants_Krtek";
      descriptionShort = "#STR_CanvasPants_Krtek_Description";
      model = "\DZ\characters\pants\CanvasPants_Long_g.p3d";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\canvaspants_blue_krtek_co.paa",
         "RevivalPlus\PantsPlus\data\canvaspants_blue_krtek_co.paa",
         "RevivalPlus\PantsPlus\data\canvaspants_blue_krtek_co.paa"
      };
   };
   class RPL_CanvasPants_RedChecked: CanvasPants_ColorBase {
      scope = 2;
      model = "\DZ\characters\pants\CanvasPants_Long_g.p3d";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\canvaspants_redcheck_co.paa",
         "RevivalPlus\PantsPlus\data\canvaspants_redcheck_co.paa",
         "RevivalPlus\PantsPlus\data\canvaspants_redcheck_co.paa"
      };
   };
   class RPL_PolicePants_KamyshUrban: Clothing {
      scope = 2;
      displayName = "#STR_PolicePants_KamyshUrban";
      descriptionShort = "#STR_PolicePants_KamyshUrban_Description";
      model = "\DZ\characters\pants\ttsko_pants_g.p3d";
      ContinuousActions[] = {
         190
      };
      inventorySlot = "Legs";
      simulation = "clothing";
      itemInfo[] = {
         "Clothing",
         "Legs"
      };
      itemSize[] = {
         3,
         2
      };
      itemsCargoSize[] = {
         5,
         5
      };
      weight = 520;
      absorbency = 0.1;
      heatIsolation = 2.5;
      visibilityModifier = 0.9;
      repairableWithKits[] = {
         5,
         2
      };
      repairCosts[] = {
         30,
         25
      };
      quickBarBonus = 2;
      lootTag[] = {
         "Police"
      };
      lootCategory = "Pants";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale",
         "personality"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamysh_urban_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamysh_urban_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamysh_urban_co.paa"
      };
      class ClothingTypes {
         male = "\DZ\characters\pants\ttsko_pants_m.p3d";
         female = "\DZ\characters\pants\ttsko_pants_f.p3d";
      };
      class DamageArmor {
         bleed = 0.15;
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
                        "RevivalPlus\PantsPlus\data\ttsko_pants.rvmat",
                        "RevivalPlus\PantsPlus\data\ttsko_pants_g.rvmat"
                     }
                  },
                  {
                     0.5,
                     {
                        "RevivalPlus\PantsPlus\data\ttsko_pants_damage.rvmat",
                        "RevivalPlus\PantsPlus\data\ttsko_pants_g_damage.rvmat"
                     }
                  },
                  {
                     0,
                     {
                        "RevivalPlus\PantsPlus\data\ttsko_pants_destruct.rvmat",
                        "RevivalPlus\PantsPlus\data\ttsko_pants_g_destruct.rvmat"
                     }
                  }
               };
            };
         };
         class GlobalArmor {
            class Projectile {
               Health = 0.9;
               Blood = 0.85;
               Shock = 0.9;
            };
            class Melee {
               Health = 0.9;
               Blood = 0.85;
               Shock = 0.9;
            };
            class Infected {
               Health = 0.9;
               Blood = 0.85;
               Shock = 0.9;
            };
         };
      };
   };
   class RPL_TTsKOPants_Police: RPL_PolicePants_KamyshUrban
   {
      scope = 2;
      displayName = "#STR_PolicePants_KamyshUrban";
      descriptionShort = "#STR_TTsKOPants_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\ttsko_pants_police_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_police_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_police_co.paa"
      };
   };

   class RPL_TTsKOPants_Olive: RPL_PolicePants_KamyshUrban
   {
      scope = 2;
      displayName = "#STR_TTsKOPants";
      descriptionShort = "#STR_TTsKOPants_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\ttsko_pants_olive_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_olive_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_olive_co.paa"
      };
   };
   class RPL_TTsKOPants_Gray: RPL_PolicePants_KamyshUrban
   {
      scope = 2;
      displayName = "#STR_TTsKOPants";
      descriptionShort = "#STR_TTsKOPants_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\ttsko_pants_gray_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_gray_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_gray_co.paa"
      };
   };
   class RPL_TTsKOPants_Brown: RPL_PolicePants_KamyshUrban
   {
      scope = 2;
      displayName = "#STR_TTsKOPants";
      descriptionShort = "#STR_TTsKOPants_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\ttsko_pants_brown_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_brown_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_brown_co.paa"
      };
   };

   class RPL_TTsKOPants_Flora: RPL_PolicePants_KamyshUrban
   {
      scope = 2;
      displayName = "#STR_TTsKOPants";
      descriptionShort = "#STR_TTsKOPants_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\ttsko_pants_flora_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_flora_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_flora_co.paa"
      };
   };
   class RPL_TTsKOPants_Kamysh: RPL_PolicePants_KamyshUrban
   {
      scope = 2;
      displayName = "#STR_TTsKOPants";
      descriptionShort = "#STR_TTsKOPants_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamysh_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamysh_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamysh_co.paa"
      };
   };
   class RPL_TTsKOPants_KamyshWhite: RPL_PolicePants_KamyshUrban
   {
      scope = 2;
      displayName = "#STR_TTsKOPants";
      descriptionShort = "#STR_TTsKOPants_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamyshwhite_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamyshwhite_co.paa",
         "RevivalPlus\PantsPlus\data\ttsko_pants_kamyshwhite_co.paa"
      };
   };

   //
   //   VestsPlus
   //

   class ReflexVest;
   class RPL_ReflexVest_Police: ReflexVest {
      scope = 2;
      displayName = "#STR_ReflexVest_Police";
      descriptionShort = "#STR_ReflexVest_Police_Description";
      hiddenSelections[] = {
         "zbytek",
         "camoground",
         "camomale",
         "camofemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\police_vest_co.paa",
         "RevivalPlus\VestsPlus\data\police_vest_co.paa",
         "RevivalPlus\VestsPlus\data\police_vest_co.paa",
         "RevivalPlus\VestsPlus\data\police_vest_co.paa"
      };
      hiddenSelectionsMaterials[] = {
         "RevivalPlus\VestsPlus\data\orange_vest.rvmat",
         "RevivalPlus\VestsPlus\data\orange_vest.rvmat",
         "RevivalPlus\VestsPlus\data\orange_vest.rvmat",
         "RevivalPlus\VestsPlus\data\orange_vest.rvmat"
      };
   };
   class RPL_ReflexVest_Admin: RPL_ReflexVest_Police {
      scope = 2;
      displayName = "#STR_ReflexVest_Admin";
      descriptionShort = "#STR_ReflexVest_Admin_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\admin_vest_co.paa",
         "RevivalPlus\VestsPlus\data\admin_vest_co.paa",
         "RevivalPlus\VestsPlus\data\admin_vest_co.paa",
         "RevivalPlus\VestsPlus\data\admin_vest_co.paa"
      };
      itemsCargoSize[] = {
         10,
         50
      };
   };
   class PoliceVest;
   class RPL_PoliceVest_Black: PoliceVest {
      scope = 2;
      displayName = "#STR_PoliceVest_Black";
      descriptionShort = "#STR_PoliceVest_Black_Description";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\policevest_black_co.paa",
         "RevivalPlus\VestsPlus\data\policevest_black_co.paa",
         "RevivalPlus\VestsPlus\data\policevest_black_co.paa"
      };
   };
   class RPL_MilitiaVest_Black: PoliceVest {
      scope = 2;
      displayName = "#STR_MilitiaVest_Black";
      descriptionShort = "#STR_MilitiaVest_Black_Description";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\policevest_militia_co.paa",
         "RevivalPlus\VestsPlus\data\policevest_militia_co.paa",
         "RevivalPlus\VestsPlus\data\policevest_militia_co.paa"
      };
      hiddenSelectionsMaterials[] = {
         "RevivalPlus\VestsPlus\data\militiavest.rvmat",
         "RevivalPlus\VestsPlus\data\militiavest.rvmat",
         "RevivalPlus\VestsPlus\data\militiavest.rvmat"
      };
   };
   class RPL_MilitiaVest_Mikhail: PoliceVest {
      scope = 2;
      displayName = "#STR_MilitiaVest_Black";
      descriptionShort = "#STR_MilitiaVest_Black_Description";
      hiddenSelections[] = {
         "camoGround",
         "camoMale",
         "camoFemale"
      };
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\policevest_militia_mikhail_co.paa",
         "RevivalPlus\VestsPlus\data\policevest_militia_mikhail_co.paa",
         "RevivalPlus\VestsPlus\data\policevest_militia_mikhail_co.paa"
      };
      hiddenSelectionsMaterials[] = {
         "RevivalPlus\VestsPlus\data\militiavest.rvmat",
         "RevivalPlus\VestsPlus\data\militiavest.rvmat",
         "RevivalPlus\VestsPlus\data\militiavest.rvmat"
      };
   };
   class PressVest_ColorBase;
   class RPL_PressVest_SolidBlack: PressVest_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\pressvest_solidblack_co.paa",
         "RevivalPlus\VestsPlus\data\pressvest_solidblack_co.paa",
         "RevivalPlus\VestsPlus\data\pressvest_solidblack_co.paa"
      };
      hiddenSelectionsMaterials[] = {
        "RevivalPlus\VestsPlus\data\pressvest_solidblack.rvmat",
        "RevivalPlus\VestsPlus\data\pressvest_solidblack.rvmat",
        "RevivalPlus\VestsPlus\data\pressvest_solidblack.rvmat"
      };
   };
   class RPL_PressVest_Black: PressVest_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\pressvest_black_co.paa",
         "RevivalPlus\VestsPlus\data\pressvest_black_co.paa",
         "RevivalPlus\VestsPlus\data\pressvest_black_co.paa"
      };
      hiddenSelectionsMaterials[] = {
        "RevivalPlus\VestsPlus\data\pressvest.rvmat",
        "RevivalPlus\VestsPlus\data\pressvest.rvmat",
        "RevivalPlus\VestsPlus\data\pressvest.rvmat"
      };
   };
   /*
   class RPL_PressVest_Police: RPL_PressVest_SolidBlack {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\pressvest_police_co.paa",
         "RevivalPlus\VestsPlus\data\pressvest_police_co.paa",
         "RevivalPlus\VestsPlus\data\pressvest_police_co.paa"
      };
      itemsCargoSize[] = {
         8,
         5
      };
   };
   */
   class RPL_PressVest_Militia: RPL_PressVest_SolidBlack {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\VestsPlus\data\pressvest_militia_co.paa",
         "RevivalPlus\VestsPlus\data\pressvest_militia_co.paa",
         "RevivalPlus\VestsPlus\data\pressvest_militia_co.paa"
      };
      itemsCargoSize[] = {
         6,
         5
      };
      // Snížit nohq
      hiddenSelectionsMaterials[] = {
         "RevivalPlus\VestsPlus\data\pressvest_militia.rvmat",
         "RevivalPlus\VestsPlus\data\pressvest_militia.rvmat",
         "RevivalPlus\VestsPlus\data\pressvest_militia.rvmat"
      };
      class DamageSystem
      {
        class GlobalHealth
        {
          class Health
          {
            hitpoints=750;
            healthLevels[]=
            {

              {
                1,

                {
                  "RevivalPlus\VestsPlus\data\pressvest_militia.rvmat"
                }
              },

              {
                0.69999999,

                {
                  "RevivalPlus\VestsPlus\data\pressvest_militia.rvmat"
                }
              },

              {
                0.5,

                {
                  "RevivalPlus\VestsPlus\data\pressvest_militia_damage.rvmat"
                }
              },

              {
                0.30000001,

                {
                  "RevivalPlus\VestsPlus\data\pressvest_militia_damage.rvmat"
                }
              },

              {
                0,

                {
                  "RevivalPlus\VestsPlus\data\pressvest_militia_destruct.rvmat"
                }
              }
            };
          };
        };
      };
   };

   //
   //   ShoesPlus
   //

   class AthleticShoes_ColorBase;
   class RPL_AthleticShoes_Black_Adios: AthleticShoes_ColorBase {
      scope = 2;
      displayName = "#STR_AthleticShoes_Black_Adios";
      descriptionShort = "#STR_AthleticShoes_Black_Adios_Description";
      visibilityModifier = 0.9;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ShoesPlus\data\adiosshoes_black_co.paa",
         "RevivalPlus\ShoesPlus\data\adiosshoes_black_co.paa",
         "RevivalPlus\ShoesPlus\data\adiosshoes_black_co.paa"
      };
   };

   class NBCBootsBase;
   class RPL_NBCBoots_Black: NBCBootsBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ShoesPlus\data\nbc_boots_black_co.paa",
         "RevivalPlus\ShoesPlus\data\nbc_boots_black_co.paa",
         "RevivalPlus\ShoesPlus\data\nbc_boots_black_co.paa"
      };
   };
   class RPL_NBCBoots_Blue: NBCBootsBase {
      scope = 2;
      visibilityModifier = 0.7;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ShoesPlus\data\nbc_boots_aquablue_co.paa",
         "RevivalPlus\ShoesPlus\data\nbc_boots_aquablue_co.paa",
         "RevivalPlus\ShoesPlus\data\nbc_boots_aquablue_co.paa"
      };
   };

   //
   //   BackpacksPlus
   //

   class HuntingBag;
   class RPL_HuntingBag_Black: HuntingBag
   {
       scope = 2;
       hiddenSelectionsTextures[]=
       {
         "RevivalPlus\BackpacksPlus\data\hunting_black_co.paa",
         "RevivalPlus\BackpacksPlus\data\hunting_black_co.paa",
         "RevivalPlus\BackpacksPlus\data\hunting_black_co.paa"
       };
   };
   class RPL_HuntingBag_Grey: HuntingBag
   {
       scope = 2;
       hiddenSelectionsTextures[]=
       {
         "RevivalPlus\BackpacksPlus\data\hunting_grey_co.paa",
         "RevivalPlus\BackpacksPlus\data\hunting_grey_co.paa",
         "RevivalPlus\BackpacksPlus\data\hunting_grey_co.paa"
       };
   };
   class RPL_HuntingBag_Green: HuntingBag
   {
       scope = 2;
       hiddenSelectionsTextures[]=
       {
         "RevivalPlus\BackpacksPlus\data\hunting_green_co.paa",
         "RevivalPlus\BackpacksPlus\data\hunting_green_co.paa",
         "RevivalPlus\BackpacksPlus\data\hunting_green_co.paa"
       };
   };
   class RPL_HuntingBag_Krtecek: HuntingBag
   {
       scope = 2;
       hiddenSelectionsTextures[]=
       {
         "RevivalPlus\BackpacksPlus\data\hunting_krtecek_co.paa",
         "RevivalPlus\BackpacksPlus\data\hunting_krtecek_co.paa",
         "RevivalPlus\BackpacksPlus\data\hunting_krtecek_co.paa"
       };
   };

   class MountainBag_ColorBase;
   class RPL_MountainBag_Black: MountainBag_ColorBase {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\BackpacksPlus\data\mountain_black_co.paa",
         "RevivalPlus\BackpacksPlus\data\mountain_black_co.paa",
         "RevivalPlus\BackpacksPlus\data\mountain_black_co.paa"
      };
   };

   //
   //   MasksPlus
   //

   class SurgicalMask;
   class RPL_SurgicalMask_Black: SurgicalMask {
      scope = 2;
      hiddenSelectionsTextures[] = {
         "RevivalPlus\MasksPlus\data\surgical_mask_ground_black_co.paa",
         "RevivalPlus\MasksPlus\data\surgical_mask_black_co.paa",
         "RevivalPlus\MasksPlus\data\surgical_mask_black_co.paa"
      };
   };

   //
   //   Instruments
   //

   class Inventory_Base;
   class RPL_Whistle_Base: Inventory_Base {
      model = "RevivalPlus\ItemsPlus\instruments\models\smz_Pistalka.p3d";
      animClass = "Knife";
      rotationFlags = 17;
      itemSize[] = {
         1,
         2
      };
      weight = 15;
      fragility = 0.5;
      class AnimationSources {
         class cover {
            source = "user";
            animPeriod = 0.5;
            initPhase = 1;
         };
      };
   };
   class RPL_Whistle: RPL_Whistle_Base {
      scope = 2;
      displayName = "#STR_Whistle";
      descriptionShort = "#STR_Whistle_Description";
      hiddenSelectionsTextures[] = {
         "RevivalPlus\ItemsPlus\instruments\data\whistle_co.paa"
      };
   };

   /*----------------
      "Containers"
   ----------------*/

};
