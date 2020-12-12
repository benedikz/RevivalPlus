class CfgPatches
{
	class RPL_Weapons_Pistols
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
      "DZ_Data"
    };
	};
};

class CfgWeapons
{
  class Glock19;
  class RPL_Glock19_PaintBase : Glock19
  {
    scope = 0;
    hiddenSelections[] = {"zbytek"};
    hiddenSelectionsTextures[] = {""};
  };
  class RPL_Glock19_Black : RPL_Glock19_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Pistols\Glock19\data\glock19_black_co.paa"};
  };
  class RPL_Glock19_Olive : RPL_Glock19_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Pistols\Glock19\data\glock19_olive_co.paa"};
  };
  class RPL_Glock19_DarkTan : RPL_Glock19_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Pistols\Glock19\data\glock19_darktan_co.paa"};
  };
  class RPL_Glock19_White : RPL_Glock19_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Pistols\Glock19\data\glock19_white_co.paa"};
  };
};
