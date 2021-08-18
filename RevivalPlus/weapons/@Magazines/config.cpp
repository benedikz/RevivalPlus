class CfgPatches
{
	class RPL_Weapons_Magazines
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
      "DZ_Data"
    };
	};
};
class CfgMagazines
{
  class Magazine_Base;

  /* AK74_30Rnd */
  class Mag_AK74_30Rnd;
	class RPL_Mag_AK74_30Rnd_PaintBase: Mag_AK74_30Rnd
	{
		scope = 0;
		hiddenSelections[] = {
      "camo"
    };
	};
  class RPL_Mag_AK74_30Rnd_Black: RPL_Mag_AK74_30Rnd_PaintBase
  {
		scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AK74\data\magazine_ak74_black_co.paa"
    };
  };
  class RPL_Mag_AK74_30Rnd_Olive: RPL_Mag_AK74_30Rnd_PaintBase
  {
		scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AK74\data\magazine_ak74_olive_co.paa"
    };
  };
  class RPL_Mag_AK74_30Rnd_DarkTan: RPL_Mag_AK74_30Rnd_PaintBase
  {
		scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AK74\data\magazine_ak74_darktan_co.paa"
    };
  };
  class RPL_Mag_AK74_30Rnd_White: RPL_Mag_AK74_30Rnd_PaintBase
  {
		scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AK74\data\magazine_ak74_white_co.paa"
    };
  };

	/* Mag_AK74_45Rnd */
	class Mag_AK74_45Rnd;
	class RPL_Mag_AK74_45Rnd_PaintBase: Mag_AK74_45Rnd
	{
		scope = 0;
		hiddenSelections[] = {
			"camo"
		};
	};
	class RPL_Mag_AK74_45Rnd_Black: RPL_Mag_AK74_45Rnd_PaintBase
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\@Magazines\AK74\data\magazine_ak74_45rnd_black_co.paa"
		};
	};
	class RPL_Mag_AK74_45Rnd_Olive: RPL_Mag_AK74_45Rnd_PaintBase
	{
		scope = 2;
		color = "Olive";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\@Magazines\AK74\data\magazine_ak74_45rnd_olive_co.paa"
		};
	};
	class RPL_Mag_AK74_45Rnd_DarkTan: RPL_Mag_AK74_45Rnd_PaintBase
	{
		scope = 2;
		color = "DarkTan";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\@Magazines\AK74\data\magazine_ak74_45rnd_darktan_co.paa"
		};
	};
	class RPL_Mag_AK74_45Rnd_White: RPL_Mag_AK74_45Rnd_PaintBase
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {
			"RevivalPlus\weapons\@Magazines\AK74\data\magazine_ak74_45rnd_white_co.paa"
		};
	};

	/* AKM_30Rnd */
  class Mag_AKM_30Rnd;
	class RPL_Mag_AKM_30Rnd_PaintBase: Mag_AKM_30Rnd
	{
		scope = 0;
		hiddenSelections[] = {
			"camo"
		};
	};
  class RPL_Mag_AKM_30Rnd_Black: RPL_Mag_AKM_30Rnd_PaintBase
  {
		scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AKM\data\akm_steel_mag_black_co.paa"
    };
  };
  class RPL_Mag_AKM_30Rnd_Olive: RPL_Mag_AKM_30Rnd_PaintBase
  {
		scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AKM\data\akm_steel_mag_olive_co.paa"
    };
  };
  class RPL_Mag_AKM_30Rnd_DarkTan: RPL_Mag_AKM_30Rnd_PaintBase
  {
		scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AKM\data\akm_steel_mag_darktan_co.paa"
    };
  };
  class RPL_Mag_AKM_30Rnd_White: RPL_Mag_AKM_30Rnd_PaintBase
  {
		scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AKM\data\akm_steel_mag_white_co.paa"
    };
  };

  /* AKM_Drum75Rnd */
  class Mag_AKM_Drum75Rnd;
	class RPL_Mag_AKM_Drum75Rnd_PaintBase: Mag_AKM_Drum75Rnd
	{
		scope = 0;
		hiddenSelections[] = {
      "camo"
    };
	};
  class RPL_Mag_AKM_Drum75Rnd_Black: RPL_Mag_AKM_Drum75Rnd_PaintBase
  {
		scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AKM\data\magazine_drum_black_co.paa"
    };
  };
  class RPL_Mag_AKM_Drum75Rnd_Olive: RPL_Mag_AKM_Drum75Rnd_PaintBase
  {
		scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AKM\data\magazine_drum_olive_co.paa"
    };
  };
  class RPL_Mag_AKM_Drum75Rnd_DarkTan: RPL_Mag_AKM_Drum75Rnd_PaintBase
  {
		scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AKM\data\magazine_drum_darktan_co.paa"
    };
  };
  class RPL_Mag_AKM_Drum75Rnd_White: RPL_Mag_AKM_Drum75Rnd_PaintBase
  {
		scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\AKM\data\magazine_drum_white_co.paa"
    };
  };

  /* FAL_20Rnd */
  class Mag_FAL_20Rnd;
	class RPL_Mag_FAL_20Rnd_PaintBase: Mag_FAL_20Rnd
  {
		scope = 0;
		hiddenSelections[] = {
      "camo"
    };
	};
  class RPL_Mag_FAL_20Rnd_Black: RPL_Mag_FAL_20Rnd_PaintBase
  {
		scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\FAL\data\fal_mag_black_co.paa"
    };
  };
  class RPL_Mag_FAL_20Rnd_Olive: RPL_Mag_FAL_20Rnd_PaintBase
  {
		scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\FAL\data\fal_mag_olive_co.paa"
    };
  };
  class RPL_Mag_FAL_20Rnd_DarkTan: RPL_Mag_FAL_20Rnd_PaintBase
  {
		scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\FAL\data\fal_mag_darktan_co.paa"
    };
  };
  class RPL_Mag_FAL_20Rnd_White: RPL_Mag_FAL_20Rnd_PaintBase
  {
		scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\FAL\data\fal_mag_white_co.paa"
    };
  };

  /* STANAG_30Rnd */
  class Mag_STANAG_30Rnd;
	class RPL_Mag_STANAG_30Rnd_PaintBase: Mag_STANAG_30Rnd
  {
		scope = 0;
		hiddenSelections[] = {
      "zbytek"
    };
	};
  class RPL_Mag_STANAG_30Rnd_Black: RPL_Mag_STANAG_30Rnd_PaintBase
  {
		scope = 2;
    color = "Black";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\M4A1\data\m4_mag_black_co.paa"
    };
  };
  class RPL_Mag_STANAG_30Rnd_Olive: RPL_Mag_STANAG_30Rnd_PaintBase
  {
		scope = 2;
    color = "Olive";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\M4A1\data\m4_mag_olive_co.paa"
    };
  };
  class RPL_Mag_STANAG_30Rnd_DarkTan: RPL_Mag_STANAG_30Rnd_PaintBase
  {
		scope = 2;
    color = "DarkTan";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\M4A1\data\m4_mag_darktan_co.paa"
    };
  };
  class RPL_Mag_STANAG_30Rnd_White: RPL_Mag_STANAG_30Rnd_PaintBase
  {
		scope = 2;
    color = "White";
    hiddenSelectionsTextures[] = {
      "RevivalPlus\weapons\@Magazines\M4A1\data\m4_mag_white_co.paa"
    };
  };
};
