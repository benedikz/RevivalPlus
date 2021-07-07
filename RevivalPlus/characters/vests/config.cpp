class CfgPatches {
  class RPL_Characters_Vests {
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

  /* Plate Carrier Vest */
  class PlateCarrierVest;
  class RPL_PlateCarrierVest_Multicam: PlateCarrierVest
  {
    scope = 2;
    hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\ballisticvest_multicam_co.paa",
      "RevivalPlus\characters\vests\data\ballisticvest_multicam_co.paa",
      "RevivalPlus\characters\vests\data\ballisticvest_multicam_co.paa"
    };
  };


  class HighCapacityVest_ColorBase;
  class RPL_HighCapacityVest_Raskolnikov: HighCapacityVest_ColorBase {
    scope = 1;
    visibilityModifier = 0.6;
    varWetMax = 0.25;
    heatIsolation = 0.5;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\tacticalvest2_raskolnikov_co.paa",
      "RevivalPlus\characters\vests\data\tacticalvest2_raskolnikov_co.paa",
      "RevivalPlus\characters\vests\data\tacticalvest2_raskolnikov_co.paa"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 1250;
        };
      };
    };
  };
  class RPL_HighCapacityVest_Beranov: HighCapacityVest_ColorBase {
    scope = 1;
    visibilityModifier = 0.6;
    varWetMax = 0.25;
    heatIsolation = 0.5;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\tacticalvest2_beranov_co.paa",
      "RevivalPlus\characters\vests\data\tacticalvest2_beranov_co.paa",
      "RevivalPlus\characters\vests\data\tacticalvest2_beranov_co.paa"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 1250;
        };
      };
    };
  };
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
      "RevivalPlus\characters\vests\data\police_vest_co.paa",
      "RevivalPlus\characters\vests\data\police_vest_co.paa",
      "RevivalPlus\characters\vests\data\police_vest_co.paa",
      "RevivalPlus\characters\vests\data\police_vest_co.paa"
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\vests\data\orange_vest.rvmat",
      "RevivalPlus\characters\vests\data\orange_vest.rvmat",
      "RevivalPlus\characters\vests\data\orange_vest.rvmat",
      "RevivalPlus\characters\vests\data\orange_vest.rvmat"
    };
  };
  class RPL_ReflexVest_Admin: RPL_ReflexVest_Police {
    scope = 2;
    displayName = "#STR_ReflexVest_Admin";
    descriptionShort = "#STR_ReflexVest_Admin_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\admin_vest_co.paa",
      "RevivalPlus\characters\vests\data\admin_vest_co.paa",
      "RevivalPlus\characters\vests\data\admin_vest_co.paa",
      "RevivalPlus\characters\vests\data\admin_vest_co.paa"
    };
    itemsCargoSize[] = {
      10,
      100
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
      "RevivalPlus\characters\vests\data\policevest_black_co.paa",
      "RevivalPlus\characters\vests\data\policevest_black_co.paa",
      "RevivalPlus\characters\vests\data\policevest_black_co.paa"
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
      "RevivalPlus\characters\vests\data\policevest_militia_co.paa",
      "RevivalPlus\characters\vests\data\policevest_militia_co.paa",
      "RevivalPlus\characters\vests\data\policevest_militia_co.paa"
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\vests\data\militiavest.rvmat",
      "RevivalPlus\characters\vests\data\militiavest.rvmat",
      "RevivalPlus\characters\vests\data\militiavest.rvmat"
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
      "RevivalPlus\characters\vests\data\policevest_militia_mikhail_co.paa",
      "RevivalPlus\characters\vests\data\policevest_militia_mikhail_co.paa",
      "RevivalPlus\characters\vests\data\policevest_militia_mikhail_co.paa"
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\vests\data\militiavest.rvmat",
      "RevivalPlus\characters\vests\data\militiavest.rvmat",
      "RevivalPlus\characters\vests\data\militiavest.rvmat"
    };
  };
  class PressVest_ColorBase;
  class RPL_PressVest_SolidBlack: PressVest_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\pressvest_solidblack_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_solidblack_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_solidblack_co.paa"
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\vests\data\pressvest_solidblack.rvmat",
      "RevivalPlus\characters\vests\data\pressvest_solidblack.rvmat",
      "RevivalPlus\characters\vests\data\pressvest_solidblack.rvmat"
    };
  };
  class RPL_PressVest_Black: PressVest_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\pressvest_black_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_black_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_black_co.paa"
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\vests\data\pressvest.rvmat",
      "RevivalPlus\characters\vests\data\pressvest.rvmat",
      "RevivalPlus\characters\vests\data\pressvest.rvmat"
    };
  };
  class RPL_PressVest_Militia: RPL_PressVest_SolidBlack {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\pressvest_militia_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_militia_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_militia_co.paa"
    };
    itemsCargoSize[] = {
      6,
      5
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\vests\data\pressvest_militia.rvmat",
      "RevivalPlus\characters\vests\data\pressvest_militia.rvmat",
      "RevivalPlus\characters\vests\data\pressvest_militia.rvmat"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 750;
          healthLevels[] = {
            {
              1,
              {
                "RevivalPlus\characters\vests\data\pressvest_militia.rvmat"
              }
            },
            {
              0.7,
              {
                "RevivalPlus\characters\vests\data\pressvest_militia.rvmat"
              }
            },
            {
              0.5,
              {
                "RevivalPlus\characters\vests\data\pressvest_militia_damage.rvmat"
              }
            },
            {
              0.3,
              {
                "RevivalPlus\characters\vests\data\pressvest_militia_damage.rvmat"
              }
            },
            {
              0,
              {
                "RevivalPlus\characters\vests\data\pressvest_militia_destruct.rvmat"
              }
            }
          };
        };
      };
    };
  };

  /* Soviet Vests */
  class RPL_BallisticVest_Soviet_Base: PressVest_ColorBase {
    scope = 0;
    displayName = "#STR_BallisticVest_Soviet";
    descriptionShort = "#STR_BallisticVest_Soviet_D";
    itemsCargoSize[] = {
      6,
      5
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\vests\data\pressvest_soviet.rvmat",
      "RevivalPlus\characters\vests\data\pressvest_soviet.rvmat",
      "RevivalPlus\characters\vests\data\pressvest_soviet.rvmat"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 750;
          healthLevels[] = {
            {
              1,
              {
                "RevivalPlus\characters\vests\data\pressvest_soviet.rvmat"
              }
            },
            {
              0.7,
              {
                "RevivalPlus\characters\vests\data\pressvest_soviet.rvmat"
              }
            },
            {
              0.5,
              {
                "RevivalPlus\characters\vests\data\pressvest_soviet_damage.rvmat"
              }
            },
            {
              0.3,
              {
                "RevivalPlus\characters\vests\data\pressvest_soviet_damage.rvmat"
              }
            },
            {
              0,
              {
                "RevivalPlus\characters\vests\data\pressvest_soviet_destruct.rvmat"
              }
            }
          };
        };
      };
    };
  };
  class RPL_BallisticVest_Soviet_Brown: RPL_BallisticVest_Soviet_Base
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\pressvest_soviet_brown_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_soviet_brown_co",
      "RevivalPlus\characters\vests\data\pressvest_soviet_brown_co"
    };
  };
  class RPL_BallisticVest_Soviet_DarkBrown: RPL_BallisticVest_Soviet_Base
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\pressvest_soviet_darkbrown_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_soviet_darkbrown_co",
      "RevivalPlus\characters\vests\data\pressvest_soviet_darkbrown_co"
    };
  };
  class RPL_BallisticVest_Soviet_Olive: RPL_BallisticVest_Soviet_Base
  {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\vests\data\pressvest_soviet_olive_co.paa",
      "RevivalPlus\characters\vests\data\pressvest_soviet_olive_co",
      "RevivalPlus\characters\vests\data\pressvest_soviet_olive_co"
    };
  };
};
