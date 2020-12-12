class CfgPatches {
  class RPL_Characters_Masks {
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
  class SurgicalMask;
  class RPL_SurgicalMask_Black: SurgicalMask {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\masks\data\surgical_mask_ground_black_co.paa",
      "RevivalPlus\characters\masks\data\surgical_mask_black_co.paa",
      "RevivalPlus\characters\masks\data\surgical_mask_black_co.paa"
    };
  };
  class BalaclavaMask_ColorBase;
  class RPL_BalaclavaMask_Skullteeth: BalaclavaMask_ColorBase {
    scope = 2;
    color = "black";
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\masks\data\balaclava_skullteeth_co.paa",
      "RevivalPlus\characters\masks\data\balaclava_skullteeth_co.paa",
      "RevivalPlus\characters\masks\data\balaclava_skullteeth_co.paa"
    };
  };
  class RPL_BalaclavaMask_BrokenTeeth: BalaclavaMask_ColorBase {
    scope = 2;
    color = "black";
    visibilityModifier = 0.85;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\masks\data\balaclava_brokenteeth_co.paa",
      "RevivalPlus\characters\masks\data\balaclava_brokenteeth_co.paa",
      "RevivalPlus\characters\masks\data\balaclava_brokenteeth_co.paa"
    };
  };
  class Balaclava3Holes_ColorBase;
  class RPL_Balaclava3Holes_Skull: Balaclava3Holes_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\masks\data\balaclava_3holes_skull_co.paa",
      "RevivalPlus\characters\masks\data\balaclava_3holes_skull_co.paa",
      "RevivalPlus\characters\masks\data\balaclava_3holes_skull_co.paa"
    };
  };

  class GP5GasMask;
  class RPL_GP5GasMask_Black: GP5GasMask {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\masks\data\gp5gasmask_black_co.paa",
      "RevivalPlus\characters\masks\data\gp5gasmask_black_co.paa",
      "RevivalPlus\characters\masks\data\gp5gasmask_black_co.paa"
    };
  };
  class RPL_GP5GasMask_Forest: GP5GasMask {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\masks\data\gp5gasmask_forest_co.paa",
      "RevivalPlus\characters\masks\data\gp5gasmask_forest_co.paa",
      "RevivalPlus\characters\masks\data\gp5gasmask_forest_co.paa"
    };
  };
  class RPL_GP5GasMask_Yellow: GP5GasMask {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\masks\data\gp5gasmask_yellow_co.paa",
      "RevivalPlus\characters\masks\data\gp5gasmask_yellow_co.paa",
      "RevivalPlus\characters\masks\data\gp5gasmask_yellow_co.paa"
    };
  };
};
