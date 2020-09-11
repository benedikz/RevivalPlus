class CfgPatches
{
	class languagecore_cultivation
	{
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear",
			"DZ_Gear_Cultivation",
      "DZ_Gear_Food"
		};
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class SeedBase;
  class Edible_Base;

  class CannabisSeeds: SeedBase
	{
    displayName = "$STR_RPL_CannabisSeeds";
		descriptionShort = "$STR_RPL_CannabisSeeds_D";
  };

  class CannabisSeedsPack: Inventory_Base
  {
    displayName = "$STR_RPL_CannabisSeedsPack";
		descriptionShort = "$STR_RPL_CannabisSeedsPack_D";
  };

  class Cannabis: Edible_Base
  {
    displayName = "$STR_RPL_Cannabis";
		descriptionShort = "$STR_RPL_Cannabis_D";
  };
};
