class CfgPatches {
  class RPL_Characters_Glasses {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "DZ_Characters",
      "DZ_Gear_Optics"
    };
  };
};

class CfgVehicles {
  class Clothing_Base;

  class ThickFramesGlasses;
  class RPL_Sunglasses_Base: ThickFramesGlasses {
    scope = 0;
    displayName = "$STR_RPL_Sunglasses";
    descriptionShort = "$STR_RPL_Sunglasses_D";
    weight = 50;
    hiddenSelections[] = {
      "camoGround",
      "camoMale",
      "camoFemale"
    };
    hiddenSelectionsTextures[] = {
      "",
      "",
      ""
    };
  };
  class RPL_Sunglasses_Black: RPL_Sunglasses_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\glasses\data\sunglasses_black_co.paa",
      "RevivalPlus\characters\glasses\data\sunglasses_black_co.paa",
      "RevivalPlus\characters\glasses\data\sunglasses_black_co.paa"
    };
  };

  class AviatorGlasses;
  class RPL_AviatorGlasses: AviatorGlasses {
    scope = 2;
    hiddenSelections[] = {
      "zbytek",
      "camomale",
      "camofemale"
    };
    hiddenSelectionsMaterials[] = {
      "RevivalPlus\characters\glasses\data\aviator_metal.rvmat",
      "RevivalPlus\characters\glasses\data\aviator_metal.rvmat",
      "RevivalPlus\characters\glasses\data\aviator_metal.rvmat"
    };
    class ClothingTypes {
      male = "\DZ\characters\glasses\aviator_glasses.p3d";
      female = "\DZ\characters\glasses\aviator_glasses.p3d";
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 50;
          healthLevels[] = {
            {
              1.0,
              {
                "RevivalPlus\characters\glasses\data\aviator_metal.rvmat"
              }
            },
            {
              0.7,
              {
                "RevivalPlus\characters\glasses\data\aviator_metal.rvmat"
              }
            },
            {
              0.5,
              {
                "RevivalPlus\characters\glasses\data\aviator_metal_damage.rvmat"
              }
            },
            {
              0.3,
              {
                "RevivalPlus\characters\glasses\data\aviator_metal_damage.rvmat"
              }
            },
            {
              0.0,
              {
                "RevivalPlus\characters\glasses\data\aviator_metal_destruct.rvmat"
              }
            }
          };
        };
      };
    };
  };
};
