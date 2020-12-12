class CfgPatches
{
	class RPL_Gear_Radio
	{
		units[] = {"RPL_Megaphone_Blue","RPL_Megaphone_Yellow","RPL_Megaphone_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Radio"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Transmitter_Base;
	class Megaphone;
	class RPL_Megaphone_Base: Megaphone
	{
		scope = 0;
		hiddenSelections[] = {"zbytek"};
	};
	class RPL_Megaphone_Blue: RPL_Megaphone_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\radio\data\megaphone_blue_co.paa"};
	};
	class RPL_Megaphone_Yellow: RPL_Megaphone_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\radio\data\megaphone_yellow_co.paa"};
	};
	class RPL_Megaphone_Black: RPL_Megaphone_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\radio\data\megaphone_black_co.paa"};
	};
};
