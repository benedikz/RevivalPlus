class CfgPatches
{
	class RPL_Gear_Documents
	{
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
	class Inventory_Base;
	class RPL_SmallDocument_ColorBase : Inventory_Base {};
	class RPL_GatherCard_ColorBase : Inventory_Base {};

	class RPL_Identity_Raskolnikov : RPL_SmallDocument_ColorBase
	{
		scope = 0;
		displayName = "#STR_RPL_PersonalDocument";
		descriptionShort = "#STR_RPL_PersonalDocument_D";
		model = "\dz\gear\consumables\Paper.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\documents\data\idcard_raskolnikov_co.paa"
		};
	};
	class RPL_DiplomatCard_Raskolnikov : RPL_SmallDocument_ColorBase
	{
		scope = 0;
		displayName = "#STR_RPL_DiplomatCard";
		descriptionShort = "#STR_RPL_DiplomatCard_D";
		model = "\dz\gear\consumables\Paper.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\documents\data\diplomatcard_raskolnikov_co.paa"
		};
	};
	class RPL_ToxicEntryCard : RPL_SmallDocument_ColorBase
	{
		scope = 2;
		displayName = "#STR_RPL_ToxicEntryCard";
		descriptionShort = "#STR_RPL_ToxicEntryCard_D";
		model = "\dz\gear\consumables\Paper.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\documents\data\card_toxic_entry_co.paa"
		};
	};
};
