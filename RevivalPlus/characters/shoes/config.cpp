class CfgPatches {
  class RPL_Characters_Shoes {
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
  class AthleticShoes_ColorBase;
  class RPL_AthleticShoes_Black_Adios: AthleticShoes_ColorBase {
    scope = 2;
    displayName = "#STR_AthleticShoes_Black_Adios";
    descriptionShort = "#STR_AthleticShoes_Black_Adios_Description";
    visibilityModifier = 0.9;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\shoes\data\adiosshoes_black_co.paa",
      "RevivalPlus\characters\shoes\data\adiosshoes_black_co.paa",
      "RevivalPlus\characters\shoes\data\adiosshoes_black_co.paa"
    };
  };
  class NBCBootsBase;
  class RPL_NBCBoots_Black: NBCBootsBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\shoes\data\nbc_boots_black_co.paa",
      "RevivalPlus\characters\shoes\data\nbc_boots_black_co.paa",
      "RevivalPlus\characters\shoes\data\nbc_boots_black_co.paa"
    };
  };
  class RPL_NBCBoots_Yellow: NBCBootsBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\shoes\data\nbc_boots_yellow_co.paa",
      "RevivalPlus\characters\shoes\data\nbc_boots_yellow_co.paa",
      "RevivalPlus\characters\shoes\data\nbc_boots_yellow_co.paa"
    };
  };
  class RPL_NBCBoots_Green: NBCBootsBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\shoes\data\nbc_boots_green_co.paa",
      "RevivalPlus\characters\shoes\data\nbc_boots_green_co.paa",
      "RevivalPlus\characters\shoes\data\nbc_boots_green_co.paa"
    };
  };
  class RPL_NBCBoots_Blue: NBCBootsBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\shoes\data\nbc_boots_blue_co.paa",
      "RevivalPlus\characters\shoes\data\nbc_boots_blue_co.paa",
      "RevivalPlus\characters\shoes\data\nbc_boots_blue_co.paa"
    };
  };
};
