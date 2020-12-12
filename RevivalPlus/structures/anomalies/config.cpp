class CfgPatches
{
	class RPL_Structures_Anomalies
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgSoundShaders
{
	class RPL_Anomaly_SoundShader_Base
	{
		samples[] = {};
		frequency = 1;
		range = 300;
		volume = 5;
	};
	class RPL_AnomalyShader_Wendigo001: RPL_Anomaly_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\structures\anomalies\sounds\wendigo_001_mo", 1}};
	};
	class RPL_AnomalyShader_Wendigo002: RPL_Anomaly_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\structures\anomalies\sounds\wendigo_002_mo", 1}};
	};
	class RPL_AnomalyShader_Arctotherium: RPL_Anomaly_SoundShader_Base
	{
		samples[] = {{"RevivalPlus\structures\anomalies\sounds\arctotherium_mo", 1}};
	};
};

class CfgSoundSets
{
	class RPL_SoundSet_Anomaly_Wendigo001
	{
		soundShaders[] = {"RPL_AnomalyShader_Wendigo001"};
	};
	class RPL_SoundSet_Anomaly_Wendigo002
	{
		soundShaders[] = {"RPL_AnomalyShader_Wendigo002"};
	};
	class RPL_SoundSet_Anomaly_Arctotherium
	{
		soundShaders[] = {"RPL_AnomalyShader_Arctotherium"};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class SPL_Anomaly_Wendigo001: Inventory_Base
	{
		scope = 0;
		displayName = "";
		model = "\dz\gear\consumables\Stone.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {""};
		itemSize[]={20,20};
		weight = 1;
		rotationFlags = 16;
	};
	class SPL_Anomaly_Wendigo002: Inventory_Base
	{
		scope = 0;
		displayName = "";
		model = "\dz\gear\consumables\Stone.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {""};
		itemSize[]={20,20};
		weight = 1;
		rotationFlags = 16;
	};
	class SPL_Anomaly_Arctotherium : Inventory_Base
	{
		scope = 0;
		displayName = "";
		model = "\dz\gear\consumables\Stone.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {""};
		itemSize[]={20,20};
		weight = 1;
		rotationFlags = 16;
	};
};
