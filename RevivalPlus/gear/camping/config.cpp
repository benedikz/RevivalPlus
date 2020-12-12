class CfgPatches
{
	class RPL_Gear_Camping
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
	class Flag_Base;
	class RPL_Flag_Black: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_black_co.paa"};
	};
	class RPL_Flag_Camomille: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_camomille_co.paa"};
	};
	class RPL_Flag_CDF: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_cdf_co.paa"};
	};
	class RPL_Flag_Confederate: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_confederate_co.paa"};
	};
	class RPL_Flag_Chernarus_OB: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_chern2_co.paa"};
	};
	class RPL_Flag_Chernarus_BW: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_chern3_co.paa"};
	};
	class RPL_Flag_ChernarusPolice: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_chernaruspolice_co.paa"};
	};
	class RPL_Flag_Medic: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_medic_co.paa"};
	};
	class RPL_Flag_Patriots: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_patriots_co.paa"};
	};
	class RPL_Flag_PrisonService: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_prisonservice_co.paa"};
	};
	class RPL_Flag_Russia: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_russia_co.paa"};
	};
	class RPL_Flag_SovietUnion: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_sovietunion_co.paa"};
	};
	class RPL_Flag_TradeUnion: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_tradeunion_co.paa"};
	};
	class RPL_Flag_UnitedKingdom: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_uk_co.paa"};
	};
	class RPL_Flag_UnitedNations: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_unitednations_co.paa"};
	};
	class RPL_Flag_USA: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_usa_co.paa"};
	};
	class RPL_Flag_USMC: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_usmc_co.paa"};
	};
	class RPL_Flag_Kozlovka: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_kozlovka_co.paa"};
	};
	class RPL_Flag_EastGermany: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_eastgermany_co.paa"};
	};
	class RPL_Flag_Germany: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_germany_co.paa"};
	};
	class RPL_Flag_France: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_france_co.paa"};
	};
	class RPL_Flag_Bulgaria: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_bulgaria_co.paa"};
	};
	class RPL_Flag_Bratva: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_bratva_co.paa"};
	};
	class RPL_Flag_Serbia: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_serbia_co.paa"};
	};
	class RPL_Flag_BlackCross: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\camping\data\flag_blackcross_co.paa"};
	};

	class PowerGenerator;
	class RPL_PowerGenerator_PaintBase : PowerGenerator
	{
		scope = 0;
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {""};
	};
	class RPL_PowerGenerator_Black : RPL_PowerGenerator_PaintBase
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\camping\data\power_generator_black_co.paa"
		};
	};

	class WoodenCrate;
	class RPL_WoodenCrate_PaintBase : WoodenCrate
	{
		scope = 0;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {""};
	};
	class RPL_WoodenCrate_Black : RPL_WoodenCrate_PaintBase
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\camping\data\wooden_case_black_co.paa"
		};
	};
	class RPL_WoodenCrate_Olive : RPL_WoodenCrate_PaintBase
	{
		scope = 2;
		color = "Olive";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\camping\data\wooden_case_olive_co.paa"
		};
	};
	class RPL_WoodenCrate_White : RPL_WoodenCrate_PaintBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\gear\camping\data\wooden_case_white_co.paa"
		};
	};
};
