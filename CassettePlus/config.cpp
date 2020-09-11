class CfgPatches {
  class RevivalPlus_CassettePlus {
    units[] = {

      "RPL_CassettePlayer",
      "RPL_CassetteCase",
      "RPL_Cassette_Atraksion",
      "RPL_Cassette_BrePetrunko",
      "RPL_Cassette_Birches",
      "RPL_Cassette_CantHelpFallingInLove",
      "RPL_Cassette_DavidAGolias",
      "RPL_Cassette_DeadCitiesMarch",
      "RPL_Cassette_GruppaKrovi",
      "RPL_Cassette_JailhouseRock",
      "RPL_Cassette_JozinZBazin",
      "RPL_Cassette_Kalinka",
      "RPL_Cassette_Katyusha",
      "RPL_Cassette_NasNeDogoniat",
      "RPL_Cassette_NaZare",
      "RPL_Cassette_SovietAnthem",
      "RPL_Cassette_Stuk",
      "RPL_Cassette_ThreeLittleBirds",
      "RPL_Cassette_ZakroiZaMnoiDveri",
      "RPL_Cassette_ZivotJeJenNahoda"

    };
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {
      "DZ_Data",
      "DZ_Radio"
    };
  };
};

class CfgMods {
  class RevivalPlus_CassettePlus {
    dir = "CassettePlus";
    picture = "";
    action = "";
    hideName = 1;
    hidePicture = 1;
    name = "RevivalPlus_CassettePlus";
    credits = "benedi.kz";
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
          "CassettePlus/scripts/3_Game"
        };
      };
      class worldScriptModule {
        value = "";
        files[] = {
          "CassettePlus/scripts/4_World"
        };
      };
      class missionScriptModule {
        value = "";
        files[] = {
          "CassettePlus/scripts/5_Mission"
        };
      };
    };
  };
};

class CfgSlots {
  class Slot_Cassette {
    name = "Cassette";
    displayName = "Cassette";
    ghostIcon = "";
  };
};

class CfgSoundShaders {
  class RPL_Cassette_SoundShader_Base {
    samples[] = {};
    frequency = 1;
    range = 100;
    volume = 1;
  };

  class RPL_TurnOn_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\cassetteplayer_turn_on",
        1
      }
    };
  };
  /*
  class RPL_TurnOff_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\cassetteplayer_turn_off",
        1
      }
    };
  };
  */

  class RPL_Atraksion_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_atraksion_mo",
        1
      }
    };
  };
  class RPL_Birches_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_birches_mo",
        1
      }
    };
  };
  class RPL_BrePetrunko_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_brepetrunko_mo",
        1
      }
    };
  };
  class RPL_CantHelpFallingInLove_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_canthelpfallinginlove_mo",
        1
      }
    };
  };
  class RPL_DavidAGolias_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_davidagolias_mo",
        1
      }
    };
  };
  class RPL_DeadCitiesMarch_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_deadcitiesmarch_mo",
        1
      }
    };
  };
  class RPL_GruppaKrovi_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_gruppakrovi_mo",
        1
      }
    };
  };
  class RPL_JailhouseRock_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_jailhouserock_mo",
        1
      }
    };
  };
  class RPL_JozinZBazin_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_jozinzbazin_mo",
        1
      }
    };
  };
  class RPL_Kalinka_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_kalinka_mo",
        1
      }
    };
  };
  class RPL_Katyusha_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_katyusha_mo",
        1
      }
    };
  };
  class RPL_NasNeDogoniat_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_nasnedogoniat_mo",
        1
      }
    };
  };
  class RPL_NaZare_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_nazare_mo",
        1
      }
    };
  };
  class RPL_SovietAnthem_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_sovietanthem_mo",
        1
      }
    };
  };
  class RPL_Stuk_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_stuk_mo",
        1
      }
    };
  };
  class RPL_ThreeLittleBirds_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_threelittlebirds_mo",
        1
      }
    };
  };
  class RPL_ZakroiZaMnoiDveri_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_zakroizamnoidveri_mo",
        1
      }
    };
  };
  class RPL_ZivotJeJenNahoda_Shader: RPL_Cassette_SoundShader_Base {
    samples[] = {

      {
        "CassettePlus\tracks\track_zivotjejennahoda_mo",
        1
      }
    };
  };
};

class CfgSoundSets {
  class RPL_SoundSet_TurnOn {
    soundShaders[] = {
      "RPL_TurnOn_Shader"
    };
  };
  /*
  class RPL_SoundSet_TurnOff {
    soundShaders[] = {
      "RPL_TurnOff_Shader"
    };
  };
  */
  class RPL_SoundSet_Atraksion {
    soundShaders[] = {
      "RPL_Atraksion_Shader"
    };
  };
  class RPL_SoundSet_Birches {
    soundShaders[] = {
      "RPL_Birches_Shader"
    };
  };
  class RPL_SoundSet_BrePetrunko {
    soundShaders[] = {
      "RPL_BrePetrunko_Shader"
    };
  };
  class RPL_SoundSet_CantHelpFallingInLove {
    soundShaders[] = {
      "RPL_CantHelpFallingInLove_Shader"
    };
  };
  class RPL_SoundSet_DavidAGolias {
    soundShaders[] = {
      "RPL_DavidAGolias_Shader"
    };
  };
  class RPL_SoundSet_DeadCitiesMarch {
    soundShaders[] = {
      "RPL_DeadCitiesMarch_Shader"
    };
  };
  class RPL_SoundSet_GruppaKrovi {
    soundShaders[] = {
      "RPL_GruppaKrovi_Shader"
    };
  };
  class RPL_SoundSet_JailhouseRock {
    soundShaders[] = {
      "RPL_JailhouseRock_Shader"
    };
  };
  class RPL_SoundSet_JozinZBazin {
    soundShaders[] = {
      "RPL_JozinZBazin_Shader"
    };
  };
  class RPL_SoundSet_Kalinka {
    soundShaders[] = {
      "RPL_Kalinka_Shader"
    };
  };
  class RPL_SoundSet_Katyusha {
    soundShaders[] = {
      "RPL_Katyusha_Shader"
    };
  };
  class RPL_SoundSet_NasNeDogoniat {
    soundShaders[] = {
      "RPL_NasNeDogoniat_Shader"
    };
  };
  class RPL_SoundSet_NaZare {
    soundShaders[] = {
      "RPL_NaZare_Shader"
    };
  };
  class RPL_SoundSet_SovietAnthem {
    soundShaders[] = {
      "RPL_SovietAnthem_Shader"
    };
  };
  class RPL_SoundSet_Stuk {
    soundShaders[] = {
      "RPL_Stuk_Shader"
    };
  };
  class RPL_SoundSet_ThreeLittleBirds {
    soundShaders[] = {
      "RPL_ThreeLittleBirds_Shader"
    };
  };
  class RPL_SoundSet_ZakroiZaMnoiDveri {
    soundShaders[] = {
      "RPL_ZakroiZaMnoiDveri_Shader"
    };
  };
  class RPL_SoundSet_ZivotJeJenNahoda {
    soundShaders[] = {
      "RPL_ZivotJeJenNahoda_Shader"
    };
  };
};

class CfgVehicles {
  class Inventory_Base;
  class Container_Base;

  
  class RPL_CassettePlayer_Base: Inventory_Base {
    scope = 0;
    displayName = "Rádio";
    descriptionShort = "";
    animClass = "Knife";
    attachments[] = {
      "BatteryD",
      "Cassette"
    };
    fragility = 0.0099999998;
    absorbency = 0.5;
    repairableWithKits[] = {
      5,
      7
    };
    repairCosts[] = {
      50,
      55
    };
    class EnergyManager {
      hasIcon = 1;
      autoSwitchOff = 1;
      autoSwitchOffWhenInCargo = 0;
      plugType = 1;
      energyUsagePerSecond = 0.0019999998;
      attachmentAction = 1;
      wetnessExposure = 0.12;
    };
    class MeleeModes {
      class Default {
        ammo = "MeleeLightBlunt";
        range = 1;
      };
      class Heavy {
        ammo = "MeleeLightBlunt_Heavy";
        range = 1;
      };
      class Sprint {
        ammo = "MeleeLightBlunt_Heavy";
        range = 2.8;
      };
    };
  };
  class RPL_CassettePlayer: RPL_CassettePlayer_Base {
    scope = 2;
    //displayName="#STR_Radio";
    descriptionShort = "#STR_Radio_Description";
    model = "\dz\gear\radio\unitra_wilga.p3d";
    weight = 1700;
    itemSize[] = {
      2,
      3
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 100;
          healthLevels[] = {

            {
              1,

              {
                "DZ\gear\radio\data\unitra_wilga.rvmat"
              }
            },

            {
              0.69999999,

              {
                "DZ\gear\radio\data\unitra_wilga.rvmat"
              }
            },

            {
              0.5,

              {
                "DZ\gear\radio\data\unitra_wilga_damage.rvmat"
              }
            },

            {
              0.30000001,

              {
                "DZ\gear\radio\data\unitra_wilga_damage.rvmat"
              }
            },

            {
              0,

              {
                "DZ\gear\radio\data\unitra_wilga_destruct.rvmat"
              }
            }
          };
        };
      };
    };
  };
  class RPL_CassetteCase_Base: Container_Base {
    scope = 0;
    displayName = "Krabička kazet";
    descriptionShort = "Dřevěná krabička pro kazety od společnosti Kazprom. Pojme až šestnáct kazet. Chrání kazety před vlivy okolního prostředí.";
    model = "\dz\gear\tools\cleaning_kit_wood.p3d";
    animClass = "Knife";
    rotationFlags = 17;
    //stackedUnit="percentage";
    quantityBar = 0;
    //varQuantityInit=100;
    //varQuantityMin=0;
    //varQuantityMax=100;
    weight = 580;
    itemSize[] = {
      2,
      3
    };
    itemCargoSize[] = {
      8,
      2
    };
    fragility = 0.0099999998;
    //repairKitType=1;
    hiddenSelectionsMaterials[] = {
      "CassettePlus\data\cassette_case.rvmat",
      "CassettePlus\data\cassette_case_damage.rvmat",
      "CassettePlus\data\cassette_case_destruct.rvmat"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 100;
          healthLevels[] = {

            {
              1,

              {
                "DZ\gear\tools\data\cassette_case_wood.rvmat"
              }
            },

            {
              0.69999999,

              {
                "DZ\gear\tools\data\cassette_case_wood.rvmat"
              }
            },

            {
              0.5,

              {
                "DZ\gear\tools\data\cassette_case_damage.rvmat"
              }
            },

            {
              0.30000001,

              {
                "DZ\gear\tools\data\cassette_case_damage.rvmat"
              }
            },

            {
              0,

              {
                "DZ\gear\tools\data\cassette_case_destruct.rvmat"
              }
            }
          };
        };
      };
    };
    class MeleeModes {
      class Default {
        ammo = "MeleeLightBlunt";
        range = 1;
      };
      class Heavy {
        ammo = "MeleeLightBlunt_Heavy";
        range = 1;
      };
      class Sprint {
        ammo = "MeleeLightBlunt_Heavy";
        range = 2.8;
      };
    };
  };
  class RPL_CassetteCase: RPL_CassetteCase_Base {
    scope = 2;
    itemSize[] = {
      2,
      3
    };
    itemsCargoSize[] = {
      8,
      2
    };
    hiddenSelections[] = {
      "zbytek"
    };
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\cassette_case_co.paa"
    };
  };
  class RPL_Cassette_Base: Inventory_Base {
    displayName = "Cassette";
    descriptionShort = "Cassette";
    model = "\dz\gear\tools\cassette.p3d";
    weight = 100;
    itemSize[] = {
      1,
      1
    };
    fragility = 0.0099999998;
    absorbency = 0.5;
    repairableWithKits[] = {
      5,
      7
    };
    repairCosts[] = {
      30,
      25
    };
    inventorySlot[] = {
      "Cassette"
    };
    hiddenSelections[] = {
      "zbytek"
    };
    hiddenSelectionsTextures[] = {
      "DZ\gear\tools\data\cassette_co.paa"
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 100;
          healthLevels[] = {

            {
              1,

              {
                "DZ\gear\tools\data\cassette.rvmat"
              }
            },

            {
              0.69999999,

              {
                "DZ\gear\tools\data\cassette.rvmat"
              }
            },

            {
              0.5,

              {
                "DZ\gear\tools\data\cassette_damage.rvmat"
              }
            },

            {
              0.30000001,

              {
                "DZ\gear\tools\data\cassette_damage.rvmat"
              }
            },

            {
              0,

              {
                "DZ\gear\tools\data\cassette_destruct.rvmat"
              }
            }
          };
        };
      };
    };
    class MeleeModes {
      class Default {
        ammo = "MeleeLightBlunt";
        range = 1;
      };
      class Heavy {
        ammo = "MeleeLightBlunt_Heavy";
        range = 1;
      };
      class Sprint {
        ammo = "MeleeLightBlunt_Heavy";
        range = 2.8;
      };
    };
    class CfgCassette {};
  };

  class RPL_Cassette_Atraksion: RPL_Cassette_Base {
    scope = 2;
    displayName = "Аттраксион";
    descriptionShort = "Melodická skladba od skladatele Arna Babajanyana";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_atraksion_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_Atraksion";
    };
  };
  class RPL_Cassette_BrePetrunko: RPL_Cassette_Base {
    scope = 2;
    displayName = "Bre, Petrunko";
    descriptionShort = "Bulharská skladba od Koutevského Bulharského národního sboru.";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_bjornmaxwell_brepetrunko_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_BrePetrunko";
    };
  };
  class RPL_Cassette_Birches: RPL_Cassette_Base {
    scope = 2;
    displayName = "Березы";
    descriptionShort = "Ruská melodická skladba od Marka Fradkina, jenž byla inspirací pro Národní hymnu Černaruské republiky";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_birches_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_Birches";
    };
  };
  class RPL_Cassette_CantHelpFallingInLove: RPL_Cassette_Base {
    scope = 2;
    displayName = "Can't Help Falling In Love";
    descriptionShort = "Známá skladba od americké rock n'rollové hvězdy Elvise Presleyho. Za dob komunismu byla tato skladba tajnou vášní Černaruských občanů, kteří nesměli poslouchat západní producenty";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_canthelpfallinginlove_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_CantHelpFallingInLove";
    };
  };
  class RPL_Cassette_DavidAGolias: RPL_Cassette_Base {
    scope = 2;
    displayName = "David a Goliáš";
    descriptionShort = "Česká píseň o Davidu a Goliášovi od Jana Wericha.";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_bjornmaxwell_davidagolias_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_DavidAGolias";
    };
  };
  class RPL_Cassette_DeadCitiesMarch: RPL_Cassette_Base {
    scope = 2;
    displayName = "Марш мертвых городов";
    descriptionShort = "Podivná nahrávka s temnou tématikou";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_deadcitiesmarch_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_DeadCitiesMarch";
    };
  };
  class RPL_Cassette_GruppaKrovi: RPL_Cassette_Base {
    scope = 2;
    displayName = "Группа Крови";
    descriptionShort = "Skladba Группа Крови od sovětské rockové skupiny Kino";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_gruppakrovi_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_GruppaKrovi";
    };
  };
  class RPL_Cassette_JailhouseRock: RPL_Cassette_Base {
    scope = 2;
    displayName = "Jailhouse Rock";
    descriptionShort = "Známá skladba od americké rock n'rollové hvězdy Elvise Presleyho";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_jailhouserock_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_JailhouseRock";
    };
  };
  class RPL_Cassette_JozinZBazin: RPL_Cassette_Base {
    scope = 2;
    displayName = "Jožin z Bažin";
    descriptionShort = "Píseň Jožin z Bažin od Ivana Mládka.";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_bjornmaxwell_jozinzbazin_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_JozinZBazin";
    };
  };
  class RPL_Cassette_Kalinka: RPL_Cassette_Base {
    scope = 2;
    displayName = "Kalinka";
    descriptionShort = "Zažitá sovětská lidová píseň Kalinka v podání hudebního sboru Rudé armády";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_kalinka_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_Kalinka";
    };
  };
  class RPL_Cassette_Katyusha: RPL_Cassette_Base {
    scope = 2;
    displayName = "Kaťuša";
    descriptionShort = "Zažitá sovětská lidová píseň Kaťuša v podání hudebního sboru Rudé armády";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_katyusha_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_Katyusha";
    };
  };
  class RPL_Cassette_NasNeDogoniat: RPL_Cassette_Base {
    scope = 2;
    displayName = "Nas Ne Dogoniat";
    descriptionShort = "Skladba Nas Ne Dogoniat od ruského dua t.A.T.u";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_nasnedogoniat_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_NasNeDogoniat";
    };
  };
  class RPL_Cassette_NaZare: RPL_Cassette_Base {
    scope = 2;
    displayName = "На Заре";
    descriptionShort = "Oblíbená skladba На Заре z osmdesátých let od skupiny Alyans. Její melodie a zpěv navnazuje silný pocit nostalgie a atmosféru 80. let v Sovětském svazu";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_nazare_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_NaZare";
    };
  };
  class RPL_Cassette_SovietAnthem: RPL_Cassette_Base {
    scope = 2;
    displayName = "Národní hymna Sovětského svazu";
    descriptionShort = "Národní hymna Sovětského svazu v podání hudebního sboru Rudé armády.";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_sovietanthem_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_SovietAnthem";
    };
  };
  class RPL_Cassette_Stuk: RPL_Cassette_Base {
    scope = 2;
    displayName = "Стук";
    descriptionShort = "Skladba Стук od sovětské rockové skupiny Kino";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_stuk_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_Stuk";
    };
  };
  class RPL_Cassette_ThreeLittleBirds: RPL_Cassette_Base {
    scope = 2;
    displayName = "Three Little Birds";
    descriptionShort = "Skladba Three Little Birds od Boba Marleyho & kapely Wailers";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_threelittlebirds_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_ThreeLittleBirds";
    };
  };
  class RPL_Cassette_ZakroiZaMnoiDveri: RPL_Cassette_Base {
    scope = 2;
    displayName = "Закрои За Мнои Двери";
    descriptionShort = "Skladba Закрои За Мнои Двери od sovětské rockové skupiny Kino";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_zakroizamnoidveri_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_ZakroiZaMnoiDveri";
    };
  };
  class RPL_Cassette_ZivotJeJenNahoda: RPL_Cassette_Base {
    scope = 2;
    displayName = "Život Je Jen Náhoda";
    descriptionShort = "Skladba Život Je Jen Náhoda od Osvobozeného divadla v podání M. Schlesingerové";
    hiddenSelectionsTextures[] = {
      "CassettePlus\data\kazeta_bjornmaxwell_zivotjejennahoda_co.paa"
    };
    class CfgCassette {
      soundSet = "RPL_SoundSet_ZivotJeJenNahoda";
    };
  };
};
