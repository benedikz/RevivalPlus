class CfgPatches
{
	class DZ_Characters_Heads
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
};
class cfgVehicles
{
	class MaleRolfHead;
	class MaleMikhailHead: MaleRolfHead
	{
		model = "\dz\characters\heads\m_Rolf.p3d";
		hiddenSelectionsTextures[] = {"","faces\data\m_mikhail\hhl_m_mikhail_hair_ca.paa"};
		hiddenSelectionsMaterials[] = {"","faces\data\m_mikhail\hhl_m_mikhail_hair.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_mikhail\hhl_m_mikhail_body_shaved.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_shaved_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_shaved_injury2.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved_injury2.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded_injury2.rvmat"};
		};
	};
	class MaleMikhailOldHead: MaleRolfHead
	{
		model = "\dz\characters\heads\m_Rolf.p3d";
		hiddenSelectionsTextures[] = {"","faces\data\m_mikhail_old\hhl_m_mikhail_old_hair_ca.paa"};
		hiddenSelectionsMaterials[] = {"","faces\data\m_mikhail_old\hhl_m_mikhail_old_hair.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved_injury2.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved_injury2.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded_injury2.rvmat"};
		};
	};
	class MalePeterHead;
	class MaleJosefHead: MalePeterHead
	{
		model = "\dz\characters\heads\m_Peter.p3d";
		hiddenSelectionsTextures[] = {"","faces\data\m_josef\hhl_m_josef_hair_ca.paa"};
		hiddenSelectionsMaterials[] = {"","faces\data\m_josef\hhl_m_josef_hair.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_josef\hhl_m_josef_body_shaved.rvmat","faces\data\m_josef\hhl_m_josef_body_shaved_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_shaved_injury2.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved_injury2.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded_injury2.rvmat"};
		};
	};
	class MaleVlkHead: MaleRolfHead
	{
		model = "\dz\characters\heads\m_Rolf.p3d";
		hiddenSelectionsTextures[] = {"","faces\data\m_vlk\hhl_m_vlk_hair_ca.paa"};
		hiddenSelectionsMaterials[] = {"","faces\data\m_vlk\hhl_m_vlk_hair.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_vlk\hhl_m_vlk_body_shaved.rvmat","faces\data\m_vlk\hhl_m_vlk_body_shaved_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_shaved_injury2.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved_injury2.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded_injury2.rvmat"};
		};
	};
};
class CfgHeads
{
	class MaleRolfHead;
	class MaleMikhailHead: MaleRolfHead
	{
		model = "\dz\characters\heads\m_Rolf.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_mikhail\hhl_m_mikhail_body_shaved.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_shaved_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_shaved_injury2.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_unshaved_injury2.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded_injury.rvmat","faces\data\m_mikhail\hhl_m_mikhail_body_bearded_injury2.rvmat"};
		};
	};
	class MaleMikhailOldHead: MaleRolfHead
	{
		model = "\dz\characters\heads\m_Rolf.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_shaved_injury2.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_unshaved_injury2.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded_injury.rvmat","faces\data\m_mikhail_old\hhl_m_mikhail_old_body_bearded_injury2.rvmat"};
		};
	};
	class MalePeterHead;
	class MaleJosefHead: MalePeterHead
	{
		model = "\dz\characters\heads\m_Peter.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_josef\hhl_m_josef_body_shaved.rvmat","faces\data\m_josef\hhl_m_josef_body_shaved_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_shaved_injury2.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_unshaved_injury2.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded_injury.rvmat","faces\data\m_josef\hhl_m_josef_body_bearded_injury2.rvmat"};
		};
	};
	class MaleAdamHead;
	class MaleVlkHead: MaleAdamHead
	{
		model = "\dz\characters\heads\m_Adam.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"faces\data\m_vlk\hhl_m_vlk_body_shaved.rvmat","faces\data\m_vlk\hhl_m_vlk_body_shaved_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_shaved_injury2.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_unshaved_injury2.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded_injury.rvmat","faces\data\m_vlk\hhl_m_vlk_body_bearded_injury2.rvmat"};
		};
	};
};
