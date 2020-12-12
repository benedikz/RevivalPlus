class CfgPatches
{
	class RPL_Animals_CanisLupus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Animals",
			"DZ_Weapons_Melee",
			"DZ_Gear_Consumables"
		};
	};
};

class CfgVehicles
{
	class WolfPelt;
	class RPL_WolfPelt_Black: WolfPelt
	{
		scope = 2;
		displayName = "$STR_RPL_WolfPelt_Black";
		descriptionShort = "$STR_RPL_WolfPelt_Black_D";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {
			"RevivalPlus\animals\canis_lupus\data\canislupus_black_pelt_co.paa"
		};
	};

	class Animal_CanisLupus;
	class RPL_Animal_CanisLupus_Black: Animal_CanisLupus
	{
		scope = 0;
		hiddenSelectionsTextures[] = {
			"RevivalPlus\animals\canis_lupus\data\canislupus_black_co.paa",
			"RevivalPlus\animals\canis_lupus\data\fur_alpha_ca.paa"
		};
	};
	class RPL_Animal_LupusSanguinum: Animal_CanisLupus
	{
		scope = 2;
		displayName = "";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\animals\canis_lupus\data\lupus_sanguinum_co.paa",
			"RevivalPlus\animals\canis_lupus\data\fur_alpha_ca.paa"
		};
	};
	class RPL_Animal_LupusInfectius: Animal_CanisLupus
	{
		scope = 2;
		displayName = "";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\animals\canis_lupus\data\lupus_infectius_co.paa",
			"RevivalPlus\animals\canis_lupus\data\fur_alpha_ca.paa"
		};
	};
	class RPL_Animal_LupusToxicus: Animal_CanisLupus
	{
		scope = 2;
		displayName = "";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\animals\canis_lupus\data\lupus_toxicus_co.paa",
			"RevivalPlus\animals\canis_lupus\data\fur_toxicus_ca.paa"
		};
	};

};
