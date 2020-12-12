class CfgPatches
{
	class RPL_Animals
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Animals"
		};
	};
};

class CfgVehicles
{
	class Animal_SusDomesticus;
  class RPL_Animal_SusAureus: Animal_SusDomesticus
  {
    scope = 2;
    displayName = "Zlaté prase";
    descriptionShort = "Nikdo neví, jestli jest Božím nadělením, nebo jestli jej někdo namaloval zlatou barvou, ale smrdí pořád stejně.";
    hiddenSelections[] =
    {
      "body_injury"
    };
    hiddenSelectionsTextures[] =
    {
      "RevivalPlus\animals\sus_aureus\data\sus_aureus_co.paa"
    };
	};
};
