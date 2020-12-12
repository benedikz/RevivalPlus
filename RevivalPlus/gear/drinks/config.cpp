class CfgPatches
{
	class RPL_Gear_Drinks
	{
		units[] = {"RPL_SodaCan_Kola","RPL_SodaCan_Panzer","RPL_SodaCan_Rasputin","RPL_SodaCan_Bardak","RPL_SodaCan_Kozlov","RPL_SodaCan_Zagoria","RPL_SodaCan_Zagoria_Klasik","RPL_SodaCanUsed_Kola","RPL_SodaCanUsed_Panzer","RPL_SodaCanUsed_Rasputin","RPL_SodaCanUsed_Bardak","RPL_SodaCanUsed_Kozlov","RPL_SodaCanUsed_Zagoria","RPL_SodaCanUsed_Zagoria_Klasik"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Bottle_Base;
	class SodaCan_Pipsi;

	class RPL_SodaCan_Kola: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "#STR_SodaCan_Kola";
		descriptionShort = "#STR_SodaCan_Kola_D";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_kola_co.paa"};
	};
	class RPL_SodaCan_Panzer: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "#STR_SodaCan_Panzer";
		descriptionShort = "#STR_SodaCan_Panzer_D";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_panzer_co.paa"};
	};
	class RPL_SodaCan_Rasputin: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "#STR_SodaCan_Rasputin";
		descriptionShort = "#STR_SodaCan_Rasputin_D";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_rasputin_co.paa"};
	};
	class RPL_SodaCan_Bardak: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "#STR_SodaCan_Bardak";
		descriptionShort = "#STR_SodaCan_Bardak_D";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_bardak_co.paa"};
	};
	class RPL_SodaCan_Kozlov: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "#STR_SodaCan_Kozlov";
		descriptionShort = "#STR_SodaCan_Kozlov_D";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_kozlov_co.paa"};
	};
	class RPL_SodaCan_Zagoria: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "#STR_SodaCan_Zagoria";
		descriptionShort = "#STR_SodaCan_Zagoria_D";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_zagoria_co.paa"};
	};
	class RPL_SodaCan_Zagoria_Klasik: SodaCan_Pipsi
	{
		scope = 2;
		displayName = "#STR_SodaCan_Zagoria2";
		descriptionShort = "#STR_SodaCan_Zagoria2_D";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_zagoria2_co.paa"};
	};
	class RPL_SodaCanUsed_ColorBase: Edible_Base
	{
		model = "\dz\gear\drinks\SodaCan_Used.p3d";
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 10;
		stackedUnit = "";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.7,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.5,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 0;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class RPL_SodaCanUsed_Kola: RPL_SodaCanUsed_ColorBase
	{
		scope = 2;
		displayName = "#STR_SodaCan_Kola";
		descriptionShort = "#STR_SodaCan_Kola_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_kola_co.paa"};
	};
	class RPL_SodaCanUsed_Panzer: RPL_SodaCanUsed_ColorBase
	{
		scope = 2;
		displayName = "#STR_SodaCan_Panzer";
		descriptionShort = "#STR_SodaCan_Panzer_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_panzer_co.paa"};
	};
	class RPL_SodaCanUsed_Rasputin: RPL_SodaCanUsed_ColorBase
	{
		scope = 2;
		displayName = "#STR_SodaCan_Rasputin";
		descriptionShort = "#STR_SodaCan_Rasputin_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_rasputin_co.paa"};
	};
	class RPL_SodaCanUsed_Bardak: RPL_SodaCanUsed_ColorBase
	{
		scope = 2;
		displayName = "#STR_SodaCan_Bardak";
		descriptionShort = "#STR_SodaCan_Bardak_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_bardak_co.paa"};
	};
	class RPL_SodaCanUsed_Kozlov: RPL_SodaCanUsed_ColorBase
	{
		scope = 2;
		displayName = "#STR_SodaCan_Kozlov";
		descriptionShort = "#STR_SodaCan_Kozlov_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_kozlov_co.paa"};
	};
	class RPL_SodaCanUsed_Zagoria: RPL_SodaCanUsed_ColorBase
	{
		scope = 2;
		displayName = "#STR_SodaCan_Zagoria";
		descriptionShort = "#STR_SodaCan_Zagoria_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_zagoria_co.paa"};
	};
	class RPL_SodaCanUsed_Zagoria_Klasik: RPL_SodaCanUsed_ColorBase
	{
		scope = 2;
		displayName = "#STR_SodaCan_Zagoria2";
		descriptionShort = "#STR_SodaCan_Zagoria2_D";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\can_zagoria2_co.paa"};
	};

	class Canteen;
	class RPL_Canteen_Black: Canteen
	{
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\canteen_black_co.paa"};
	};
	class RPL_Canteen_Olive: Canteen
	{
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\canteen_olive_co.paa"};
	};
	class WaterBottle;
	class RPL_WaterBottle_Milk: WaterBottle
	{
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\waterbottle_milk_ca.paa"};
	};

	class DisinfectantAlcohol;
	class Vodka;
	class RPL_Vodka_Novigradskaya : DisinfectantAlcohol
	{
		scope = 2;
		displayName = "$STR_RPL_Vodka_Novigradskaya";
		descriptionShort = "$STR_RPL_Vodka_Novigradskaya_D";
		model = "\dz\gear\medical\alfa.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\novigradskaya_ca.paa"};
		isMeleeWeapon = 1;
		weight = 200;
		itemSize[] = {1,2};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		varQuantityDestroyOnMin = 1;
		varLiquidTypeInit = 2048;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = -10;
			water = 1;
			nutritionalIndex = 55;
			toxicity = 0;
			digestibility = 2;
			agents = 16;
		};
	};
	class RPL_Zelena_Soborovska : DisinfectantAlcohol
	{
		scope = 2;
		displayName = "$STR_RPL_Zelena_Soborovska";
		descriptionShort = "$STR_RPL_Zelena_Soborovska_D";
		model = "\dz\gear\medical\alfa.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\soborovska_zelena_ca.paa"};
		isMeleeWeapon = 1;
		weight = 200;
		itemSize[] = {1,2};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		varQuantityDestroyOnMin = 1;
		varLiquidTypeInit = 2048;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = -10;
			water = 1;
			nutritionalIndex = 55;
			toxicity = 0;
			digestibility = 2;
			agents = 16;
		};
	};

	class RPL_EmptyBottleAlcohol : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_EmptyBottleAlcohol";
		descriptionShort = "$STR_RPL_EmptyBottleAlcohol_D";
		model = "\dz\gear\medical\alfa.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\bottle_empty_ca.paa"};
		weight = 50;
		itemSize[] = {1,2};
	};
	class RPL_ImprovisedBottleAlcohol : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedBottleAlcohol";
		descriptionShort = "$STR_RPL_ImprovisedBottleAlcohol_D";
		model = "\dz\gear\medical\alfa.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\bottle_sticker_ca.paa"};
		weight = 50;
		itemSize[] = {1,2};
	};

	class RPL_ImprovisedAlcohol_Spirit : Vodka
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedBottleAlcohol_Spirit";
		descriptionShort = "$STR_RPL_ImprovisedBottleAlcohol_Spirit_D";
		model = "\dz\gear\medical\alfa.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\improvisedbottle_slivovice_ca.paa"};
		weight = 50;
		itemSize[] = {1,2};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		varQuantityDestroyOnMin = 1;
		varLiquidTypeInit = 2048;
	};
	class RPL_ImprovisedAlcohol_Vodka : Vodka
	{
		scope = 2;
		displayName = "$STR_RPL_ImprovisedBottleAlcohol_Vodka";
		descriptionShort = "$STR_RPL_ImprovisedBottleAlcohol_Vodka_D";
		model = "\dz\gear\medical\alfa.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\drinks\data\improvisedbottle_vodka_ca.paa"};
		weight = 50;
		itemSize[] = {1,2};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		varQuantityDestroyOnMin = 1;
		varLiquidTypeInit = 2048;
	};
};
