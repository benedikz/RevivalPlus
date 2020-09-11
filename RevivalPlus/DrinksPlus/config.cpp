class CfgPatches {
   class RevivalPlus_Drinks {
      units[] = {};
      weapons[] = {};
      requiredVersion = 0.1;
      requiredAddons[] = {
         "DZ_Data"
      };
   };
};

class CfgVehicles
{
  class SodaCan_Pipsi;
  class RPL_SodaCan_Kofola: SodaCan_Pipsi {
     scope = 2;
     displayName = "#STR_SodaCan_Kofola";
     descriptionShort = "#STR_SodaCan_Kofola_Description";
     hiddenSelectionsTextures[] = {
        "RevivalPlus\DrinksPlus\data\can_kofola_co.paa"
     };
  };
  class RPL_SodaCan_PanzerBeer: SodaCan_Pipsi {
     scope = 2;
     displayName = "#STR_SodaCan_PanzerBeer";
     descriptionShort = "#STR_SodaCan_PanzerBeer_Description";
     hiddenSelectionsTextures[] = {
        "RevivalPlus\DrinksPlus\data\can_panzerbeer_co.paa"
     };
  };
  class RPL_SodaCan_RasputinKvass: SodaCan_Pipsi {
     scope = 2;
     displayName = "#STR_SodaCan_RasputinKvass";
     descriptionShort = "#STR_SodaCan_RasputinKvass_Description";
     hiddenSelectionsTextures[] = {
        "RevivalPlus\DrinksPlus\data\can_rasputinkvass_co.paa"
     };
  };
  class RPL_SodaCan_BardakKvass: SodaCan_Pipsi {
     scope = 2;
     displayName = "#STR_SodaCan_BardakKvass";
     descriptionShort = "#STR_SodaCan_BardakKvass_Description";
     hiddenSelectionsTextures[] = {
        "RevivalPlus\DrinksPlus\data\can_bardakkvass_co.paa"
     };
  };
  class RPL_SodaCan_KozlovBeer: SodaCan_Pipsi {
     scope = 2;
     displayName = "#STR_SodaCan_KozlovBeer";
     descriptionShort = "#STR_SodaCan_KozlovBeer_D";
     hiddenSelectionsTextures[] = {
        "RevivalPlus\DrinksPlus\data\can_kozlovbeer_co.paa"
     };
  };
};
