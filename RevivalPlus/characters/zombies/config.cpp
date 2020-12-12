class CfgPatches {
  class RPL_Characters_Zombies {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "DZ_Characters"
    };
  };
};

class CfgVehicles {
  class ZmbM_PatrolNormal_Base;
  class ZmbM_usSoldier_normal_Base;
  class RPL_ZmbM_PatrolNormal_GorkaBlack: ZmbM_PatrolNormal_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\zombies\data\patrol_normal_m_black_ca.paa"
    };
  };
  class RPL_ZmbM_PatrolNormal_GorkaBrown: ZmbM_PatrolNormal_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\zombies\data\patrol_normal_m_gorkabrown_ca.paa"
    };
  };
  class RPL_ZmbM_SoldierNormal_RUSMPT: ZmbM_usSoldier_normal_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\zombies\data\russoldier_m_marpat_co.paa"
    };
  };
  class RPL_ZmbM_SoldierSpetsnaz_RUSMPT: ZmbM_usSoldier_normal_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\zombies\data\russoldier_spetsnaz_m_marpat_co.paa"
    };
  };
  class RPL_ZmbM_SoldierSpetsnaz2_RUSMPT: ZmbM_usSoldier_normal_Base {
    scope = 2;
    hiddenSelectionsTextures[] = {
      "RevivalPlus\characters\zombies\data\russoldier_spetsnaz2_m_marpat_co.paa"
    };
  };
};
