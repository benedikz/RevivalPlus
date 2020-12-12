class CfgPatches
{
	class RPL_Gear_Consumables
	{
		author = "Benedikz";
		name = "RevivalPlus - Gear Consumables Module";
		url = "https://benedikz.space/";
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
	class Paper: Inventory_Base
	{
		weight = 1;
		canBeSplit = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 20;
		varQuantityDestroyOnMin = 1;
		varStackMax = 20;
	};

	class RPL_PaperStrip : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_RPL_PaperStrip";
		descriptionShort = "$STR_RPL_PaperStrip_D";
		model = "\dz\gear\consumables\Paper.p3d";
		canBeSplit = 1;
		varQuantityInit = 2;
		varQuantityMin = 0;
		varQuantityMax = 6;
		varQuantityDestroyOnMin = 1;
		varStackMax = 6;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\loot_paperstrip_co.paa"
		};
	};

	class RPL_SprayCan_ColorBase : Inventory_Base
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		model = "\dz\gear\consumables\spraycan.p3d";
		itemSize[] = {2,3};
		weight = 1000;
		stackedUnit = "ml";
		quantityBar = 1;
		varQuantityInit = 100.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		hiddenSelections[] = {"zbytek", "camo"};
		hiddenSelectionsTextures[] = {
			"",
			""
		};
	};

	class RPL_SprayCan0_Black : RPL_SprayCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_RPL_SprayCan_Black";
		descriptionShort = "$STR_RPL_SprayCan_Black_D";
		color = "Black";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\spraycan0_black_co.paa",
			"RevivalPlus\gear\consumables\data\spraycan0_black_co.paa"
		};
	};
	class RPL_SprayCan0_Olive : RPL_SprayCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_RPL_SprayCan_Olive";
		descriptionShort = "$STR_RPL_SprayCan_Olive_D";
		color = "Olive";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\spraycan0_olive_co.paa",
			"RevivalPlus\gear\consumables\data\spraycan0_olive_co.paa"
		};
	};
	class RPL_SprayCan0_DarkTan : RPL_SprayCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_RPL_SprayCan_DarkTan";
		descriptionShort = "$STR_RPL_SprayCan_DarkTan_D";
		color = "DarkTan";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\spraycan0_darktan_co.paa",
			"RevivalPlus\gear\consumables\data\spraycan0_darktan_co.paa"
		};
	};
	class RPL_SprayCan0_White : RPL_SprayCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_RPL_SprayCan_White";
		descriptionShort = "$STR_RPL_SprayCan_White_D";
		color = "White";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\spraycan0_white_co.paa",
			"RevivalPlus\gear\consumables\data\spraycan0_white_co.paa"
		};
	};

	class RPL_SprayCan1_Black : RPL_SprayCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_RPL_SprayCan_Black";
		descriptionShort = "$STR_RPL_SprayCan_Black_D";
		color = "Black";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\spraycan1_black_co.paa",
			"RevivalPlus\gear\consumables\data\spraycan1_black_co.paa"
		};
	};
	class RPL_SprayCan1_Olive : RPL_SprayCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_RPL_SprayCan_Olive";
		descriptionShort = "$STR_RPL_SprayCan_Olive_D";
		color = "Olive";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\spraycan1_olive_co.paa",
			"RevivalPlus\gear\consumables\data\spraycan1_olive_co.paa"
		};
	};
	class RPL_SprayCan1_DarkTan : RPL_SprayCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_RPL_SprayCan_DarkTan";
		descriptionShort = "$STR_RPL_SprayCan_DarkTan_D";
		color = "DarkTan";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\spraycan1_darktan_co.paa",
			"RevivalPlus\gear\consumables\data\spraycan1_darktan_co.paa"
		};
	};
	class RPL_SprayCan1_White : RPL_SprayCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_RPL_SprayCan_White";
		descriptionShort = "$STR_RPL_SprayCan_White_D";
		color = "White";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\spraycan1_white_co.paa",
			"RevivalPlus\gear\consumables\data\spraycan1_white_co.paa"
		};
	};

	class RPL_Thinner_Base : Inventory_Base
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		model = "\dz\gear\food\food_can.p3d";
		itemSize[] = {2,2};
		weight = 2000;
		hiddenSelections[] = {"camoGround", "zbytek"};
		hiddenSelectionsTextures[] = {"", ""};
	};
	class RPL_Thinner_OpenBase : RPL_Thinner_Base
	{
		model = "\dz\gear\food\food_can_open.p3d";
		stackedUnit = "ml";
		quantityBar = 1;
		varQuantityInit = 200.0;
		varQuantityMin = 0.0;
		varQuantityMax = 200.0;
	};

	class RPL_Thinner_6000 : RPL_Thinner_Base
	{
		scope = 2;
		displayName = "$STR_RPL_Thinner";
		descriptionShort = "$STR_RPL_Thinner_6000_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\thinner_6000_co.paa",
			"RevivalPlus\gear\consumables\data\thinner_6000_co.paa"
		};
	};
	class RPL_Thinner_6001 : RPL_Thinner_Base
	{
		scope = 2;
		displayName = "$STR_RPL_Thinner";
		descriptionShort = "$STR_RPL_Thinner_6001_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\thinner_6001_co.paa",
			"RevivalPlus\gear\consumables\data\thinner_6001_co.paa"
		};
	};
	// Opened
	class RPL_Thinner_6000_Opened : RPL_Thinner_OpenBase
	{
		scope = 2;
		displayName = "$STR_RPL_Thinner";
		descriptionShort = "$STR_RPL_Thinner_6000_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\thinner_6000_co.paa",
			"RevivalPlus\gear\consumables\data\thinner_6000_co.paa"
		};
	};
	class RPL_Thinner_6001_Opened : RPL_Thinner_OpenBase
	{
		scope = 2;
		displayName = "$STR_RPL_Thinner";
		descriptionShort = "$STR_RPL_Thinner_6001_D";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\consumables\data\thinner_6001_co.paa",
			"RevivalPlus\gear\consumables\data\thinner_6001_co.paa"
		};
	};

	/* Festive Items */

	// Christmas
	class RPL_Snowball_Base : Inventory_Base
	{
		scope = 0;
		displayName = "#STR_RPL_Snowball";
		descriptionShort = "#STR_RPL_Snowball_D";
		itemSize[] = {1,1};
		rotationFlags = 3;
		weight = 100;
		itemBehaviour = 1;
		class AnimationSources
		{
			class Large
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.001;
			};
			class Medium
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.001;
			};
			class Small
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.001;
			};
		};
	};
	class RPL_SmallSnowball : RPL_Snowball_Base
	{
		scope = 2;
		model = "\dz\gear\consumables\SmallStone.p3d";
		hiddenSelections[] = {"zbytek", "camoGround", "camoMale"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\consumables\data\snowball_co.paa", "RevivalPlus\gear\consumables\data\snowball_co.paa", "RevivalPlus\gear\consumables\data\snowball_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\gear\consumables\data\stone.rvmat", "DZ\gear\consumables\data\stone.rvmat", "DZ\gear\consumables\data\stone.rvmat"};
		weight = 100;
		itemSize[] = {1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {
						{1.0,{"DZ\gear\consumables\data\stone.rvmat"}},
						{0.7,{"DZ\gear\consumables\data\stone.rvmat"}},
						{0.5,{"DZ\gear\consumables\data\stone.rvmat"}},
						{0.3,{"DZ\gear\consumables\data\stone.rvmat"}},
						{0.0,{"DZ\gear\consumables\data\stone.rvmat"}}
					};
				};
			};
		};
	};
	class RPL_Snowball : RPL_Snowball_Base
	{
		scope = 2;
		model = "\dz\gear\consumables\Stone.p3d";
		hiddenSelections[] = {"zbytek", "camoGround", "camoMale"};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\consumables\data\snowball_co.paa", "RevivalPlus\gear\consumables\data\snowball_co.paa", "RevivalPlus\gear\consumables\data\snowball_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\gear\consumables\data\stone.rvmat", "DZ\gear\consumables\data\stone.rvmat", "DZ\gear\consumables\data\stone.rvmat"};
		weight = 300;
		itemSize[] = {2,2};
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {
						{1.0,{"DZ\gear\consumables\data\stone.rvmat"}},
						{0.7,{"DZ\gear\consumables\data\stone.rvmat"}},
						{0.5,{"DZ\gear\consumables\data\stone.rvmat"}},
						{0.3,{"DZ\gear\consumables\data\stone.rvmat"}},
						{0.0,{"DZ\gear\consumables\data\stone.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
	};
};

class CfgAmmo
{
	class MeleeDamage;
	class RPL_MeleeSnowball : MeleeDamage
	{
		hitAnimation = 1;
		affectSkeleton = 0.7;
		class DamageApplied
		{
			type = "Melee";
			class Health
			{
				damage = 0;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 70;
			};
		};
	};
	class RPL_MeleeSmallSnowball : MeleeDamage
	{
		hitAnimation = 1;
		affectSkeleton = 0.7;
		class DamageApplied
		{
			type = "Melee";
			class Health
			{
				damage = 0;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 30;
			};
		};
	};
};
