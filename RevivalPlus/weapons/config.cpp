class CfgPatches
{
	class RPL_Weapons_Firearms
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
      "DZ_Data",
      "DZ_Weapons_Firearms"
    };
	};
};
/* Mode Classes */
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	/* BASE OVERRIDES (MIGHT BE UNCOMPATIBLE WITH OTHER MODS) */
	class Rifle_Base;
	class AK74_Base: Rifle_Base
	{
		magazines[] = {
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd",
			"RPL_Mag_AK74_30Rnd_Black",			// Colored variants from @RevivalPlus
			"RPL_Mag_AK74_30Rnd_Olive",
			"RPL_Mag_AK74_30Rnd_DarkTan",
			"RPL_Mag_AK74_30Rnd_White",
			"RPL_Mag_AK74_45Rnd_Black",
			"RPL_Mag_AK74_45Rnd_Olive",
			"RPL_Mag_AK74_45Rnd_DarkTan",
			"RPL_Mag_AK74_45Rnd_White"
		};
	};
	class AKM_Base: Rifle_Base
	{
		magazines[] = {
			"Mag_AKM_30Rnd",
			"Mag_AKM_Palm30Rnd",
			"Mag_AKM_Palm30Rnd_Black",
			"Mag_AKM_Palm30Rnd_Green",
			"Mag_AKM_Drum75Rnd",
			"Mag_AKM_Drum75Rnd_Green",
			"Mag_AKM_Drum75Rnd_Black",
			"Mag_AKM_Drum_TEST",
			"RPL_Mag_AKM_30Rnd_Black",			// Colored variants from @RevivalPlus
			"RPL_Mag_AKM_30Rnd_Olive",
			"RPL_Mag_AKM_30Rnd_DarkTan",
			"RPL_Mag_AKM_30Rnd_White",
			"RPL_Mag_AKM_Drum75Rnd_Black",
			"RPL_Mag_AKM_Drum75Rnd_Olive",
			"RPL_Mag_AKM_Drum75Rnd_DarkTan",
			"RPL_Mag_AKM_Drum75Rnd_White"
		};
	};
	class FAL_Base: Rifle_Base
	{
		magazines[] = {
			"Mag_FAL_20Rnd",
			"RPL_Mag_FAL_20Rnd_Black",			// Colored variants from @RevivalPlus
			"RPL_Mag_FAL_20Rnd_Olive",
			"RPL_Mag_FAL_20Rnd_DarkTan",
			"RPL_Mag_FAL_20Rnd_White"
		};
	};
	class AugSteyr_Base: Rifle_Base
	{
		magazines[] = {
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"RPL_Mag_STANAG_30Rnd_Black",			// Colored variants from @RevivalPlus
			"RPL_Mag_STANAG_30Rnd_Olive",
			"RPL_Mag_STANAG_30Rnd_DarkTan",
			"RPL_Mag_STANAG_30Rnd_White"
		};
	};
	class M4A1_Base: Rifle_Base
	{
		magazines[] = {
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"RPL_Mag_STANAG_30Rnd_Black",			// Colored variants from @RevivalPlus
			"RPL_Mag_STANAG_30Rnd_Olive",
			"RPL_Mag_STANAG_30Rnd_DarkTan",
			"RPL_Mag_STANAG_30Rnd_White"
		};
	};
	class M16A2_Base: Rifle_Base
	{
		magazines[] = {
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"RPL_Mag_STANAG_30Rnd_Black",			// Colored variants from @RevivalPlus
			"RPL_Mag_STANAG_30Rnd_Olive",
			"RPL_Mag_STANAG_30Rnd_DarkTan",
			"RPL_Mag_STANAG_30Rnd_White"
		};
	};

	/* Paint Classes */

  class AKS74U;
	class RPL_AKS74U_PaintBase : AKS74U
	{
		scope = 0;
	};
  class RPL_AKS74U_Black : RPL_AKS74U_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\AKS74U\data\aks74u_black_co.paa"};
		hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\AKS74U\data\aks74u_black.rvmat"};
  };
  class RPL_AKS74U_Olive : RPL_AKS74U_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\AKS74U\data\aks74u_olive_co.paa"};
		hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\AKS74U\data\aks74u_olive.rvmat"};
  };
  class RPL_AKS74U_DarkTan : RPL_AKS74U_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\AKS74U\data\aks74u_darktan_co.paa"};
		hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\AKS74U\data\aks74u_darktan.rvmat"};
  };
  class RPL_AKS74U_White : RPL_AKS74U_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\AKS74U\data\aks74u_white_co.paa"};
		hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\AKS74U\data\aks74u_white.rvmat"};
  };

	class VSS;
	class RPL_VSS_PaintBase : VSS
	{
		scope = 0;
		hiddenSelections[] = {"camo", "zbytek"};
		hiddenSelectionsTextures[] = {
			"",
			""
		};
	};
	class RPL_VSS_Black : RPL_VSS_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\VSS\data\vss_black_co.paa", "RevivalPlus\weapons\VSS\data\vss_black_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\VSS\data\vss_black.rvmat"};
  };
  class RPL_VSS_Olive : RPL_VSS_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\VSS\data\vss_olive_co.paa", "RevivalPlus\weapons\VSS\data\vss_olive_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\VSS\data\vss_olive.rvmat"};
  };
  class RPL_VSS_DarkTan : RPL_VSS_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\VSS\data\vss_darktan_co.paa", "RevivalPlus\weapons\VSS\data\vss_darktan_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\VSS\data\vss_darktan.rvmat"};
  };
  class RPL_VSS_White : RPL_VSS_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\VSS\data\vss_white_co.paa", "RevivalPlus\weapons\VSS\data\vss_white_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\VSS\data\vss_white.rvmat"};
  };

	class FAL;
	class RPL_FAL_PaintBase : FAL
	{
		scope = 0;
		hiddenSelections[] = {"camo", "zbytek"};
		hiddenSelectionsTextures[] = {
			"",
			""
		};
	};
	class RPL_FAL_Black : RPL_FAL_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\FAL\data\fal_black_co.paa", "RevivalPlus\weapons\FAL\data\fal_black_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\FAL\data\fal_black.rvmat"};
  };
  class RPL_FAL_Olive : RPL_FAL_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\FAL\data\fal_olive_co.paa", "RevivalPlus\weapons\FAL\data\fal_olive_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\FAL\data\fal_olive.rvmat"};
  };
  class RPL_FAL_DarkTan : RPL_FAL_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\FAL\data\fal_darktan_co.paa", "RevivalPlus\weapons\FAL\data\fal_darktan_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\FAL\data\fal_darktan.rvmat"};
  };
  class RPL_FAL_White : RPL_FAL_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\FAL\data\fal_white_co.paa", "RevivalPlus\weapons\FAL\data\fal_white_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\FAL\data\fal_white.rvmat"};
  };

	class SVD;
	class RPL_SVD_PaintBase : SVD
	{
		scope = 0;
		hiddenSelections[] = {"camo", "zbytek"};
		hiddenSelectionsTextures[] = {
			"",
			""
		};
	};
	class RPL_SVD_Black : RPL_SVD_PaintBase
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\SVD\data\svd_black_co.paa", "RevivalPlus\weapons\SVD\data\svd_black_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\SVD\data\svd_black.rvmat"};
	};
	class RPL_SVD_Olive : RPL_SVD_PaintBase
	{
		scope = 2;
		color = "Olive";
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\SVD\data\svd_olive_co.paa", "RevivalPlus\weapons\SVD\data\svd_olive_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\SVD\data\svd_olive.rvmat"};
	};
	class RPL_SVD_DarkTan : RPL_SVD_PaintBase
	{
		scope = 2;
		color = "DarkTan";
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\SVD\data\svd_darktan_co.paa", "RevivalPlus\weapons\SVD\data\svd_darktan_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\SVD\data\svd_darktan.rvmat"};
	};
	class RPL_SVD_White : RPL_SVD_PaintBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\SVD\data\svd_white_co.paa", "RevivalPlus\weapons\SVD\data\svd_white_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\SVD\data\svd_white.rvmat"};
	};

	class B95;
	class RPL_B95_PaintBase : B95
	{
		scope = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {""};
	};
	class RPL_B95_Black : RPL_B95_PaintBase
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\B95\data\b95_black_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\B95\data\b95_black.rvmat"};
	};
	class RPL_B95_Olive : RPL_B95_PaintBase
	{
		scope = 2;
		color = "Olive";
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\B95\data\b95_olive_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\B95\data\b95_olive.rvmat"};
	};
	class RPL_B95_DarkTan : RPL_B95_PaintBase
	{
		scope = 2;
		color = "DarkTan";
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\B95\data\b95_darktan_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\B95\data\b95_darktan.rvmat"};
	};
	class RPL_B95_White : RPL_B95_PaintBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\B95\data\b95_white_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\B95\data\b95_white.rvmat"};
	};

	class Winchester70;
	class RPL_Winchester70_PaintBase : Winchester70
	{
		scope = 0;
		hiddenSelections[] = {"camo", "zbytek"};
		hiddenSelectionsTextures[] = {
			"",
			""
		};
	};
	class RPL_Winchester70_Black : RPL_Winchester70_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\Winchester70\data\winchester70_black_co.paa", "RevivalPlus\weapons\Winchester70\data\winchester70_black_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\Winchester70\data\winchester70_black.rvmat"};
  };
  class RPL_Winchester70_Olive : RPL_Winchester70_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\Winchester70\data\winchester70_olive_co.paa", "RevivalPlus\weapons\Winchester70\data\winchester70_olive_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\Winchester70\data\winchester70_olive.rvmat"};
  };
  class RPL_Winchester70_DarkTan : RPL_Winchester70_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\Winchester70\data\winchester70_darktan_co.paa", "RevivalPlus\weapons\Winchester70\data\winchester70_darktan_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\Winchester70\data\winchester70_darktan.rvmat"};
  };
  class RPL_Winchester70_White : RPL_Winchester70_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\Winchester70\data\winchester70_white_co.paa", "RevivalPlus\weapons\Winchester70\data\winchester70_white_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\Winchester70\data\winchester70_white.rvmat"};
  };

	class Repeater;
	class RPL_Repeater_PaintBase : Repeater
	{
		scope = 0;
		hiddenSelections[] = {"camo", "zbytek"};
		hiddenSelectionsTextures[] = {
			"",
			""
		};
	};
	class RPL_Repeater_Black : RPL_Repeater_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\Repeater\data\repeater_black_co.paa", "RevivalPlus\weapons\Repeater\data\repeater_black_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\Repeater\data\repeater_black.rvmat"};
  };
  class RPL_Repeater_Olive : RPL_Repeater_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\Repeater\data\repeater_olive_co.paa", "RevivalPlus\weapons\Repeater\data\repeater_olive_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\Repeater\data\repeater_olive.rvmat"};
  };
  class RPL_Repeater_DarkTan : RPL_Repeater_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\Repeater\data\repeater_darktan_co.paa", "RevivalPlus\weapons\Repeater\data\repeater_darktan_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\Repeater\data\repeater_darktan.rvmat"};
  };
  class RPL_Repeater_White : RPL_Repeater_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\Repeater\data\repeater_white_co.paa", "RevivalPlus\weapons\Repeater\data\repeater_white_co.paa"};
		// hiddenSelectionsMaterials[] = {"RevivalPlus\weapons\Repeater\data\repeater_white.rvmat"};
  };

	class Ruger1022;
	class RPL_Ruger1022_PaintBase : Ruger1022
	{
		scope = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {
			""
		};
	};
	class RPL_Ruger1022_Black : RPL_Ruger1022_PaintBase
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\Ruger1022\data\ruger1022_black_co.paa"
		};
	};
	class RPL_Ruger1022_Olive : RPL_Ruger1022_PaintBase
	{
		scope = 2;
		color = "Olive";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\Ruger1022\data\ruger1022_olive_co.paa"
		};
	};
	class RPL_Ruger1022_DarkTan : RPL_Ruger1022_PaintBase
	{
		scope = 2;
		color = "DarkTan";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\Ruger1022\data\ruger1022_darktan_co.paa"
		};
	};
	class RPL_Ruger1022_White : RPL_Ruger1022_PaintBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\Ruger1022\data\ruger1022_white_co.paa"
		};
	};

	class Mosin9130;
	class RPL_Mosin9130_PaintBase : Mosin9130
	{
		scope = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {
			""
		};
	};
	class RPL_Mosin9130_Black : RPL_Mosin9130_PaintBase
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\Mosin9130\data\mosin9130_black_co.paa"
		};
	};
	class RPL_Mosin9130_Olive : RPL_Mosin9130_PaintBase
	{
		scope = 2;
		color = "Olive";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\Mosin9130\data\mosin9130_olive_co.paa"
		};
	};
	class RPL_Mosin9130_DarkTan : RPL_Mosin9130_PaintBase
	{
		scope = 2;
		color = "DarkTan";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\Mosin9130\data\mosin9130_darktan_co.paa"
		};
	};
	class RPL_Mosin9130_White : RPL_Mosin9130_PaintBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\Mosin9130\data\mosin9130_white_co.paa"
		};
	};

	class SKS;
	class RPL_SKS_PaintBase : SKS
	{
		scope = 0;
		hiddenSelections[] = {"camoGround", "Clip_rounds","clip"};
		hiddenSelectionsTextures[] = {
			"",
			"",
			""
		};
	};
	class RPL_SKS_Black : RPL_SKS_PaintBase
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\SKS\data\sks_black_co.paa",
			"",
			""
		};
	};
	class RPL_SKS_Olive : RPL_SKS_PaintBase
	{
		scope = 2;
		color = "Olive";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\SKS\data\sks_olive_co.paa",
			"",
			""
		};
	};
	class RPL_SKS_DarkTan : RPL_SKS_PaintBase
	{
		scope = 2;
		color = "DarkTan";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\SKS\data\sks_darktan_co.paa",
			"",
			""
		};
	};
	class RPL_SKS_White : RPL_SKS_PaintBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\SKS\data\sks_white_co.paa",
			"",
			""
		};
	};

	class M4A1;
	class RPL_M4A1_PaintBase : M4A1
	{
		scope = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
	};
	class RPL_M4A1_Festive : M4A1
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"RevivalPlus\weapons\M4A1\data\m4_body_festive_co.paa"};
		chamberableFrom[] = {"RPL_Ammo_556x45FR", "RPL_Ammo_556x45FG", "RPL_Ammo_556x45FB"};
		magazines[] = {"RPL_Mag_FMAG_10Rnd"};
		drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX_dry",0.5,1,20};
	};
};
