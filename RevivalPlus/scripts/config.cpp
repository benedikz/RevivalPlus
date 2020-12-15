class CfgPatches
{
	class RPL_Scripts
	{
		author = "Benedikz";
		name = "RevivalPlus - Scripts Module";
		url = "https://benedikz.space";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Vehicles_Wheeled",
			"DZ_Sounds_Effects"
		};
	};
};

class CfgVehicles
{
	class Car;

	class CarScript : Car
	{
		exteriorHorn = "RPL_VehicleHorn_Exterior_SoundSet";
		interiorHorn = "RPL_VehicleHorn_Interior_SoundSet";
		class NoiseCarHorn
		{
			strength = 180;
			type = "shot";
		};
	};
	// Lada Niva
	class OffroadHatchback : CarScript
	{
		exteriorHorn = "RPL_VehicleHorn_Niva_Exterior_SoundSet";
		interiorHorn = "RPL_VehicleHorn_Niva_Interior_SoundSet";
	};
	// GAZ Volga
	class CivilianSedan : CarScript
	{
		exteriorHorn = "RPL_VehicleHorn_Volga_Exterior_SoundSet";
		interiorHorn = "RPL_VehicleHorn_Volga_Interior_SoundSet";
	};
	// Volkswagen Golf MKII
	class Hatchback_02 : CarScript
	{
		exteriorHorn = "RPL_VehicleHorn_Golf_Exterior_SoundSet";
		interiorHorn = "RPL_VehicleHorn_Golf_Interior_SoundSet";
	};
	// Škoda 120
	class Sedan_02 : CarScript
	{
		exteriorHorn = "RPL_VehicleHorn_Skoda_Exterior_SoundSet";
		interiorHorn = "RPL_VehicleHorn_Skoda_Interior_SoundSet";
	};
	// V3S
	class Truck_01_Base : CarScript
	{
		exteriorHorn = "RPL_VehicleHorn_V3S_Exterior_SoundSet";
		interiorHorn = "RPL_VehicleHorn_V3S_Interior_SoundSet";
	};
};

class CfgSoundShaders
{
	class RPL_VehicleHorn_SoundShader_Base
	{
		samples[] = {};
		frequency = 1;
		range = 180;
		volume = 1.0;
	};
	class RPL_VehicleHorn_Exterior_SoundShader_Base : RPL_VehicleHorn_SoundShader_Base {volume = 1.3;};
	class RPL_VehicleHorn_Interior_SoundShader_Base : RPL_VehicleHorn_SoundShader_Base {volume = 0.8;};
	class RPL_VehicleHorn_Exterior_SoundShader : RPL_VehicleHorn_Exterior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_default_ext_mo", 1}};
	};
	class RPL_VehicleHorn_Interior_SoundShader : RPL_VehicleHorn_Interior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_default_int_mo", 1}};
	};
	class RPL_VehicleHorn_Golf_Exterior_SoundShader : RPL_VehicleHorn_Exterior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_golf_ext_mo", 1}};
	};
	class RPL_VehicleHorn_Golf_Interior_SoundShader : RPL_VehicleHorn_Interior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_golf_int_mo", 1}};
	};
	class RPL_VehicleHorn_Niva_Exterior_SoundShader : RPL_VehicleHorn_Exterior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_niva_ext_mo", 1}};
	};
	class RPL_VehicleHorn_Niva_Interior_SoundShader : RPL_VehicleHorn_Interior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_niva_int_mo", 1}};
	};
	class RPL_VehicleHorn_Skoda_Exterior_SoundShader : RPL_VehicleHorn_Exterior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_skoda_ext_mo", 1}};
	};
	class RPL_VehicleHorn_Skoda_Interior_SoundShader : RPL_VehicleHorn_Interior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_skoda_int_mo", 1}};
	};
	class RPL_VehicleHorn_V3S_Exterior_SoundShader : RPL_VehicleHorn_Exterior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_v3s_ext_mo", 1}};
	};
	class RPL_VehicleHorn_V3S_Interior_SoundShader : RPL_VehicleHorn_Interior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_v3s_int_mo", 1}};
	};
	class RPL_VehicleHorn_Volga_Exterior_SoundShader : RPL_VehicleHorn_Exterior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_volga_ext_mo", 1}};
	};
	class RPL_VehicleHorn_Volga_Interior_SoundShader : RPL_VehicleHorn_Interior_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\vehicles\sounds\vehiclehorn_volga_int_mo", 1}};
	};
};

class CfgSoundSets
{
	class RPL_VehicleHorn_SoundSet_Base
	{
		distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
		loop = 0;
		doppler = 0;
		spatial = 1;
	};
	class RPL_VehicleHorn_Exterior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {};
	};
	class RPL_VehicleHorn_Interior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {};
	};
	// Vehicles Start
	class RPL_VehicleHorn_Golf_Exterior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_Golf_Exterior_SoundShader"};
	};
	class RPL_VehicleHorn_Golf_Interior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_Golf_Interior_SoundShader"};
	};
	class RPL_VehicleHorn_Niva_Exterior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_Niva_Exterior_SoundShader"};
	};
	class RPL_VehicleHorn_Niva_Interior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_Niva_Interior_SoundShader"};
	};
	class RPL_VehicleHorn_Skoda_Exterior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_Skoda_Exterior_SoundShader"};
	};
	class RPL_VehicleHorn_Skoda_Interior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_Skoda_Interior_SoundShader"};
	};
	class RPL_VehicleHorn_V3S_Exterior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_V3S_Exterior_SoundShader"};
	};
	class RPL_VehicleHorn_V3S_Interior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_V3S_Interior_SoundShader"};
	};
	class RPL_VehicleHorn_Volga_Exterior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_Volga_Exterior_SoundShader"};
	};
	class RPL_VehicleHorn_Volga_Interior_SoundSet : RPL_VehicleHorn_SoundSet_Base
	{
		soundShaders[] = {"RPL_VehicleHorn_Volga_Interior_SoundShader"};
	};
};
