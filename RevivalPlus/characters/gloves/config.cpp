class CfgPatches {
  class RPL_Characters_Gloves {
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
  class NBCGloves_ColorBase;
  class RPL_NBCGloves_Black: NBCGloves_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\gloves\data\nbc_gloves_black_co.paa",
      "RevivalPlus\characters\gloves\data\nbc_gloves_black_co.paa",
      "RevivalPlus\characters\gloves\data\nbc_gloves_black_co.paa"
    };
  };
  class RPL_NBCGloves_Yellow: NBCGloves_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\gloves\data\nbc_gloves_yellow_co.paa",
      "RevivalPlus\characters\gloves\data\nbc_gloves_yellow_co.paa",
      "RevivalPlus\characters\gloves\data\nbc_gloves_yellow_co.paa"
    };
  };
  class RPL_NBCGloves_Green: NBCGloves_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\gloves\data\nbc_gloves_green_co.paa",
      "RevivalPlus\characters\gloves\data\nbc_gloves_green_co.paa",
      "RevivalPlus\characters\gloves\data\nbc_gloves_green_co.paa"
    };
  };
  class RPL_NBCGloves_Blue: NBCGloves_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\gloves\data\nbc_gloves_blue_co.paa",
      "RevivalPlus\characters\gloves\data\nbc_gloves_blue_co.paa",
      "RevivalPlus\characters\gloves\data\nbc_gloves_blue_co.paa"
    };
  };
};
