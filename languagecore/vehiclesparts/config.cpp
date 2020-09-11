class CfgPatches
{
	class languagecore_vehiclesparts
	{
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Vehicles",
			"DZ_Vehicles_Wheeled"
		};
	};
};

class CfgVehicles
{
	/*
	class CarWheel;
	class CarDoor;
	class CarScript;

	class HatchbackHood;
	class HatchbackHood: HatchbackHood
	{
		displayName="$STR_RPL_HatchbackHood";
		descriptionShort="";
	};
	*/

	/*
	class HatchbackWheel: CarWheel
	{
		displayName = "$STR_oldn_HatchbackWheel0";
		descriptionShort = "$STR_oldn_hatchbackwheel1";
	};
	class HatchbackWheel_Ruined: CarWheel
	{
		displayName = "$STR_oldn_HatchbackWheel0";
		descriptionShort = "$STR_oldn_hatchbackwheel1";
	};
	class HatchbackDoors_Driver: CarDoor
	{
		displayName = "$STR_oldn_HatchbackDoors_Driver0";
		descriptionShort = "$STR_oldn_HatchbackDoors_Driver1";
	};
	class HatchbackDoors_CoDriver: HatchbackDoors_Driver
	{
		displayName = "$STR_oldn_HatchbackDoors_CoDriver0";
		descriptionShort = "$STR_oldn_HatchbackDoors_CoDriver1";
	};
	class HatchbackHood: CarDoor
	{
		displayName = "$STR_oldn_HatchbackHood0";
		descriptionShort = "$STR_oldn_HatchbackHood1";
	};
	class HatchbackTrunk: CarDoor
	{
		displayName = "$STR_oldn_HatchbackTrunk0";
		descriptionShort = "$STR_oldn_HatchbackTrunk1";
	};
	class OffroadHatchback: CarScript
	{
		displayName = "$STR_oldn_OffroadHatchback0";
		descriptionShort = "$STR_oldn_OffroadHatchback1";
	};
	class CivSedanWheel: CarWheel
	{
		displayName = "$STR_oldn_CivSedanWheel0";
		descriptionShort = "$STR_oldn_CivSedanWheel1";
	};
	class CivSedanWheel_Ruined: CivSedanWheel
	{
		displayName = "$STR_oldn_CivSedanWheel0";
	};
	class CivSedanDoors_Driver: CarDoor
	{
		displayName = "$STR_oldn_CivSedanDoors_Driver0";
		descriptionShort = "$STR_oldn_CivSedanDoors_Driver1";
	};
	class CivSedanDoors_CoDriver: CivSedanDoors_Driver
	{
		displayName = "$STR_oldn_CivSedanDoors_CoDriver0";
		descriptionShort = "$STR_oldn_CivSedanDoors_CoDriver1";
	};
	class CivSedanDoors_BackLeft: CivSedanDoors_Driver
	{
		displayName = "$STR_oldn_CivSedanDoors_BackLeft0";
		descriptionShort = "$STR_oldn_CivSedanDoors_BackLeft1";
	};
	class CivSedanDoors_BackRight: CivSedanDoors_Driver
	{
		displayName = "$STR_oldn_CivSedanDoors_BackRight0";
		descriptionShort = "$STR_oldn_CivSedanDoors_BackRight1";
	};
	class CivSedanHood: CarDoor
	{
		displayName = "$STR_oldn_CivSedanHood0";
		descriptionShort = "$STR_oldn_CivSedanHood1";
	};
	class CivSedanTrunk: CarDoor
	{
		displayName = "$STR_oldn_CivSedanTrunk0";
		descriptionShort = "$STR_oldn_CivSedanTrunk1";
	};
	class CivilianSedan: CarScript
	{
		displayName = "$STR_oldn_CivilianSedan0";
		descriptionShort = "$STR_oldn_CivilianSedan1";
	};
	class Hatchback_02_Wheel: CarWheel
	{
		displayName = "$STR_oldn_CivHatchbackWheel0";
		descriptionShort = "$STR_oldn_CivHatchbackWheel1";
	};
	class Hatchback_02_Door_1_1: CarDoor
	{
		displayName = "$STR_oldn_CivHatchbackDoors_Driver0";
		descriptionShort = "$STR_oldn_CivHatchbackDoors_Driver1";
	};
	class Hatchback_02_Door_2_1: Hatchback_02_Door_1_1
	{
		displayName = "$STR_oldn_CivHatchbackDoors_CoDriver0";
		descriptionShort = "$STR_oldn_CivHatchbackDoors_CoDriver1";
	};
	class Hatchback_02_Door_1_2: Hatchback_02_Door_1_1
	{
		displayName = "$STR_oldn_CivHatchbackDoors_RearLeft0";
		descriptionShort = "$STR_oldn_CivHatchbackDoors_RearLeft1";
	};
	class Hatchback_02_Door_2_2: Hatchback_02_Door_1_2
	{
		displayName = "$STR_oldn_CivHatchbackDoors_RearRight0";
		descriptionShort = "$STR_oldn_CivHatchbackDoors_RearRight1";
	};
	class Hatchback_02_Hood: Hatchback_02_Door_1_1
	{
		displayName = "$STR_oldn_CivHatchbackDoors_Hood0";
		descriptionShort = "$STR_oldn_CivHatchbackDoors_Hood1";
	};
	class Hatchback_02_Trunk: Hatchback_02_Door_1_1
	{
		displayName = "$STR_oldn_CivHatchbackDoors_Trunk0";
		descriptionShort = "$STR_oldn_CivHatchbackDoors_Trunk1";
	};
	class Hatchback_02: CarScript
	{
		displayName = "$STR_oldn_CivHatchback0";
		descriptionShort = "$STR_oldn_CivHatchback1";
	};
	class Sedan_02_Wheel: CarWheel
	{
		displayName = "$STR_oldn_Sedan_02_Wheel0";
		descriptionShort = "$STR_oldn_Sedan_02_Wheel1";
	};
	class Sedan_02_Door_1_1: CarDoor
	{
		displayName = "$STR_oldn_Sedan_02_Door_1_10";
		descriptionShort = "$STR_oldn_Sedan_02_Door_1_11";
	};
	class Sedan_02_Door_2_1: Sedan_02_Door_1_1
	{
		displayName = "$STR_oldn_Sedan_02_Door_2_10";
		descriptionShort = "$STR_oldn_Sedan_02_Door_2_11";
	};
	class Sedan_02_Door_1_2: Sedan_02_Door_1_1
	{
		displayName = "$STR_oldn_Sedan_02_Door_1_20";
		descriptionShort = "$STR_oldn_Sedan_02_Door_1_21";
	};
	class Sedan_02_Door_2_2: Sedan_02_Door_1_1
	{
		displayName = "$STR_oldn_Sedan_02_Door_2_20";
		descriptionShort = "$STR_oldn_Sedan_02_Door_2_21";
	};
	class Sedan_02_Hood: CarDoor
	{
		displayName = "$STR_oldn_Sedan_02_Hood0";
		descriptionShort = "$STR_oldn_Sedan_02_Hood1";
	};
	class Sedan_02_Trunk: CarDoor
	{
		displayName = "$STR_oldn_Sedan_02_Trunk0";
		descriptionShort = "$STR_oldn_Sedan_02_Trunk1";
	};
	class Sedan_02: CarScript
	{
		displayName = "$STR_oldn_Sedan_020";
	};
	class TransitBusWheel: CarWheel
	{
		displayName = "$STR_oldn_TransitBusWheel0";
	};
	class TransitBusWheel_Ruined: CarWheel
	{
		displayName = "$STR_oldn_TransitBusWheel_Ruined0";
	};
	class TransitBusWheelDouble: TransitBusWheel
	{
		displayName = "$STR_oldn_TransitBusWheelDouble0";
	};
	class TransitBusWheelDouble_Ruined: TransitBusWheel_Ruined
	{
		displayName = "$STR_oldn_TransitBusWheelDouble_Ruined0";
	};
	class BusDoors_Left: Inventory_Base
	{
		displayName = "$STR_oldn_BusDoors_Left0";
	};
	class BusDoors_Right: BusDoors_Left
	{
		displayName = "$STR_oldn_BusDoors_Right0";
	};
	class BusHood: Inventory_Base
	{
		displayName = "$STR_oldn_BusHood0";
	};
	class TransitBus: CarScript
	{
		displayName = "$STR_oldn_TransitBus0";
	};
	class GlowPlug: Inventory_Base
	{
		displayName = "$STR_oldn_CfgVehicles_GlowPlug0";
		descriptionShort = "$STR_oldn_CfgVehicles_GlowPlug1";
	};
	*/
};
