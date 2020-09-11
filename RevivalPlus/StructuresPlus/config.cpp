class CfgPatches
{
  class RevivalPlus_Structures {
     units[] = {};
     weapons[] = {};
     requiredVersion = 0.1;
     requiredAddons[] = {
        "DZ_Structures",
        "DZ_Structures_Signs",
        "DZ_Data"
     };
  };
};

class CfgVehicles
{
  /* Jack Forest's Tombstone
   * Model: Smejd
   * Textures: benedi.kz
   */
  class HouseNoDestruct;



  class RPL_Static_Tombstone_JackForest: HouseNoDestruct {
     scope = 2;
     model = "RevivalPlus\StructuresPlus\model\smz_Jack_Tombstone.p3d";
     rotateDropped = 0;
     rotateAlways = 0;
     lootTag[] = {
        "Work"
     };
     absorbency = 0;
  };
  class RPL_Static_Cedule_Base: HouseNoDestruct {
     scope = 0;
     model = "RevivalPlus\StructuresPlus\model\smz_Cedule.p3d";
     rotateDropped = 0;
     rotateAlways = 0;
     hiddenSelections[] = {
        "zbytek"
     };
     hiddenSelectionsMaterials[] = {
        "RevivalPlus\StructuresPlus\data\sign.rvmat"
     };
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\sign_blank_co.paa"
     };

  };
  /* Sign (Cedule)
   * Model: Smejd
   * Textures: benedi.kz
   */
  class RPL_Static_Cedule: RPL_Static_Cedule_Base {
     scope = 2;
  };

  class RPL_Static_MinefieldSign: RPL_Static_Cedule_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\sign_minefield_co.paa"
     };
  };
  /* Flag
   * Model: Smejd
   * Textures: benedi.kz
   */
  class RPL_Static_Flag_Base: HouseNoDestruct {
     scope = 0;
     model = "RevivalPlus\StructuresPlus\model\smz_Flag.p3d";
     rotateDropped = 0;
     rotateAlways = 0;
     lootTag[] = {
        "Work"
     };
     absorbency = 0;
     hiddenSelections[] = {
        "zbytek"
     };
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_obchodniunie_co.paa"
     };
  };
  class RPL_Static_Flag_ObchodniUnie: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_obchodniunie_co.paa"
     };
  };
  class RPL_Static_Flag_VlasteneckaUnie: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_vlasteneckaunie_co.paa"
     };
  };
  class RPL_Static_Flag_Police: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_policie_co.paa"
     };
  };
  class RPL_Static_Flag_NarodniStrana: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_narodnistrana_co.paa"
     };
  };
  class RPL_Static_Flag_Takistan: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_takistan_co.paa"
     };
  };
  class RPL_Static_Flag_TakistaniMilitia: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_takistanimilitia_co.paa"
     };
  };
  class RPL_Static_Flag_ObchodniUnieBlack: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_obchodniunie_grayscale_co.paa"
     };
  };
  class RPL_Static_Flag_Grishino: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_grishino_co.paa"
     };
  };
  class RPL_Static_Flag_Chernarus: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_cernarus_co.paa"
     };
  };
  class RPL_Static_Flag_RussianFederation: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_ruskafederace_co.paa"
     };
  };
  class RPL_Static_Flag_UnitedNations: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_unitednations_co.paa"
     };
  };
  class RPL_Static_Flag_KamenkaCoalition: RPL_Static_Flag_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\flag_kamenkacoalition_co.paa"
     };
  };
  /* User Texture / Graffiti
   * Model: Smejd
   * Textures: benedi.kz
   */
  class RPL_Static_Graffiti_Base: HouseNoDestruct {
     scope = 0;
     model = "RevivalPlus\StructuresPlus\model\smz_Graffiti.p3d";
     rotateDropped = 0;
     rotateAlways = 0;
     lootTag[] = {
        "Work"
     };
     absorbency = 0;
     hiddenSelections[] = {
        "zbytek"
     };
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_westoodhere_ca.paa"
     };
     hiddenSelectionsMaterials[] = {
        "RevivalPlus\StructuresPlus\data\graffiti.rvmat"
     };
  };
  class RPL_Static_Graffiti_WeStoodHere: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_westoodhere_ca.paa"
     };
  };
  class RPL_Static_Graffiti_FiveYears: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_5let_ca.paa"
     };
  };
  class RPL_Static_Graffiti_SevenYears: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_7let_ca.paa"
     };
  };
  class RPL_Static_Graffiti_BolshevikFuckers: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_bolshevikfuckers_ca.paa"
     };
  };
  class RPL_Static_Graffiti_CommunistsArePricks: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_communistsarepricks_ca.paa"
     };
  };
  class RPL_Static_Graffiti_TheyAreEverywhere: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_theyareeverywhere_ca.paa"
     };
  };
  class RPL_Static_Graffiti_CreepyGirl: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_creepygirl_ca.paa"
     };
  };
  class RPL_Static_Graffiti_FlippedCross: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_flippedcross_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Kostlivec: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_kostlivec_ca.paa"
     };
  };
  class RPL_Static_Graffiti_PeaceFromBlood: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_peacefromblood_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Pentagram: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_pentagram_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Smrtka: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_smrtka_ca.paa"
     };
  };
  class RPL_Static_Graffiti_SprayCross: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_spraycross_ca.paa"
     };
  };
  class RPL_Static_Graffiti_SlavaCDF: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_slavacdf_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Ubegaj: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_ubegaj_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Che: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_che_ca.paa"
     };
  };
  class RPL_Static_Graffiti_MyJsmeRusko: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_myjsmerusko_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Oil_Front: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_oil_front_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Oil_Back: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_oil_back_ca.paa"
     };
  };
  class RPL_Static_Graffiti_SovietSoldiers: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_sovietsoldiers_ca.paa"
     };
  };
  class RPL_Static_Graffiti_SvobodaProZagorii: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_svobodaprozagorii_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Nenavist: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_nenavist_ca.paa"
     };
  };
  class RPL_Static_Graffiti_OdOpicProOpice: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_odopicproopice_ca.paa"
     };
  };
  class RPL_Static_Graffiti_SmrtJeMeziNami: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_smrtjemezinami_ca.paa"
     };
  };
  class RPL_Static_Graffiti_UsmejSeTyPico: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_usmejsetypico_ca.paa"
     };
  };
  class RPL_Static_Graffiti_Zona01: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_zona01_ca.paa"
     };
  };
  class RPL_Static_Graffiti_ZonaZabiji: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_zonazabiji_ca.paa"
     };
  };
  class RPL_Static_Graffiti_zvezdanadezhda: RPL_Static_Graffiti_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\graffiti_zvezdanadezhda_ca.paa"
     };
  };
  /* Chroma Studio
   * Model: Smejd
   * Textures: benedi.kz
   */
  class RPL_Static_ChromaStudio_Base: HouseNoDestruct {
     scope = 0;
     model = "RevivalPlus\StructuresPlus\model\smz_Studio.p3d";
     rotateDropped = 0;
     rotateAlways = 0;
     absorbency = 0;
  };
  class RPL_Static_ChromaStudio: RPL_Static_ChromaStudio_Base {
     scope = 2;
     hiddenSelectionsTextures[] = {
        "RevivalPlus\StructuresPlus\data\studio_co.paa"
     };
  };

};
