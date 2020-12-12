class CfgPatches
{
	class RPL_Gear_Food
	{
		units[] = {"RPL_EmptyCan","RPL_CannedPlumsCan","RPL_CannedApplesCan","RPL_CannedPearsCan","RPL_CannedMushroomsCan","RPL_EmptyCan_Opened","RPL_CannedPlumsCan_Opened","RPL_CannedApplesCan_Opened","RPL_CannedPearsCan_Opened","RPL_CannedMushroomsCan_Opened","RPL_Salt"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;

	/***********************************************/

	class RPL_AppleStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_AppleStack";
		descriptionShort = "$STR_RPL_AppleStack_D";
		model = "\dz\gear\food\apple.p3d";
		itemSize[] = {2, 1};
		varWetMax = 0.35;
		weight = 138;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 6.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\apple_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_PearStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_PearStack";
		descriptionShort = "$STR_RPL_PearStack_D";
		model = "\dz\gear\food\pear.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.35;
		weight = 166;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\pear_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_PlumStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_PlumStack";
		descriptionShort = "$STR_RPL_PlumStack_D";
		model = "\dz\gear\food\plum.p3d";
		itemSize[] = {2, 1};
		varWetMax = 0.35;
		weight = 65;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\plum_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_ZucchiniStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ZucchiniStack";
		descriptionShort = "$STR_RPL_ZucchiniStack_D";
		model = "\dz\gear\food\zucchini.p3d";
		itemSize[] = {2, 3};
		varWetMax = 0.35;
		weight = 102;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 2.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\zucchini_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_TomatoStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_TomatoStack";
		descriptionShort = "$STR_RPL_TomatoStack_D";
		model = "\dz\gear\food\tomato.p3d";
		itemSize[] = {2, 1};
		varWetMax = 0.35;
		weight = 123;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\tomato_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_PotatoStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_PotatoStack";
		descriptionShort = "$STR_RPL_PotatoStack_D";
		model = "\dz\gear\food\potato.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.35;
		weight = 120;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\potato_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_PepperStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_PepperStack";
		descriptionShort = "$STR_RPL_PepperStack_D";
		model = "\dz\gear\food\pepper_green.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.35;
		weight = 85;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\pepper_green_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	// class RPL_PumpkinStack {};
	class RPL_MeatStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_MeatStack";
		descriptionShort = "$STR_RPL_MeatStack_D";
		model = "\dz\gear\food\meat_steak.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.98;
		weight = 250;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 6.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_MushroomStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_MushroomStack";
		descriptionShort = "$STR_RPL_MushroomStack_D";
		model = "\dz\gear\food\mushroom_agaricus.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.98;
		weight = 120;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\mushroom_agaricus_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_HumanMeatStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_HumanMeatStack";
		descriptionShort = "$STR_RPL_HumanMeatStack_D";
		model = "\dz\gear\food\human_meat.p3d";
		itemSize[] = {2, 3};
		varWetMax = 0.8;
		weight = 250;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"",
			"",
			"",
			""
		};
	};
	class RPL_CarpFilletStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CarpFilletStack";
		descriptionShort = "$STR_RPL_CarpFilletStack_D";
		model = "\dz\gear\food\carp_fillet.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.98;
		weight = 190;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\carp_fillet_raw_co.paa"
		};
	};
	class RPL_LardStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_LardStack";
		descriptionShort = "$STR_RPL_LardStack_D";
		model = "\dz\gear\food\lard.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.1;
		weight = 280;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 2.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw", "cs_dried"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\lard_raw_co.paa",
			""
		};
	};
	class RPL_PumpkinStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_PumpkinStack";
		descriptionShort = "$STR_RPL_PumpkinStack_D";
		model = "\dz\gear\food\pumpkin_sliced.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.1;
		weight = 215;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw", "cs_dried", "cs_baked"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\pumpkin_sliced_raw_co.paa",
			"",
			""
		};
	};
	class RPL_SardineStack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_SardineStack";
		descriptionShort = "$STR_RPL_SardineStack_D";
		model = "\dz\gear\food\sardines_raw.p3d";
		itemSize[] = {2, 2};
		varWetMax = 0.35;
		weight = 280;
		canBeSplit = 1;
		varQuantityInit = 2.0;
		varQuantityMin = 0.0;
		varQuantityMax = 6.0;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[] = {"cs_raw", "cs_dried"};
		hiddenSelectionsTextures[] = {
			"dz\gear\food\data\sardines_raw_co.paa",
			""
		};
	};
	/***********************************************/

	class BakedBeansCan;
	class RPL_Can_Base: BakedBeansCan
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"",""};
	};
	class PeachesCan;
	class RPL_Can_FruitBase : PeachesCan
	{
		scope = 0;
	};

	class RPL_CannedPlumsCan: RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CannedPlums";
		descriptionShort = "$STR_RPL_CannedPlums_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\can_plums_co.paa","RevivalPlus\gear\food\data\can_plums_co.paa"};
	};
	class RPL_CannedApplesCan: RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CannedApples";
		descriptionShort = "$STR_RPL_CannedApples_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\can_apples_co.paa","RevivalPlus\gear\food\data\can_apples_co.paa"};
	};
	class RPL_CannedPearsCan: RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CannedPears";
		descriptionShort = "$STR_RPL_CannedPears_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\can_pears_co.paa","RevivalPlus\gear\food\data\can_pears_co.paa"};
	};
	class RPL_CannedMushroomsCan: RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CannedMushrooms";
		descriptionShort = "$STR_RPL_CannedMushrooms_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\can_mushrooms_co.paa","RevivalPlus\gear\food\data\can_mushrooms_co.paa"};
	};

	/***************** OPENED CANS ******************/

	class PeachesCan_Opened;
	class RPL_CanOpened_Base: PeachesCan_Opened
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		weight = "500";
		stackedUnit = "g";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"",""};
	};
	class Bottle_Base;
	class RPL_CanOpened_DrinkBase : Bottle_Base
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		itemSize[] = {2,2};
		weight = "500";
		stackedUnit = "ml";
		model = "dz\gear\food\food_can_open.p3d";
		hiddenSelections[] = {"camoGround", "zbytek"};
		hiddenSelectionsTextures[] = {"", ""};
	};
	class RPL_EmptyCan_Opened: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_EmptyCan";
		descriptionShort = "$STR_RPL_EmptyCan_D";
		model = "\dz\gear\food\food_can_open.p3d";
		weight = "46";
		stackedUnit = "g";
		itemSize[] = {2,2};
		hiddenSelections[] = {"camoGround", "zbytek"};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\can_co.paa",
			"RevivalPlus\gear\food\data\can_co.paa"
		};
	};
	class RPL_CannedPlumsCan_Opened: RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CannedPlums";
		descriptionShort = "$STR_RPL_CannedPlums_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\can_plums_co.paa","RevivalPlus\gear\food\data\can_plums_co.paa"};
	};
	class RPL_CannedApplesCan_Opened: RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CannedApples";
		descriptionShort = "$STR_RPL_CannedApples_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\can_apples_co.paa","RevivalPlus\gear\food\data\can_apples_co.paa"};
	};
	class RPL_CannedPearsCan_Opened: RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CannedPears";
		descriptionShort = "$STR_RPL_CannedPears_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\can_pears_co.paa","RevivalPlus\gear\food\data\can_pears_co.paa"};
	};
	class RPL_CannedMushroomsCan_Opened: RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_CannedMushrooms";
		descriptionShort = "$STR_RPL_CannedMushrooms_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\can_mushrooms_co.paa","RevivalPlus\gear\food\data\can_mushrooms_co.paa"};
	};

	class RPL_EmptyCan : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_EmptyCan";
		descriptionShort = "$STR_RPL_EmptyCan_D";
		model = "\dz\gear\food\food_can.p3d";
		weight = "46";
		stackedUnit = "g";
		itemSize[] = {2,2};
		hiddenSelections[] = {"camoGround", "zbytek"};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\can_co.paa",
			"RevivalPlus\gear\food\data\can_co.paa"
		};
	};
	class RPL_ImprovisedCan : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan";
		descriptionShort = "$STR_RPL_ImprovisedCan_D";
		model = "\dz\gear\food\food_can.p3d";
		weight = "56";
		stackedUnit = "g";
		itemSize[] = {2,2};
		hiddenSelections[] = {"camoGround", "zbytek"};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_co.paa"
		};
	};

	/***************** IMPROVISED CANS **********************/

	class RPL_ImprovisedCan_Apples : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Apples";
		descriptionShort = "$STR_RPL_ImprovisedCan_Apples_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_apples_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_apples_co.paa"
		};
	};
	class RPL_ImprovisedCan_Pears : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Pears";
		descriptionShort = "$STR_RPL_ImprovisedCan_Pears_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_pears_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_pears_co.paa"
		};
	};
	class RPL_ImprovisedCan_Plums : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Plums";
		descriptionShort = "$STR_RPL_ImprovisedCan_Plums_D";
		weight = 820;
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_plums_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_plums_co.paa"
		};
	};
	class RPL_ImprovisedCan_Zucchinis : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Zucchinis";
		descriptionShort = "$STR_RPL_ImprovisedCan_Zucchinis_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_zucchinis_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_zucchinis_co.paa"
		};
	};
	class RPL_ImprovisedCan_Tomatoes : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Tomatoes";
		descriptionShort = "$STR_RPL_ImprovisedCan_Tomatoes_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_tomatoes_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_tomatoes_co.paa"
		};
	};
	class RPL_ImprovisedCan_Potatoes : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Potatoes";
		descriptionShort = "$STR_RPL_ImprovisedCan_Potatoes_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_potatoes_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_potatoes_co.paa"
		};
	};
	class RPL_ImprovisedCan_Peppers : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Peppers";
		descriptionShort = "$STR_RPL_ImprovisedCan_Peppers_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_peppers_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_peppers_co.paa"
		};
	};
	class RPL_ImprovisedCan_Meat : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Meat";
		descriptionShort = "$STR_RPL_ImprovisedCan_Meat_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_meat_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_meat_co.paa"
		};
	};
	class RPL_ImprovisedCan_Mushrooms : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Mushrooms";
		descriptionShort = "$STR_RPL_ImprovisedCan_Mushrooms_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_mushrooms_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_mushrooms_co.paa"
		};
	};
	class RPL_ImprovisedCan_HumanMeat : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_HumanMeat";
		descriptionShort = "$STR_RPL_ImprovisedCan_HumanMeat_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_humanmeat_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_humanmeat_co.paa"
		};
	};
	class RPL_ImprovisedCan_Liquor : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Liquor";
		descriptionShort = "$STR_RPL_ImprovisedCan_Liquor_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_liquor_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_liquor_co.paa"
		};
	};
	class RPL_ImprovisedCan_Shit : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Shit";
		descriptionShort = "$STR_RPL_ImprovisedCan_Shit_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_shit_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_shit_co.paa"
		};
	};
	class RPL_ImprovisedCan_Lard : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Lard";
		descriptionShort = "$STR_RPL_ImprovisedCan_Lard_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_lard_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_lard_co.paa"
		};
	};
	class RPL_ImprovisedCan_Pumpkin : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Pumpkin";
		descriptionShort = "$STR_RPL_ImprovisedCan_Pumpkin_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_pumpkin_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_pumpkin_co.paa"
		};
	};
	class RPL_ImprovisedCan_Sardines : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Sardines";
		descriptionShort = "$STR_RPL_ImprovisedCan_Sardines_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_sardines_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_sardines_co.paa"
		};
	};
	class RPL_ImprovisedCan_Carp : RPL_Can_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Carp";
		descriptionShort = "$STR_RPL_ImprovisedCan_Carp_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_carp_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_carp_co.paa"
		};
	};

	/*************** OPEN IMPROVISED CANS *******************/

	class RPL_ImprovisedCan_Apples_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Apples";
		descriptionShort = "$STR_RPL_ImprovisedCan_Apples_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_apples_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_apples_co.paa"
		};
	};
	class RPL_ImprovisedCan_Pears_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Pears";
		descriptionShort = "$STR_RPL_ImprovisedCan_Pears_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_pears_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_pears_co.paa"
		};
	};
	class RPL_ImprovisedCan_Plums_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Plums";
		descriptionShort = "$STR_RPL_ImprovisedCan_Plums_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_plums_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_plums_co.paa"
		};
	};
	class RPL_ImprovisedCan_Zucchinis_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Zucchinis";
		descriptionShort = "$STR_RPL_ImprovisedCan_Zucchinis_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_zucchinis_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_zucchinis_co.paa"
		};
	};
	class RPL_ImprovisedCan_Tomatoes_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Tomatoes";
		descriptionShort = "$STR_RPL_ImprovisedCan_Tomatoes_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_tomatoes_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_tomatoes_co.paa"
		};
	};
	class RPL_ImprovisedCan_Potatoes_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Potatoes";
		descriptionShort = "$STR_RPL_ImprovisedCan_Potatoes_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_potatoes_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_potatoes_co.paa"
		};
	};
	class RPL_ImprovisedCan_Peppers_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Peppers";
		descriptionShort = "$STR_RPL_ImprovisedCan_Peppers_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_peppers_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_peppers_co.paa"
		};
	};
	class RPL_ImprovisedCan_Meat_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Meat";
		descriptionShort = "$STR_RPL_ImprovisedCan_Meat_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_meat_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_meat_co.paa"
		};
	};
	class RPL_ImprovisedCan_Mushrooms_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Mushrooms";
		descriptionShort = "$STR_RPL_ImprovisedCan_Mushrooms_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_mushrooms_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_mushrooms_co.paa"
		};
	};
	class RPL_ImprovisedCan_HumanMeat_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_HumanMeat";
		descriptionShort = "$STR_RPL_ImprovisedCan_HumanMeat_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_humanmeat_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_humanmeat_co.paa"
		};
	};
	class RPL_ImprovisedCan_Liquor_Opened : RPL_CanOpened_DrinkBase
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Liquor";
		descriptionShort = "$STR_RPL_ImprovisedCan_Liquor_D";
		itemSize[] = {2,2};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_liquor_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_liquor_co.paa"
		};
	};
	class RPL_ImprovisedCan_Shit_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Shit";
		descriptionShort = "$STR_RPL_ImprovisedCan_Shit_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_shit_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_shit_co.paa"
		};
	};
	class RPL_ImprovisedCan_Lard_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Lard";
		descriptionShort = "$STR_RPL_ImprovisedCan_Lard_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_lard_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_lard_co.paa"
		};
	};
	class RPL_ImprovisedCan_Pumpkin_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Pumpkin";
		descriptionShort = "$STR_RPL_ImprovisedCan_Pumpkin_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_pumpkin_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_pumpkin_co.paa"
		};
	};
	class RPL_ImprovisedCan_Sardines_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Sardines";
		descriptionShort = "$STR_RPL_ImprovisedCan_Sardines_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_sardines_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_sardines_co.paa"
		};
	};
	class RPL_ImprovisedCan_Carp_Opened : RPL_CanOpened_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedCan_Carp";
		descriptionShort = "$STR_RPL_ImprovisedCan_Carp_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\food\data\improvisedcan_carp_co.paa",
			"RevivalPlus\gear\food\data\improvisedcan_carp_co.paa"
		};
	};

	class PowderedMilk;
	class RPL_Sugar : PowderedMilk
	{
		scope = 2;
		displayName = "$STR_RPL_Sugar";
		descriptionShort = "$STR_RPL_Sugar_D";
		model = "\dz\gear\cultivation\tomato_seeds_pack.p3d";
		weight = "180";
		stackedUnit = "g";
		itemSize[] = {1, 1};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\pack_sugar_co.paa"};
		hiddenSelectionsMaterials[] = {"RevivalPlus\gear\food\data\pack_sugar.rvmat", "RevivalPlus\gear\food\data\pack_sugar_damage.rvmat", "RevivalPlus\gear\food\data\pack_sugar_destruct.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {
						{1.0,{"RevivalPlus\gear\food\data\pack_sugar.rvmat"}},
						{0.7,{"RevivalPlus\gear\food\data\pack_sugar.rvmat"}},
						{0.5,{"RevivalPlus\gear\food\data\pack_sugar_damage.rvmat"}},
						{0.3,{"RevivalPlus\gear\food\data\pack_sugar_damage.rvmat"}},
						{0.0,{"RevivalPlus\gear\food\data\pack_sugar_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class Rice;
	class RPL_Salt: Rice
	{
		scope = 2;
		displayName = "$STR_RPL_SaltBag";
		weight = "1000";
		stackedUnit = "g";
		descriptionShort = "$STR_RPL_SaltBag_D";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\bag_salt_co.paa"};
	};
	class RPL_Flour_MirovcovaVolba: Rice
	{
		scope = 2;
		displayName = "$STR_RPL_FlourBag_Mirovec";
		descriptionShort = "$STR_RPL_FlourBag_Mirovec_D";
		weight = "1000";
		stackedUnit = "g";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\bag_flour_mirovolba_co.paa"};
	};

	class BoxCerealCrunchin;
	class RPL_BoxCerealCrunchin_Light: BoxCerealCrunchin
	{
		weight = "500";
		stackedUnit = "g";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\cerealbox_light_co.paa","RevivalPlus\gear\food\data\cerealbox_light_co.paa"};
	};
	class RPL_BoxCerealCrunchin_Heavy: BoxCerealCrunchin
	{
		weight = "500";
		stackedUnit = "g";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\food\data\cerealbox_heavy_co.paa","RevivalPlus\gear\food\data\cerealbox_heavy_co.paa"};
	};
};
