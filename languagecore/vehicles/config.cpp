class CfgPatches
{
	class languagecore_vehicles
	{
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Vehicles",
			"DZ_Vehicles_Wheeled"
		};
	};
};

class CfgVehicles
{
  class CarScript;
  class OffroadHatchback: CarScript
	{
		displayName = "$STR_RPL_Hatchback";
	};
  class Hatchback_02: CarScript
	{
		displayName = "$STR_RPL_Hatchback_02";
	};
  class CivilianSedan: CarScript
	{
		displayName = "$STR_RPL_CivSedan";
	};
  class Sedan_02: CarScript
	{
		displayName = "$STR_RPL_Sedan_02";
	};
  class Truck_01: CarScript
	{
		displayName = "$STR_RPL_Truck_01";
	};
  class TransitBus: CarScript
	{
		displayName = "$STR_RPL_TransitBus";
	};
};
