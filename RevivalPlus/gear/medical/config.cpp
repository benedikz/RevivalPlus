class CfgPatches
{
	class RPL_Gear_Medical
	{
		units[] = {

    };
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
	class Switchable_Base;
	class Edible_Base;
	class Bottle_Base;

  class CigarettePack_ColorBase;
  class RPL_CigarettePack_LuckyShite: CigarettePack_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CigarettePack_Partyzanka0";
		hiddenSelectionsTextures[] = {
      "DZ\gear\medical\Data\Pack_of_cigs_lucky_CO.paa",
      "DZ\gear\medical\Data\Pack_of_cigs_lucky_CO.paa"
    };
	};
	class TetracyclineAntibiotics;
  class RPL_DexamphetamineTablets: TetracyclineAntibiotics {
    scope = 2;
    displayName = "Dexamphetamine";
    descriptionShort = "...";
    model = "\dz\gear\medical\dexamphetamine.p3d";
    hiddenSelections[] = {
      "zbytek"
    };
    hiddenSelectionsTextures[] = {
      "\dz\gear\medical\data\dexamphetamine_co.paa"
    };
    rotationFlags = 17;
		canBeSplit = 1;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		absorbency = 0.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\dexamphetamine.rvmat"}},{0.7,{"DZ\gear\medical\data\dexamphetamine.rvmat"}},{0.5,{"DZ\gear\medical\data\dexamphetamine_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\dexamphetamine_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\dexamphetamine_destruct.rvmat"}}};
				};
			};
		};
    class Medicine
		{
			prevention = 1;
			treatment = 1;
			diseaseExit = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet = "Tablets_open_SoundSet";
					id = 201;
				};
				class Tablets_catch
				{
					soundSet = "Tablets_catch_SoundSet";
					id = 202;
				};
				class Tablets_close
				{
					soundSet = "Tablets_close_SoundSet";
					id = 203;
				};
				class pickup
				{
					soundSet = "purificationtablets_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "purificationtablets_drop_SoundSet";
					id = 898;
				};
			};
		};
  };
};
