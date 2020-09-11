class CfgPatches
{
	class languagecore_melee
	{
		requiredAddons[] = {
      "DZ_Data",
			"DZ_Weapons",
      "DZ_Weapons_Melee",
      "DZ_Weapons_Melee_Blade"
    };
	};
};

class CfgVehicles
{
  class Inventory_Base;
	class Pitchfork;
  class RPL_Pitchfork: Pitchfork
  {
    displayName = "$STR_RPL_Pitchfork";
		descriptionShort = "$STR_RPL_Pitchfork_D";
  };
	class Cleaver;
  class RPL_Cleaver: Cleaver
	{
    displayName = "$STR_RPL_Cleaver";
		descriptionShort = "$STR_RPL_Cleaver_D";
  };
	class Sickle;
	class RPL_Sickle: Sickle
	{
    displayName = "$STR_RPL_Sickle";
		descriptionShort = "$STR_RPL_Sickle_D";
  };
	class MeatTenderizer;
	class RPL_MeatTenderizer: MeatTenderizer
	{
    displayName = "$STR_RPL_MeatTenderizer";
		descriptionShort = "$STR_RPL_MeatTenderizer_D";
  };
};
