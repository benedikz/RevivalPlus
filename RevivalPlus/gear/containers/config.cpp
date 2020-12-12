class CfgPatches
{
	class RPL_Gear_Containers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear_Containers"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class RPL_ProtectorCase_Base: Container_Base
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_SmallProtectorCase0";
		descriptionShort = "$STR_CfgVehicles_SmallProtectorCase1";
		model = "\dz\gear\containers\Protector_Case.p3d";
		rotationFlags = 17;
		weight = 980;
		itemSize[] = {3,4};
		itemsCargoSize[] = {3,4};
		canBeDigged = 1;
		isMeleeWeapon = 1;
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 750;
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\Protector_Case.rvmat"}},{0.7,{"DZ\gear\containers\data\Protector_Case.rvmat"}},{0.5,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\Protector_Case_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage = 8.0;
					};
					class Blood
					{
						damage = 8.0;
					};
					class Shock
					{
						damage = 8.0;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "smallprotectorcase_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "smallprotectorcase_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class RPL_ProtectorCase_Biohazard: RPL_ProtectorCase_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\containers\data\loot_protectorcase_biohazard_co.paa"};
	};
	class RPL_ProtectorCase_Black: RPL_ProtectorCase_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\containers\data\loot_protectorcase_black_co.paa"};
	};
	class RPL_ProtectorCase_Gun: RPL_ProtectorCase_Base
	{
		scope = 2;
		attachments[] = {"Pistol","pistolOptics","pistolFlashlight","pistolMuzzle"};
		itemsCargoSize[] = {0,0};
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\containers\data\loot_protectorcase_gun_co.paa"};
	};
	class RPL_ProtectorCase_Kitty: RPL_ProtectorCase_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\containers\data\loot_protectorcase_kitty_co.paa"};
	};
	class RPL_ProtectorCase_Red: RPL_ProtectorCase_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\containers\data\loot_protectorcase_red_co.paa"};
	};
	class RPL_ProtectorCase_UnitedNations: RPL_ProtectorCase_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\containers\data\loot_protectorcase_un_co.paa"};
	};
	class RPL_ProtectorCase_White: RPL_ProtectorCase_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\containers\data\loot_protectorcase_white_co.paa"};
	};
};
