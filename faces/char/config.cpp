class CfgPatches
{
	class DZ_Characters
	{
		units[] = {"SurvivorM_Mikhail","SurvivorM_MikhailOld","SurvivorM_Josef","SurvivorM_Vlk"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class SurvivorM_Rolf;
	class SurvivorM_Mikhail: SurvivorM_Rolf
	{
		scope = 2;
		emptyHead = "MaleMikhailHead";
		emptyBody = "MaleRolfTorso";
		emptyLegs = "MaleRolfLegs";
		emptyFeet = "MaleRolfFeet";
		emptyGloves = "MaleRolfHands";
		faceType = "MaleMikhailHead";
		class BloodyHands
		{
			mat_normal = "faces\data\m_mikhail\hhl_m_mikhail_body_shaved.rvmat";
			mat_blood = "faces\data\m_mikhail\hhl_m_mikhail_body_bloodyhands.rvmat";
		};
		class Lifespan
		{
			class Beard
			{
				mat[] = {"faces\data\m_mikhail\hhl_m_mikhail_body_shaved_co.paa","faces\data\m_mikhail\hhl_m_mikhail_body_shaved.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved_co.paa","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded_co.paa","faces\data\m_mikhail\hhl_m_mikhail_body_bearded.rvmat","faces\data\m_mikhail\hhl_m_mikhail_beard_ca.paa","faces\data\m_mikhail\hhl_m_mikhail_beard.rvmat"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_mikhail\hhl_m_mikhail_body_shaved.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_shaved_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_shaved_injury2.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved_injury2.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded_injury2.rvmat"};
		};
		voiceType = 1;
	};
	class SurvivorM_MikhailOld: SurvivorM_Rolf
	{
		scope = 2;
		emptyHead = "MaleMikhailOldHead";
		emptyBody = "MaleRolfTorso";
		emptyLegs = "MaleRolfLegs";
		emptyFeet = "MaleRolfFeet";
		emptyGloves = "MaleRolfHands";
		faceType = "MaleMikhailOldHead";
		class BloodyHands
		{
			mat_normal = "faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved.rvmat";
			mat_blood = "faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bloodyhands.rvmat";
		};
		class Lifespan
		{
			class Beard
			{
				mat[] = {"faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved_co.paa","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved_co.paa","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded_co.paa","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_beard_ca.paa","faces\data\m_mikhail_old\hhl_m_mikhail_old_beard.rvmat"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved_injury2.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved_injury2.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded_injury2.rvmat"};
		};
		voiceType = 1;
	};
	class SurvivorM_Peter;
	class SurvivorM_Josef: SurvivorM_Peter
	{
		scope = 2;
		emptyHead = "MaleJosefHead";
		emptyBody = "MalePeterTorso";
		emptyLegs = "MalePeterLegs";
		emptyFeet = "MalePeterFeet";
		emptyGloves = "MalePeterHands";
		faceType = "MaleJosefHead";
		class BloodyHands
		{
			mat_normal = "faces\data\m_josef\hhl_m_josef_body_shaved.rvmat";
			mat_blood = "faces\data\m_josef\hhl_m_josef_body_bloodyhands.rvmat";
		};
		class Lifespan
		{
			class Beard
			{
				mat[] = {"faces\data\m_josef\hhl_m_josef_body_shaved_co.paa","faces\data\m_josef\hhl_m_josef_body_shaved.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved_co.paa","faces\data\m_josef\hhl_m_josef_body_unshaved.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded_co.paa","faces\data\m_josef\hhl_m_josef_body_bearded.rvmat","faces\data\m_josef\hhl_m_josef_beard_ca.paa","faces\data\m_josef\hhl_m_josef_beard.rvmat"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_josef\hhl_m_josef_body_shaved.rvmat","faces\data\m_josef\hhl_m_josef_body_shaved_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_shaved_injury2.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved_injury2.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded_injury2.rvmat"};
		};
		voiceType = 1;
	};
	class SurvivorM_Mirek;
	class SurvivorM_Vlk: SurvivorM_Mirek
	{
		scope = 2;
		emptyHead = "MaleVlkHead";
		emptyBody = "MaleAdamTorso";
		emptyLegs = "MaleAdamLegs";
		emptyFeet = "MaleAdamFeet";
		emptyGloves = "MaleAdamHands";
		faceType = "MaleVlkHead";
		class BloodyHands
		{
			mat_normal = "faces\data\m_vlk\hhl_m_vlk_body_shaved.rvmat";
			mat_blood = "faces\data\m_vlk\hhl_m_vlk_body_bloodyhands.rvmat";
		};
		class Lifespan
		{
			class Beard
			{
				mat[] = {"faces\data\m_vlk\hhl_m_vlk_body_shaved_co.paa","faces\data\m_vlk\hhl_m_vlk_body_shaved.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved_co.paa","faces\data\m_vlk\hhl_m_vlk_body_unshaved.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded_co.paa","faces\data\m_vlk\hhl_m_vlk_body_bearded.rvmat","faces\data\m_vlk\hhl_m_vlk_beard_ca.paa","faces\data\m_vlk\hhl_m_vlk_beard.rvmat"};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_vlk\hhl_m_vlk_body_shaved.rvmat","faces\data\m_vlk\hhl_m_vlk_body_shaved_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_shaved_injury2.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved_injury2.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded_injury2.rvmat"};
		};
		voiceType = 1;
	};
	class SurvivorM_Cyril;
	class SurvivorM_Viktor: SurvivorM_Cyril
	{
		scope = 2;
		emptyHead = "MaleViktorHead";
		emptyBody = "MaleCyrilTorso";
		emptyLegs = "MaleCyrilLegs";
		emptyFeet = "MaleCyrilFeet";
		emptyGloves = "MaleCyrilHands";
		faceType = "MaleViktorHead";
		class BloodyHands
		{
			mat_normal = "faces\data\m_viktor\hhl_m_viktor_body_shaved.rvmat";
			mat_blood = "faces\data\m_viktor\hhl_m_viktor_body_bloodyhands.rvmat";
		};
		class Lifespan
		{
			class Beard
			{
				mat[] = {
					"faces\data\m_viktor\hhl_m_viktor_body_shaved_co.paa",
					"faces\data\m_viktor\hhl_m_viktor_body_shaved.rvmat",
					"faces\data\m_viktor\hhl_m_viktor_body_unshaved_co.paa",
					"faces\data\m_viktor\hhl_m_viktor_body_unshaved.rvmat",
					"faces\data\m_viktor\hhl_m_viktor_body_bearded_co.paa",
					"faces\data\m_viktor\hhl_m_viktor_body_bearded.rvmat",
					"faces\data\m_viktor\hhl_m_viktor_beard_ca.paa",
					"faces\data\m_viktor\hhl_m_viktor_beard.rvmat"
				};
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {
				"faces\data\m_viktor\hhl_m_viktor_body_shaved.rvmat",
				"faces\data\m_viktor\hhl_m_viktor_body_shaved_injury.rvmat",
				"faces\data\m_viktor\hhl_m_viktor_body_shaved_injury2.rvmat",
				"faces\data\m_viktor\hhl_m_viktor_body_unshaved.rvmat",
				"faces\data\m_viktor\hhl_m_viktor_body_unshaved_injury.rvmat",
				"faces\data\m_viktor\hhl_m_viktor_body_unshaved_injury2.rvmat",
				"faces\data\m_viktor\hhl_m_viktor_body_bearded.rvmat",
				"faces\data\m_viktor\hhl_m_viktor_body_bearded_injury.rvmat",
				"faces\data\m_viktor\hhl_m_viktor_body_bearded_injury2.rvmat"
			};
		};
		voiceType = 1;
	};
};
