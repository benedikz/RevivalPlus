class CfgPatches
{
	class RPL_Weapons_Ammunition
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
      "DZ_Data",
      "DZ_Weapons_Firearms",
      "DZ_Weapons_Magazines"
    };
	};
};

/* Nábojnice */
class CfgMagazines
{
  class Ammo_Flare;
  class RPL_Ammo_556x45FR: Ammo_Flare
	{
		scope = 2;
		displayName = "Náboje 5.56x45mm-FR (světlicové)";
		descriptionShort = "...";
		model = "\dz\weapons\ammunition\556_LooseRounds.p3d";
    hiddenSelections[] = {"zbytek"};
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Ammunition\data\556fr_loose_co.paa"};
		iconCartridge = 2;
		weight = 4;
		count = 10;
		ammo = "Bullet_FlareRed";
  };
  class RPL_Ammo_556x45FG: Ammo_Flare
	{
		scope = 2;
		displayName = "Náboje 5.56x45mm-FG (světlicové)";
		descriptionShort = "...";
		model = "\dz\weapons\ammunition\556_LooseRounds.p3d";
    hiddenSelections[] = {"zbytek"};
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Ammunition\data\556fg_loose_co.paa"};
		iconCartridge = 2;
		weight = 4;
		count = 10;
		ammo = "Bullet_FlareGreen";
  };
  class RPL_Ammo_556x45FB: Ammo_Flare
	{
		scope = 2;
		displayName = "Náboje 5.56x45mm-FB (světlicové)";
		descriptionShort = "...";
		model = "\dz\weapons\ammunition\556_LooseRounds.p3d";
    hiddenSelections[] = {"zbytek"};
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Ammunition\data\556fb_loose_co.paa"};
		iconCartridge = 2;
		weight = 4;
		count = 10;
		ammo = "Bullet_FlareBlue";
  };

  /* Zásobníky */
  class Magazine_Base;
  class RPL_Mag_FMAG_10Rnd: Magazine_Base
  {
    scope = 2;
    displayName = "Zásobník FlareMag (10 kusů)";
    descriptionShort = "...";
    model = "\DZ\weapons\attachments\magazine\magazine_pmag_10.p3d";
    weight = 30;
    itemSize[] = {1,2};
    count = 10;
    ammo = "Bullet_FlareRed";
    ammoItems[] = {"RPL_Ammo_556x45FR","RPL_Ammo_556x45FG", "RPL_Ammo_556x45FB"};
    tracersEvery = 0;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\pmag_black_co.paa"};
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints = 100;
          healthLevels[] = {
						{1.0,{"DZ\weapons\attachments\data\pmag_black.rvmat"}},
						{0.7,{"DZ\weapons\attachments\data\pmag_black.rvmat"}},
						{0.5,{"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},
						{0.3,{"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},
						{0.0,{"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"}}
					};
        };
      };
    };
    class AnimEvents
    {
      class SoundWeapon
      {
        class MagRifle_fill_in
        {
          soundSet = "MagRifle_fill_in_SoundSet";
          id = 1;
        };
        class MagRifle_fill_loop
        {
          soundSet = "MagRifle_fill_loop_SoundSet";
          id = 2;
        };
        class MagRifle_fill_out
        {
          soundSet = "MagRifle_fill_out_SoundSet";
          id = 3;
        };
        class MagRifle_empty_in
        {
          soundSet = "MagRifle_empty_in_SoundSet";
          id = 4;
        };
        class MagRifle_empty_loop
        {
          soundSet = "MagRifle_empty_loop_SoundSet";
          id = 5;
        };
        class MagRifle_empty_out
        {
          soundSet = "MagRifle_empty_out_SoundSet";
          id = 6;
        };
        class MagPistol_fill_in
        {
          soundSet = "MagPistol_fill_in_SoundSet";
          id = 7;
        };
        class MagPistol_fill_loop
        {
          soundSet = "MagPistol_fill_loop_SoundSet";
          id = 8;
        };
        class MagPistol_fill_out
        {
          soundSet = "MagPistol_fill_out_SoundSet";
          id = 9;
        };
        class MagPistol_empty_in
        {
          soundSet = "MagPistol_empty_in_SoundSet";
          id = 10;
        };
        class MagPistol_empty_loop
        {
          soundSet = "MagPistol_empty_loop_SoundSet";
          id = 11;
        };
        class MagPistol_empty_out
        {
          soundSet = "MagPistol_empty_out_SoundSet";
          id = 12;
        };
      };
    };
  };
};

/* Krabičky nábojů */
class CfgVehicles
{
  class AmmoBox_556x45_20Rnd;
  class RPL_AmmoBox_556x45FR_10Rnd: AmmoBox_556x45_20Rnd
  {
    scope = 2;
    displayName = "Krabička nábojů 5.56x45mm-FR (světlicové)";
    descriptionShort = "...";
    model = "\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
    rotationFlags = 17;
    weight = 85;
    hiddenSelections[] = {"zbytek"};
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Ammunition\data\556x45fr_box_co.paa"};
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints = 100;
          healthLevels[] = {
            {1.0,{""}},
            {0.7,{""}},
            {0.5,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},
            {0.3,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},
            {0.0,{"DZ\weapons\ammunition\data\556_20RoundBox_destruct.rvmat"}}
          };
        };
      };
    };
    class Resources
    {
      class RPL_Ammo_556x45FR
      {
        value = 10;
        variable = "quantity";
      };
    };
    class AnimEvents
    {
      class SoundWeapon
      {
        class interact
        {
          soundset = "ammoboxUnpack_SoundSet";
          id = 70;
        };
      };
    };
  };
  class RPL_AmmoBox_556x45FG_10Rnd: AmmoBox_556x45_20Rnd
  {
    scope = 2;
    displayName = "Krabička nábojů 5.56x45mm-FG (světlicové)";
    descriptionShort = "...";
    model = "\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
    rotationFlags = 17;
    weight = 85;
    hiddenSelections[] = {"zbytek"};
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Ammunition\data\556x45fg_box_co.paa"};
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints = 100;
          healthLevels[] = {
            {1.0,{""}},
            {0.7,{""}},
            {0.5,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},
            {0.3,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},
            {0.0,{"DZ\weapons\ammunition\data\556_20RoundBox_destruct.rvmat"}}
          };
        };
      };
    };
    class Resources
    {
      class RPL_Ammo_556x45FG
      {
        value = 10;
        variable = "quantity";
      };
    };
    class AnimEvents
    {
      class SoundWeapon
      {
        class interact
        {
          soundset = "ammoboxUnpack_SoundSet";
          id = 70;
        };
      };
    };
  };
  class RPL_AmmoBox_556x45FB_10Rnd: AmmoBox_556x45_20Rnd
  {
    scope = 2;
    displayName = "Krabička nábojů 5.56x45mm-FB (světlicové)";
    descriptionShort = "...";
    model = "\dz\weapons\ammunition\00Buck_10RoundBox.p3d";
    rotationFlags = 17;
    weight = 85;
    hiddenSelections[] = {"zbytek"};
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Ammunition\data\556x45fb_box_co.paa"};
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints = 100;
          healthLevels[] = {
            {1.0,{""}},
            {0.7,{""}},
            {0.5,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},
            {0.3,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},
            {0.0,{"DZ\weapons\ammunition\data\556_20RoundBox_destruct.rvmat"}}
          };
        };
      };
    };
    class Resources
    {
      class RPL_Ammo_556x45FB
      {
        value = 10;
        variable = "quantity";
      };
    };
    class AnimEvents
    {
      class SoundWeapon
      {
        class interact
        {
          soundset = "ammoboxUnpack_SoundSet";
          id = 70;
        };
      };
    };
  };
};
