class CfgPatches
{
	class RPL_Gear_Cooking
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Bottle_Base;
	class PetrolLighter;
	class RPL_PetrolLighter_Base: PetrolLighter
	{
		scope = 0;
		hiddenSelections[] = {"zbytek"};
	};
	class RPL_PetrolLighter_Green: RPL_PetrolLighter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\cooking\data\petrol_lighter_green_ca.paa"};
	};
	class RPL_PetrolLighter_Purple: RPL_PetrolLighter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\cooking\data\petrol_lighter_purple_ca.paa"};
	};
	class RPL_PetrolLighter_Red: RPL_PetrolLighter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\cooking\data\petrol_lighter_red_ca.paa"};
	};
	class RPL_PetrolLighter_Yellow: RPL_PetrolLighter_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\cooking\data\petrol_lighter_yellow_ca.paa"};
	};
};
