class CfgPatches
{
	class RPL_CassettePlus
	{
		units[] = {
			"RPL_CassettePlayer",
			"RPL_CassetteCase",
			"RPL_Cassette_Untitled",
			"RPL_Cassette_Atraksion",
			"RPL_Cassette_BrePetrunko",
			"RPL_Cassette_Birches",
			"RPL_Cassette_CantHelpFallingInLove",
			"RPL_Cassette_DavidAGolias",
			"RPL_Cassette_DeadCitiesMarch",
			"RPL_Cassette_GruppaKrovi",
			"RPL_Cassette_JailhouseRock",
			"RPL_Cassette_JozinZBazin",
			"RPL_Cassette_Kalinka",
			"RPL_Cassette_Katyusha",
			"RPL_Cassette_NasNeDogoniat",
			"RPL_Cassette_NaZare",
			"RPL_Cassette_SovietAnthem",
			"RPL_Cassette_Stuk",
			"RPL_Cassette_ThreeLittleBirds",
			"RPL_Cassette_ZakroiZaMnoiDveri",
			"RPL_Cassette_ZivotJeJenNahoda",
			"RPL_Cassette_99Luftballons",
			"RPL_Cassette_BohemianLikeYou",
			"RPL_Cassette_CrimsonAndClover",
			"RPL_Cassette_DaddyCool",
			"RPL_Cassette_ChaseTheDevil",
			"RPL_Cassette_Karavan",
			"RPL_Cassette_NikogoNeZhalko",
			"RPL_Cassette_NonJeNeRegretteRien",
			"RPL_Cassette_NoWomanNoCry",
			"RPL_Cassette_Povorot",
			"RPL_Cassette_Ruby",
			"RPL_Cassette_ThePassenger",
			"RPL_Cassette_Venus",
			"RPL_Cassette_MarcheFunebre",
			"RPL_Cassette_JoTresneZraly",
			"RPL_Cassette_Leto",
			"RPL_Cassette_Kukushka",
			"RPL_Cassette_BellaCiao",
			"RPL_Cassette_BlueChristmas",
			"RPL_Cassette_Korobelniki",
			"RPL_Cassette_MostWonderfulTimeOfTheYear",
			"RPL_Cassette_PhantomLord",
			"RPL_Cassette_PujdemSpoluDoBetlema",
			"RPL_Cassette_SmellsLikeTeenSpirit",
			"RPL_Cassette_StedrejVecerNastal",
			"RPL_Cassette_Tchaikovsky_March",
			"RPL_Cassette_Tchaikovsky_Overture",
			"RPL_Cassette_Tchaikovsky_TheChristmasTree",
			"RPL_Cassette_Tchaikovsky_WeSingToday",
			"RPL_Cassette_Utro",
			"RPL_Cassette_VPuti",
			"RPL_Radio"
		};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Radio"
		};
	};
};
class CfgMods
{
	class RPL_CassettePlus
	{
		dir = "CassettePlus";
		name = "RPL_CassettePlus";
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
				files[] = {"CassettePlus/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"CassettePlus/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"CassettePlus/scripts/5_Mission"};
			};
		};
	};
};
class CfgSlots
{
	class Slot_Cassette
	{
		name = "Cassette";
		displayName = "Cassette";
		ghostIcon = "";
	};
};
class CfgSoundShaders
{
	class RPL_Cassette_SoundShader_Base
	{
		samples[] = {};
		frequency = 1;
		range = 100;
		volume = 1;
	};
	class RPL_TurnOn_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\cassetteplayer_turn_on",1}};
	};
	class RPL_Atraksion_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_atraksion_mo",1}};
	};
	class RPL_Birches_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_birches_mo",1}};
	};
	class RPL_BrePetrunko_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_brepetrunko_mo",1}};
	};
	class RPL_CantHelpFallingInLove_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_canthelpfallinginlove_mo",1}};
	};
	class RPL_DavidAGolias_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_davidagolias_mo",1}};
	};
	class RPL_DeadCitiesMarch_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_deadcitiesmarch_mo",1}};
	};
	class RPL_GruppaKrovi_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_gruppakrovi_mo",1}};
	};
	class RPL_JailhouseRock_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_jailhouserock_mo",1}};
	};
	class RPL_JozinZBazin_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_jozinzbazin_mo",1}};
	};
	class RPL_Kalinka_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_kalinka_mo",1}};
	};
	class RPL_Katyusha_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_katyusha_mo",1}};
	};
	class RPL_NasNeDogoniat_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_nasnedogoniat_mo",1}};
	};
	class RPL_NaZare_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_nazare_mo",1}};
	};
	class RPL_SovietAnthem_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_sovietanthem_mo",1}};
	};
	class RPL_Stuk_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_stuk_mo",1}};
	};
	class RPL_ThreeLittleBirds_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_threelittlebirds_mo",1}};
	};
	class RPL_ZakroiZaMnoiDveri_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_zakroizamnoidveri_mo",1}};
	};
	class RPL_ZivotJeJenNahoda_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_zivotjejennahoda_mo",1}};
	};
	class RPL_99Luftballons_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_99luftballons_mo",1}};
	};
	class RPL_BohemianLikeYou_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_bohemianlikeyou_mo",1}};
	};
	class RPL_CrimsonAndClover_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_crimsonandclover_mo",1}};
	};
	class RPL_DaddyCool_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_daddycool_mo",1}};
	};
	class RPL_ChaseTheDevil_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_chasethedevil_mo",1}};
	};
	class RPL_Karavan_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_karavan_mo",1}};
	};
	class RPL_NikogoNeZhalko_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_nikogonezhalko_mo",1}};
	};
	class RPL_NonJeNeRegretteRien_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_nonjeneregretterien_mo",1}};
	};
	class RPL_NoWomanNoCry_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_nowomannocry_mo",1}};
	};
	class RPL_Povorot_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_povorot_mo",1}};
	};
	class RPL_Ruby_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_ruby_mo",1}};
	};
	class RPL_ThePassenger_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_thepassenger_mo",1}};
	};
	class RPL_Venus_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_venus_mo",1}};
	};
	class RPL_Leto_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_leto_mo",1}};
	};
	class RPL_Kukushka_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_kukushka_mo",1}};
	};
	class RPL_JoTresneZraly_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_jotresnezraly_mo",1}};
	};
	class RPL_MarcheFunebre_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_marchefunebre_mo",1}};
	};
	class RPL_BellaCiao_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_bellaciao_mo",1}};
	};
	class RPL_BlueChristmas_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_bluechristmas_mo",1}};
	};
	class RPL_Korobelniki_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_korobelniki_mo",1}};
	};
	class RPL_MostWonderfulTimeOfTheYear_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_mostwonderfultimeoftheyear_mo",1}};
	};
	class RPL_PhantomLord_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_phantomlord_mo",1}};
	};
	class RPL_PujdemSpoluDoBetlema_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_pujdemspoludobetlema_mo",1}};
	};
	class RPL_SmellsLikeTeenSpirit_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_smellsliketeenspirit_mo",1}};
	};
	class RPL_StedrejVecerNastal_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_stedrejvecernastal_mo",1}};
	};
	class RPL_Tchaikovsky_March_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_tchaikovsky_march_mo",1}};
	};
	class RPL_Tchaikovsky_Overture_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_tchaikovsky_overture_mo",1}};
	};
	class RPL_Tchaikovsky_TheChristmasTree_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_tchaikovsky_thechristmastree_mo",1}};
	};
	class RPL_Tchaikovsky_WeSingToday_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_tchaikovsky_wesingtoday_mo",1}};
	};
	class RPL_Utro_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_utro_mo",1}};
	};
	class RPL_VPuti_Shader: RPL_Cassette_SoundShader_Base
	{
		samples[] = {{"CassettePlus\tracks\track_vputi_mo",1}};
	};
};
class CfgSoundSets
{
	class RPL_SoundSet_TurnOn
	{
		soundShaders[] = {"RPL_TurnOn_Shader"};
	};
	class RPL_SoundSet_Atraksion
	{
		soundShaders[] = {"RPL_Atraksion_Shader"};
	};
	class RPL_SoundSet_Birches
	{
		soundShaders[] = {"RPL_Birches_Shader"};
	};
	class RPL_SoundSet_BrePetrunko
	{
		soundShaders[] = {"RPL_BrePetrunko_Shader"};
	};
	class RPL_SoundSet_CantHelpFallingInLove
	{
		soundShaders[] = {"RPL_CantHelpFallingInLove_Shader"};
	};
	class RPL_SoundSet_DavidAGolias
	{
		soundShaders[] = {"RPL_DavidAGolias_Shader"};
	};
	class RPL_SoundSet_DeadCitiesMarch
	{
		soundShaders[] = {"RPL_DeadCitiesMarch_Shader"};
	};
	class RPL_SoundSet_GruppaKrovi
	{
		soundShaders[] = {"RPL_GruppaKrovi_Shader"};
	};
	class RPL_SoundSet_JailhouseRock
	{
		soundShaders[] = {"RPL_JailhouseRock_Shader"};
	};
	class RPL_SoundSet_JozinZBazin
	{
		soundShaders[] = {"RPL_JozinZBazin_Shader"};
	};
	class RPL_SoundSet_Kalinka
	{
		soundShaders[] = {"RPL_Kalinka_Shader"};
	};
	class RPL_SoundSet_Katyusha
	{
		soundShaders[] = {"RPL_Katyusha_Shader"};
	};
	class RPL_SoundSet_NasNeDogoniat
	{
		soundShaders[] = {"RPL_NasNeDogoniat_Shader"};
	};
	class RPL_SoundSet_NaZare
	{
		soundShaders[] = {"RPL_NaZare_Shader"};
	};
	class RPL_SoundSet_SovietAnthem
	{
		soundShaders[] = {"RPL_SovietAnthem_Shader"};
	};
	class RPL_SoundSet_Stuk
	{
		soundShaders[] = {"RPL_Stuk_Shader"};
	};
	class RPL_SoundSet_ThreeLittleBirds
	{
		soundShaders[] = {"RPL_ThreeLittleBirds_Shader"};
	};
	class RPL_SoundSet_ZakroiZaMnoiDveri
	{
		soundShaders[] = {"RPL_ZakroiZaMnoiDveri_Shader"};
	};
	class RPL_SoundSet_ZivotJeJenNahoda
	{
		soundShaders[] = {"RPL_ZivotJeJenNahoda_Shader"};
	};
	class RPL_SoundSet_99Luftballons
	{
		soundShaders[] = {"RPL_99Luftballons_Shader"};
	};
	class RPL_SoundSet_BohemianLikeYou
	{
		soundShaders[] = {"RPL_BohemianLikeYou_Shader"};
	};
	class RPL_SoundSet_CrimsonAndClover
	{
		soundShaders[] = {"RPL_CrimsonAndClover_Shader"};
	};
	class RPL_SoundSet_DaddyCool
	{
		soundShaders[] = {"RPL_DaddyCool_Shader"};
	};
	class RPL_SoundSet_ChaseTheDevil
	{
		soundShaders[] = {"RPL_ChaseTheDevil_Shader"};
	};
	class RPL_SoundSet_Karavan
	{
		soundShaders[] = {"RPL_Karavan_Shader"};
	};
	class RPL_SoundSet_NikogoNeZhalko
	{
		soundShaders[] = {"RPL_NikogoNeZhalko_Shader"};
	};
	class RPL_SoundSet_NonJeNeRegretteRien
	{
		soundShaders[] = {"RPL_NonJeNeRegretteRien_Shader"};
	};
	class RPL_SoundSet_NoWomanNoCry
	{
		soundShaders[] = {"RPL_NoWomanNoCry_Shader"};
	};
	class RPL_SoundSet_Povorot
	{
		soundShaders[] = {"RPL_Povorot_Shader"};
	};
	class RPL_SoundSet_Ruby
	{
		soundShaders[] = {"RPL_Ruby_Shader"};
	};
	class RPL_SoundSet_ThePassenger
	{
		soundShaders[] = {"RPL_ThePassenger_Shader"};
	};
	class RPL_SoundSet_Venus
	{
		soundShaders[] = {"RPL_Venus_Shader"};
	};
	class RPL_SoundSet_Leto
	{
		soundShaders[] = {"RPL_Leto_Shader"};
	};
	class RPL_SoundSet_Kukushka
	{
		soundShaders[] = {"RPL_Kukushka_Shader"};
	};
	class RPL_SoundSet_JoTresneZraly
	{
		soundShaders[] = {"RPL_JoTresneZraly_Shader"};
	};
	class RPL_SoundSet_MarcheFunebre
	{
		soundShaders[] = {"RPL_MarcheFunebre_Shader"};
	};
	class RPL_SoundSet_BellaCiao
	{
		soundShaders[] = {"RPL_BellaCiao_Shader"};
	};
	class RPL_SoundSet_BlueChristmas
	{
		soundShaders[] = {"RPL_BlueChristmas_Shader"};
	};
	class RPL_SoundSet_Korobelniki
	{
		soundShaders[] = {"RPL_Korobelniki_Shader"};
	};
	class RPL_SoundSet_MostWonderfulTimeOfTheYear
	{
		soundShaders[] = {"RPL_MostWonderfulTimeOfTheYear_Shader"};
	};
	class RPL_SoundSet_PhantomLord
	{
		soundShaders[] = {"RPL_PhantomLord_Shader"};
	};
	class RPL_SoundSet_PujdemSpoluDoBetlema
	{
		soundShaders[] = {"RPL_PujdemSpoluDoBetlema_Shader"};
	};
	class RPL_SoundSet_SmellsLikeTeenSpirit
	{
		soundShaders[] = {"RPL_SmellsLikeTeenSpirit_Shader"};
	};
	class RPL_SoundSet_StedrejVecerNastal
	{
		soundShaders[] = {"RPL_StedrejVecerNastal_Shader"};
	};
	class RPL_SoundSet_Tchaikovsky_March
	{
		soundShaders[] = {"RPL_Tchaikovsky_March_Shader"};
	};
	class RPL_SoundSet_Tchaikovsky_Overture
	{
		soundShaders[] = {"RPL_Tchaikovsky_Overture_Shader"};
	};
	class RPL_SoundSet_Tchaikovsky_TheChristmasTree
	{
		soundShaders[] = {"RPL_Tchaikovsky_TheChristmasTree_Shader"};
	};
	class RPL_SoundSet_Tchaikovsky_WeSingToday
	{
		soundShaders[] = {"RPL_Tchaikovsky_WeSingToday_Shader"};
	};
	class RPL_SoundSet_Utro
	{
		soundShaders[] = {"RPL_Utro_Shader"};
	};
	class RPL_SoundSet_VPuti
	{
		soundShaders[] = {"RPL_VPuti_Shader"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class RPL_CassettePlayer_Base: Inventory_Base {};
	class RPL_CassettePlayer: RPL_CassettePlayer_Base
	{
		scope = 0;
	};
	class RPL_Radio_Base: Inventory_Base
	{
		scope = 0;
		displayName = "$STR_RPL_Radio";
		descriptionShort = "$STR_RPL_Radio_D";
		animClass = "Knife";
		attachments[] = {"BatteryD","Cassette"};
		fragility = 0.01;
		varWetMax = 0.35;
		repairableWithKits[] = {5,7};
		repairCosts[] = {50,55};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			autoSwitchOffWhenInCargo = 0;
			plugType = 1;
			energyUsagePerSecond = 0.0019999999;
			attachmentAction = 1;
			wetnessExposure = 0.12;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class RPL_Radio: RPL_Radio_Base
	{
		scope = 2;
		model = "\dz\gear\radio\unitra_wilga.p3d";
		weight = 1700;
		itemSize[] = {2,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},{0.7,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},{0.5,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},{0.3,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},{0,{"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"}}};
				};
			};
		};
	};
	class RPL_CassetteCase_Base: Container_Base
	{
		scope = 0;
		displayName = "$STR_RPL_CassetteCase";
		descriptionShort = "$STR_RPL_CassetteCase_D";
		model = "\dz\gear\tools\cleaning_kit_wood.p3d";
		animClass = "Knife";
		rotationFlags = 17;
		quantityBar = 0;
		weight = 580;
		itemSize[] = {2,3};
		itemsCargoSize[] = {8,2};
		fragility = 0.01;
		hiddenSelectionsMaterials[] = {"CassettePlus\data\cassette_case.rvmat","CassettePlus\data\cassette_case_damage.rvmat","CassettePlus\data\cassette_case_destruct.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"CassettePlus\data\cassette_case.rvmat"}},{0.7,{"CassettePlus\data\cassette_case.rvmat"}},{0.5,{"CassettePlus\data\cassette_case_damage.rvmat"}},{0.3,{"CassettePlus\data\cassette_case_damage.rvmat"}},{0,{"CassettePlus\data\cassette_case_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class RPL_CassetteCase: RPL_CassetteCase_Base
	{
		scope = 2;
		itemSize[] = {2,3};
		itemsCargoSize[] = {10,3};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"CassettePlus\data\cassette_case_co.paa"};
	};
	class RPL_Cassette_Base: Inventory_Base
	{
		displayName = "$STR_RPL_Cassette";
		descriptionShort = "$STR_RPL_Cassette_Music_D";
		model = "\dz\gear\tools\cassette.p3d";
		weight = 100;
		itemSize[] = {1,1};
		fragility = 0.01;
		varWetMax = 0.5;
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		inventorySlot[] = {"Cassette"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DZ\gear\tools\data\cassette_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\tools\data\cassette.rvmat"}},{0.7,{"DZ\gear\tools\data\cassette.rvmat"}},{0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\cassette_damage.rvmat"}},{0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class CfgCassette{};
	};
	class RPL_Cassette_Untitled: RPL_Cassette_Base
	{
		scope = 2;
		descriptionShort = "$STR_RPL_Cassette_Untitled_D";
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_blank_co.paa"};
		class CfgCassette
		{
			soundSet = "";
		};
	};
	class RPL_Cassette_Atraksion: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_atraksion_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Atraksion";
		};
	};
	class RPL_Cassette_BrePetrunko: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_bjornmaxwell_brepetrunko_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_BrePetrunko";
		};
	};
	class RPL_Cassette_Birches: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_birches_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Birches";
		};
	};
	class RPL_Cassette_CantHelpFallingInLove: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_canthelpfallinginlove_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_CantHelpFallingInLove";
		};
	};
	class RPL_Cassette_DavidAGolias: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_bjornmaxwell_davidagolias_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_DavidAGolias";
		};
	};
	class RPL_Cassette_DeadCitiesMarch: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_deadcitiesmarch_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_DeadCitiesMarch";
		};
	};
	class RPL_Cassette_GruppaKrovi: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_gruppakrovi_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_GruppaKrovi";
		};
	};
	class RPL_Cassette_JailhouseRock: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_jailhouserock_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_JailhouseRock";
		};
	};
	class RPL_Cassette_JozinZBazin: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_bjornmaxwell_jozinzbazin_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_JozinZBazin";
		};
	};
	class RPL_Cassette_Kalinka: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_kalinka_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Kalinka";
		};
	};
	class RPL_Cassette_Katyusha: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_katyusha_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Katyusha";
		};
	};
	class RPL_Cassette_NasNeDogoniat: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_nasnedogoniat_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_NasNeDogoniat";
		};
	};
	class RPL_Cassette_NaZare: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_nazare_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_NaZare";
		};
	};
	class RPL_Cassette_SovietAnthem: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_sovietanthem_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_SovietAnthem";
		};
	};
	class RPL_Cassette_Stuk: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_stuk_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Stuk";
		};
	};
	class RPL_Cassette_ThreeLittleBirds: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_threelittlebirds_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_ThreeLittleBirds";
		};
	};
	class RPL_Cassette_ZakroiZaMnoiDveri: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_zakroizamnoidveri_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_ZakroiZaMnoiDveri";
		};
	};
	class RPL_Cassette_ZivotJeJenNahoda: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_bjornmaxwell_zivotjejennahoda_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_ZivotJeJenNahoda";
		};
	};
	class RPL_Cassette_99Luftballons: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_99luftballons_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_99Luftballons";
		};
	};
	class RPL_Cassette_BohemianLikeYou: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_bohemianlikeyou_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_BohemianLikeYou";
		};
	};
	class RPL_Cassette_CrimsonAndClover: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_crimsonandclover_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_CrimsonAndClover";
		};
	};
	class RPL_Cassette_DaddyCool: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_daddycool_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_DaddyCool";
		};
	};
	class RPL_Cassette_ChaseTheDevil: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_chasethedevil_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_ChaseTheDevil";
		};
	};
	class RPL_Cassette_Karavan: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_karavan_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Karavan";
		};
	};
	class RPL_Cassette_NikogoNeZhalko: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_nikogonezhalko_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_NikogoNeZhalko";
		};
	};
	class RPL_Cassette_NonJeNeRegretteRien: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_nonjeneregretterien_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_NonJeNeRegretteRien";
		};
	};
	class RPL_Cassette_NoWomanNoCry: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_nowomannocry_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_NoWomanNoCry";
		};
	};
	class RPL_Cassette_Povorot: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_povorot_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Povorot";
		};
	};
	class RPL_Cassette_Ruby: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_ruby_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Ruby";
		};
	};
	class RPL_Cassette_ThePassenger: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_thepassenger_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_ThePassenger";
		};
	};
	class RPL_Cassette_Venus: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_venus_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Venus";
		};
	};
	class RPL_Cassette_MarcheFunebre: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_marchefunebre_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_MarcheFunebre";
		};
	};
	class RPL_Cassette_Leto: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_leto_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Leto";
		};
	};
	class RPL_Cassette_Kukushka: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_kukushka_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Kukushka";
		};
	};
	class RPL_Cassette_JoTresneZraly: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_jotresnezraly_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_JoTresneZraly";
		};
	};
	class RPL_Cassette_BellaCiao: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_bellaciao_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_BellaCiao";
		};
	};
	class RPL_Cassette_BlueChristmas: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_bluechristmas_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_BlueChristmas";
		};
	};
	class RPL_Cassette_Korobelniki: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_korobelniki_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Korobelniki";
		};
	};
	class RPL_Cassette_MostWonderfulTimeOfTheYear: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_mostwonderfultimeoftheyear_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_MostWonderfulTimeOfTheYear";
		};
	};
	class RPL_Cassette_PhantomLord: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_phantomlord_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_PhantomLord";
		};
	};
	class RPL_Cassette_PujdemSpoluDoBetlema: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_pujdemspoludobetlema_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_PujdemSpoluDoBetlema";
		};
	};
	class RPL_Cassette_SmellsLikeTeenSpirit: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_smellsliketeenspirit_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_SmellsLikeTeenSpirit";
		};
	};
	class RPL_Cassette_StedrejVecerNastal: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_stedrejvecernastal_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_StedrejVecerNastal";
		};
	};
	class RPL_Cassette_Tchaikovsky_March: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_tchaikovsky_march_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Tchaikovsky_March";
		};
	};
	class RPL_Cassette_Tchaikovsky_Overture: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_tchaikovsky_overture_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Tchaikovsky_Overture";
		};
	};
	class RPL_Cassette_Tchaikovsky_TheChristmasTree: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_tchaikovsky_thechristmastree_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Tchaikovsky_TheChristmasTree";
		};
	};
	class RPL_Cassette_Tchaikovsky_WeSingToday: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_tchaikovsky_wesingtoday_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Tchaikovsky_WeSingToday";
		};
	};
	class RPL_Cassette_Utro: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_utro_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_Utro";
		};
	};
	class RPL_Cassette_VPuti: RPL_Cassette_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CassettePlus\data\kazeta_vputi_co.paa"};
		class CfgCassette
		{
			soundSet = "RPL_SoundSet_VPuti";
		};
	};
};
