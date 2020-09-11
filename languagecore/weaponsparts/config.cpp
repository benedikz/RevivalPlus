class CfgPatches
{
	class languagecore_weaponsparts
	{
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Weapons"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class AK_Bayonet: Inventory_Base
	{
		displayName = "$STR_RPL_AK_Bayonet";
		descriptionShort = "$STR_RPL_AK_Bayonet_D";
	};
	class M9A1_Bayonet: Inventory_Base
	{
		displayName = "$STR_RPL_M9A1_Bayonet";
		descriptionShort = "$STR_RPL_M9A1_Bayonet_D";
	};
	class Mosin_Bayonet: Inventory_Base
	{
		displayName = "$STR_RPL_Mosin_Bayonet";
		descriptionShort = "$STR_RPL_Mosin_Bayonet_D";
	};
	class SKS_Bayonet: Inventory_Base
	{
		displayName = "$STR_RPL_SKS_Bayonet";
		descriptionShort = "$STR_RPL_SKS_Bayonet_D";
	};
	class ItemSuppressor;
	class Mosin_Compensator: ItemSuppressor
	{
		displayName = "$STR_RPL_Mosin_Compensator";
		descriptionShort = "$STR_RPL_Mosin_Compensator_D";
	};
	class MP5_Compensator: ItemSuppressor
	{
		displayName = "$STR_RPL_MP5_Compensator";
		descriptionShort = "$STR_RPL_MP5_Compensator_D";
	};
	class M4_Suppressor: ItemSuppressor
	{
		displayName = "$STR_RPL_M4_Suppressor";
		descriptionShort = "$STR_RPL_M4_Suppressor_D";
	};
	class AK_Suppressor: ItemSuppressor
	{
		displayName = "$STR_RPL_AK_Suppressor";
		descriptionShort = "$STR_RPL_AK_Suppressor_D";
	};
	// DELETE
	class PistolSuppressor: ItemSuppressor
	{
		displayName = "$STR_RPL_PistolSuppressor";
		descriptionShort = "$STR_RPL_PistolSuppressor_D";
	};
	class ItemOptics;
	class M4_CarryHandleOptic: ItemOptics
	{
		displayName = "$STR_RPL_M4_CarryHandleOptic";
		descriptionShort = "$STR_RPL_M4_CarryHandleOptic_D";
	};
	class BUISOptic: ItemOptics
	{
		displayName = "$STR_RPL_BUISOptic";
		descriptionShort = "$STR_RPL_BUISOptic_D";
	};
	class M68Optic: ItemOptics
	{
		displayName = "$STR_RPL_M68Optic";
		descriptionShort = "$STR_RPL_M68Optic_D";
	};
	class M4_T3NRDSOptic: ItemOptics
	{
		displayName = "$STR_RPL_M4_T3NRDSOptic";
		descriptionShort = "$STR_RPL_M4_T3NRDSOptic_D";
	};
	class FNP45_MRDSOptic: ItemOptics
	{
		displayName = "$STR_RPL_FNP45_MRDSOptic";
		descriptionShort = "$STR_RPL_FNP45_MRDSOptic_D";
	};
	class ReflexOptic: ItemOptics
	{
		displayName = "$STR_RPL_ReflexOptic";
		descriptionShort = "$STR_RPL_ReflexOptic_D";
	};
	class ACOGOptic: ItemOptics
	{
		displayName = "$STR_RPL_ACOGOptic";
		descriptionShort = "$STR_RPL_ACOGOptic_D";
	};
	class PUScopeOptic: ItemOptics
	{
		displayName = "$STR_RPL_PUScopeOptic";
		descriptionShort = "$STR_RPL_PUScopeOptic_D";
	};
	class KashtanOptic: ItemOptics
	{
		displayName = "$STR_RPL_KashtanOptic";
		descriptionShort = "$STR_RPL_KashtanOptic_D";
	};
	// HIDE
	class LongrangeOptic: ItemOptics
	{
		displayName = "$STR_RPL_LongrangeOptic";
		descriptionShort = "$STR_RPL_LongrangeOptic_D";
	};
	class HuntingOptic: ItemOptics
	{
		displayName = "$STR_RPL_HuntingOptic";
		descriptionShort = "$STR_RPL_HuntingOptic_D";
	};
	class PistolOptic: ItemOptics
	{
		displayName = "$STR_RPL_PistolOptic";
		descriptionShort = "$STR_RPL_PistolOptic_D";
	};
	class PSO1Optic: ItemOptics
	{
		displayName = "$STR_RPL_PSO1Optic";
		descriptionShort = "$STR_RPL_PSO1Optic_D";
	};
	class PSO11Optic: ItemOptics
	{
		displayName = "$STR_RPL_PSO11Optic";
		descriptionShort = "$STR_RPL_PSO11Optic_D";
	};
	class KobraOptic: ItemOptics
	{
		displayName = "$STR_RPL_KobraOptic";
		descriptionShort = "$STR_RPL_KobraOptic_D";
	};
	class KazuarOptic: ItemOptics
	{
		displayName = "$STR_RPL_1PN51Optic";
		descriptionShort = "$STR_RPL_1PN51Optic_D";
	};
	class M4_OEBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_M4_OEBttstck";
		descriptionShort = "$STR_RPL_M4_OEBttstck_D";
	};
	class M4_MPBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_M4_MPBttstck";
		descriptionShort = "$STR_RPL_M4_MPBttstck_D";
	};
	class M4_CQBBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_M4_CQBBttstck";
		descriptionShort = "$STR_RPL_M4_CQBBttstck_D";
	};
	class AK_WoodBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_AK_WoodBttstck";
		descriptionShort = "$STR_RPL_AK_WoodBttstck_D";
	};
	class AK74_WoodBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_AK74_WoodBttstck";
		descriptionShort = "$STR_RPL_AK74_WoodBttstck_D";
	};
	class AK_FoldingBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_AK_FoldingBttstck";
		descriptionShort = "$STR_RPL_AK_FoldingBttstck_D";
	};
	class AK_PlasticBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_AK_PlasticBttstck";
		descriptionShort = "$STR_RPL_AK_PlasticBttstck_D";
	};
	class AKS74U_Bttstck: Inventory_Base
	{
		displayName = "$STR_RPL_AKS74U_Bttstck";
		descriptionShort = "$STR_RPL_AKS74U_Bttstck_D";
	};
	class MP5k_StockBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_MP5K_StockBttstck";
		descriptionShort = "$STR_RPL_MP5K_StockBttstck_D";
	};
	class Fal_OeBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_FAL_OeBttstck";
		descriptionShort = "$STR_RPL_FAL_OeBttstck_D";
	};
	class Fal_FoldingBttstck: Inventory_Base
	{
		displayName = "$STR_RPL_FAL_FoldingBttstck";
		descriptionShort = "$STR_RPL_FAL_FoldingBttstck_D";
	};
	class Saiga_Bttstck: Inventory_Base
	{
		displayName = "$STR_RPL_Saiga_Bttstck";
		descriptionShort = "$STR_RPL_Saiga_Bttstck_D";
	};
	class M4_PlasticHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_M4_PlasticHndgrd";
		descriptionShort = "$STR_RPL_M4_PlasticHndgrd_D";
	};
	class M4_RISHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_M4_RISHndgrd";
		descriptionShort = "$STR_RPL_M4_RISHndgrd_D";
	};
	class M4_MPHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_M4_MPHndgrd";
		descriptionShort = "$STR_RPL_M4_MPHndgrd_D";
	};
	class AK_WoodHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_AK_WoodHndgrd";
		descriptionShort = "$STR_RPL_AK_WoodHndgrd_D";
	};
	class AK74_Hndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_AK74_Hndgrd";
		descriptionShort = "$STR_RPL_AK74_Hndgrd_D";
	};
	class AK_RailHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_AK_RailHndgrd";
		descriptionShort = "$STR_RPL_AK_RailHndgrd_D";
	};
	class AK_PlasticHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_AK_PlasticHndgrd";
		descriptionShort = "$STR_RPL_AK_PlasticHndgrd_D";
	};
	class MP5_PlasticHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_MP5_PlasticHndgrd";
		descriptionShort = "$STR_RPL_MP5_PlasticHndgrd_D";
	};
	class MP5_RailHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_MP5_RailHndgrd";
		descriptionShort = "$STR_RPL_MP5_RailHndgrd_D";
	};
	class M249_Hndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_M249_Hndgrd";
		descriptionShort = "$STR_RPL_M249_Hndgrd_D";
	};
	class M249_RisHndgrd: Inventory_Base
	{
		displayName = "$STR_RPL_M249_RisHndgrd";
		descriptionShort = "$STR_RPL_M249_RisHndgrd_D";
	};
	class AtlasBipod: Inventory_Base
	{
		displayName = "$STR_RPL_AtlasBipod";
		descriptionShort = "$STR_RPL_AtlasBipod_D";
	};
	class M249_Bipod: Inventory_Base
	{
		displayName = "$STR_RPL_M249_Bipod";
		descriptionShort = "$STR_RPL_M249_Bipod_D";
	};
};
