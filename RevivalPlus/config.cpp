class CfgPatches
{
	class RevivalPlus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class RevivalPlus
	{
		dir = "RevivalPlus";
		name = "RevivalPlus";
		credits = "benedi.kz";
		author = "benedi.kz";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"RevivalPlus/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"RevivalPlus/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"RevivalPlus/scripts/5_Mission"};
			};
		};
	};
};

class CfgSoundSets
{
	class RPL_Soundset_MainMenuOST
	{
		soundShaders[] = {"RPL_SoundShader_MainMenuOST"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};
class CfgSoundShaders
{
	class RPL_SoundShader_MainMenuOST
	{
		samples[] = {{"RevivalPlus\_Credits\tracks\track_mainmenu_so",1}};
		volume = 0.3;
	};
};
