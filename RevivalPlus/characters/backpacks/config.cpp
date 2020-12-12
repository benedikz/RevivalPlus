class CfgPatches {
  class RPL_Characters_Backpacks {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "DZ_Characters"
    };
  };
};
class CfgVehicles {
  class HuntingBag;
  class RPL_HuntingBag_Black: HuntingBag {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\hunting_black_co.paa",
      "RevivalPlus\characters\backpacks\data\hunting_black_co.paa",
      "RevivalPlus\characters\backpacks\data\hunting_black_co.paa"
    };
  };
  class RPL_HuntingBag_Grey: HuntingBag {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\hunting_grey_co.paa",
      "RevivalPlus\characters\backpacks\data\hunting_grey_co.paa",
      "RevivalPlus\characters\backpacks\data\hunting_grey_co.paa"
    };
  };
  class RPL_HuntingBag_Green: HuntingBag {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\hunting_green_co.paa",
      "RevivalPlus\characters\backpacks\data\hunting_green_co.paa",
      "RevivalPlus\characters\backpacks\data\hunting_green_co.paa"
    };
  };
  class RPL_HuntingBag_Krtecek: HuntingBag {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\hunting_krtecek_co.paa",
      "RevivalPlus\characters\backpacks\data\hunting_krtecek_co.paa",
      "RevivalPlus\characters\backpacks\data\hunting_krtecek_co.paa"
    };
  };

  class MountainBag_ColorBase;
  class RPL_MountainBag_Black: MountainBag_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\mountain_black_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_black_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_black_co.paa"
    };
  };
  class RPL_MountainBag_Blue: MountainBag_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\mountain_altblue_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_altblue_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_altblue_co.paa"
    };
  };
  class RPL_MountainBag_BrickRed: MountainBag_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\mountain_brickred_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_brickred_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_brickred_co.paa"
    };
  };
  class RPL_MountainBag_MeadowGreen: MountainBag_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\mountain_meadowgreen_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_meadowgreen_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_meadowgreen_co.paa"
    };
  };
  class RPL_MountainBag_Yellow: MountainBag_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\mountain_yellow_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_yellow_co.paa",
      "RevivalPlus\characters\backpacks\data\mountain_yellow_co.paa"
    };
  };

  class TortillaBag;
  class RPL_TortillaBag_Black: TortillaBag {
    scope = 2;
    hiddenSelections[] = {
      "camomale",
      "zbytek"
    };
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\tortilla_black_co.paa",
      "RevivalPlus\characters\backpacks\data\tortilla_black_co.paa"
    };
  };

  class AliceBag_ColorBase;
  class RPL_AliceBag_Flat: AliceBag_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\backpacks\data\alicebag_flat_co.paa",
      "RevivalPlus\characters\backpacks\data\alicebag_flat_co.paa",
      "RevivalPlus\characters\backpacks\data\alicebag_flat_co.paa"
    };
  };
};
