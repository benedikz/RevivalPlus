class CfgPatches {
  class RPL_Characters_Pants {
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
  class PrisonUniformPants;
  class RPL_PrisonUniformPants_Olive: PrisonUniformPants {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\prison_pants_green_g_co.paa",
      "RevivalPlus\characters\pants\data\prison_pants_green_co.paa",
      "RevivalPlus\characters\pants\data\prison_pants_green_co.paa"
    };
  };
  class RPL_PrisonUniformPants_Orange: PrisonUniformPants {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\prison_pants_orange_g_co.paa",
      "RevivalPlus\characters\pants\data\prison_pants_orange_co.paa",
      "RevivalPlus\characters\pants\data\prison_pants_orange_co.paa"
    };
  };
  class RPL_PrisonUniformPants_LividBrown: PrisonUniformPants {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\prison_pants_lividbrown_g_co.paa",
      "RevivalPlus\characters\pants\data\prison_pants_lividbrown_co.paa",
      "RevivalPlus\characters\pants\data\prison_pants_lividbrown_co.paa"
    };
  };

  class PolicePants;
  class RPL_PolicePants_RedStripe: PolicePants {
    scope = 2;
    displayName = "#STR_PolicePants_Black";
    descriptionShort = "#STR_PolicePants_Black_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\policepants_redline_co.paa",
      "RevivalPlus\characters\pants\data\policepants_redline_co.paa",
      "RevivalPlus\characters\pants\data\policepants_redline_co.paa"
    };
  };
  class RPL_PolicePants_Black_Red: PolicePants {
    scope = 2;
    displayName = "#STR_PolicePants_Black";
    descriptionShort = "#STR_PolicePants_Black_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\policepants_black_red_co.paa",
      "RevivalPlus\characters\pants\data\policepants_black_red_co.paa",
      "RevivalPlus\characters\pants\data\policepants_black_red_co.paa"
    };
  };
  class RPL_PolicePants_Black_Green: PolicePants {
    scope = 2;
    displayName = "#STR_PolicePants_Black";
    descriptionShort = "#STR_PolicePants_Black_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\policepants_black_green_co.paa",
      "RevivalPlus\characters\pants\data\policepants_black_green_co.paa",
      "RevivalPlus\characters\pants\data\policepants_black_green_co.paa"
    };
  };

  class NBCPantsBase;
  class RPL_NBCPants_Black: NBCPantsBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\nbc_pants_black_co.paa",
      "RevivalPlus\characters\pants\data\nbc_pants_black_co.paa",
      "RevivalPlus\characters\pants\data\nbc_pants_black_co.paa"
    };
  };
  class RPL_NBCPants_Yellow: NBCPantsBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\nbc_pants_yellow_co.paa",
      "RevivalPlus\characters\pants\data\nbc_pants_yellow_co.paa",
      "RevivalPlus\characters\pants\data\nbc_pants_yellow_co.paa"
    };
  };
  class RPL_NBCPants_Green: NBCPantsBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\nbc_pants_green_co.paa",
      "RevivalPlus\characters\pants\data\nbc_pants_green_co.paa",
      "RevivalPlus\characters\pants\data\nbc_pants_green_co.paa"
    };
  };
  class RPL_NBCPants_Blue: NBCPantsBase {
    scope = 2;
    visibilityModifier = 0.7;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\nbc_pants_blue_co.paa",
      "RevivalPlus\characters\pants\data\nbc_pants_blue_co.paa",
      "RevivalPlus\characters\pants\data\nbc_pants_blue_co.paa"
    };
  };

  class CargoPants_ColorBase;
  // NAHRADIT NOVEJMA

  class CanvasPants_ColorBase;
  class RPL_CanvasPants_Krtek: CanvasPants_ColorBase {
    scope = 2;
    displayName = "#STR_CanvasPants_Krtek";
    descriptionShort = "#STR_CanvasPants_Krtek_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\canvaspants_blue_krtek_co.paa",
      "RevivalPlus\characters\pants\data\canvaspants_blue_krtek_co.paa",
      "RevivalPlus\characters\pants\data\canvaspants_blue_krtek_co.paa"
    };
  };
  class RPL_CanvasPants_RedChecked: CanvasPants_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\canvaspants_redcheck_co.paa",
      "RevivalPlus\characters\pants\data\canvaspants_redcheck_co.paa",
      "RevivalPlus\characters\pants\data\canvaspants_redcheck_co.paa"
    };
  };

  class PolicePantsOrel;
  class RPL_PolicePants_KamyshUrban: PolicePantsOrel {
    scope = 2;
    displayName = "#STR_PolicePants_KamyshUrban";
    descriptionShort = "#STR_PolicePants_KamyshUrban_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\ttsko_pants_kamysh_urban_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_kamysh_urban_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_kamysh_urban_co.paa"
    };
  };
  class RPL_PolicePants_Cargo: PolicePantsOrel {
    scope = 2;
    displayName = "#STR_PolicePants_KamyshUrban";
    descriptionShort = "#STR_TTsKOPants_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\ttsko_pants_police_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_police_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_police_co.paa"
    };
  };

  class TTSKOPants;
  class RPL_TTsKOPants_Olive: TTSKOPants {
    scope = 2;
    displayName = "#STR_TTsKOPants";
    descriptionShort = "#STR_TTsKOPants_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\ttsko_pants_olive_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_olive_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_olive_co.paa"
    };
  };
  class RPL_TTsKOPants_Gray: TTSKOPants {
    scope = 2;
    displayName = "#STR_TTsKOPants";
    descriptionShort = "#STR_TTsKOPants_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\ttsko_pants_gray_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_gray_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_gray_co.paa"
    };
  };
  class RPL_TTsKOPants_Brown: TTSKOPants {
    scope = 2;
    displayName = "#STR_TTsKOPants";
    descriptionShort = "#STR_TTsKOPants_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\ttsko_pants_brown_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_brown_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_brown_co.paa"
    };
  };
  class RPL_TTsKOPants_Flora: TTSKOPants {
    scope = 2;
    displayName = "#STR_TTsKOPants";
    descriptionShort = "#STR_TTsKOPants_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\ttsko_pants_flora_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_flora_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_flora_co.paa"
    };
  };
  class RPL_TTsKOPants_Kamysh: TTSKOPants {
    scope = 2;
    displayName = "#STR_TTsKOPants";
    descriptionShort = "#STR_TTsKOPants_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\ttsko_pants_kamysh_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_kamysh_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_kamysh_co.paa"
    };
  };
  class RPL_TTsKOPants_KamyshWhite: TTSKOPants {
    scope = 2;
    displayName = "#STR_TTsKOPants";
    descriptionShort = "#STR_TTsKOPants_Description";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\ttsko_pants_kamyshwhite_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_kamyshwhite_co.paa",
      "RevivalPlus\characters\pants\data\ttsko_pants_kamyshwhite_co.paa"
    };
  };

  class TrackSuitPants_ColorBase;
  class RPL_TrackSuitPants_Yellow: TrackSuitPants_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\tracksuit_pants_yellow_co.paa",
      "RevivalPlus\characters\pants\data\tracksuit_pants_yellow_co.paa",
      "RevivalPlus\characters\pants\data\tracksuit_pants_yellow_co.paa"
    };
  };
  class RPL_TrackSuitPants_Loverboy: TrackSuitPants_ColorBase {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\tracksuit_pants_loverboy_co.paa",
      "RevivalPlus\characters\pants\data\tracksuit_pants_loverboy_co.paa",
      "RevivalPlus\characters\pants\data\tracksuit_pants_loverboy_co.paa"
    };
  };

  class USMCPants_ColorBase;
  class RPL_SpetsnazPants_RUSMPT: USMCPants_ColorBase {
    scope = 2;
    visibilityModifier = 0.6;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\spetsnaz_pants_marpat_co.paa",
      "RevivalPlus\characters\pants\data\spetsnaz_pants_marpat_co.paa",
      "RevivalPlus\characters\pants\data\spetsnaz_pants_marpat_co.paa"
    };
  };
  class RPL_SpetsnazPants_RUSMPT_Winter: USMCPants_ColorBase {
    scope = 2;
    visibilityModifier = 0.6;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\pants\data\spetsnaz_pants_winpat_co.paa",
      "RevivalPlus\characters\pants\data\spetsnaz_pants_winpat_co.paa",
      "RevivalPlus\characters\pants\data\spetsnaz_pants_winpat_co.paa"
    };
  };
};
