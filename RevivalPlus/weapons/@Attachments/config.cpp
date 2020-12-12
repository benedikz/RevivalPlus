class CfgPatches
{
	class RPL_Weapons_Attachments
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

class CfgVehicles
{

	// Rifle Buttstocks

  class AK_WoodBttstck;
  class RPL_AK_WoodBttstck_PaintBase : AK_WoodBttstck
  {
    scope = 0;
  };
  class RPL_AK_WoodBttstck_Black : RPL_AK_WoodBttstck_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK\data\akm_wood_black_co.paa"};
  };
  class RPL_AK_WoodBttstck_Olive : RPL_AK_WoodBttstck_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK\data\akm_wood_olive_co.paa"};
  };
  class RPL_AK_WoodBttstck_DarkTan : RPL_AK_WoodBttstck_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK\data\akm_wood_darktan_co.paa"};
  };
  class RPL_AK_WoodBttstck_White : RPL_AK_WoodBttstck_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK\data\akm_wood_white_co.paa"};
  };

  class AK74_WoodBttstck;
  class RPL_AK74_WoodBttstck_PaintBase : AK74_WoodBttstck
  {
    scope = 0;
    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {""};
  };
  class RPL_AK74_WoodBttstck_Black : RPL_AK74_WoodBttstck_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK74\data\ak74_wood_black_co.paa"};
  };
  class RPL_AK74_WoodBttstck_Olive : RPL_AK74_WoodBttstck_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK74\data\ak74_wood_olive_co.paa"};
  };
  class RPL_AK74_WoodBttstck_DarkTan : RPL_AK74_WoodBttstck_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK74\data\ak74_wood_darktan_co.paa"};
  };
  class RPL_AK74_WoodBttstck_White : RPL_AK74_WoodBttstck_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK74\data\ak74_wood_white_co.paa"};
  };

  class Fal_OeBttstck;
  class RPL_Fal_OeBttstck_PaintBase : Fal_OeBttstck
  {
    scope = 0;
		color = "";
    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {""};
  };
  class RPL_Fal_OeBttstck_Black : RPL_Fal_OeBttstck_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\FAL\data\fal_stock_oe_black_co.paa"};
  };
  class RPL_Fal_OeBttstck_Olive : RPL_Fal_OeBttstck_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\FAL\data\fal_stock_oe_olive_co.paa"};
  };
  class RPL_Fal_OeBttstck_DarkTan : RPL_Fal_OeBttstck_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\FAL\data\fal_stock_oe_darktan_co.paa"};
  };
  class RPL_Fal_OeBttstck_White : RPL_Fal_OeBttstck_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\FAL\data\fal_stock_oe_white_co.paa"};
  };

	// Rifle Handguards

	class AK_WoodHndgrd;
  class RPL_AK_WoodHndgrd_PaintBase : AK_WoodHndgrd
  {
    scope = 0;
  };
  class RPL_AK_WoodHndgrd_Black : RPL_AK_WoodHndgrd_PaintBase
  {
    scope = 2;
		color = "Black";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK\data\akm_wood_black_co.paa"};
  };
  class RPL_AK_WoodHndgrd_Olive : RPL_AK_WoodHndgrd_PaintBase
  {
    scope = 2;
		color = "Olive";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK\data\akm_wood_olive_co.paa"};
  };
  class RPL_AK_WoodHndgrd_DarkTan : RPL_AK_WoodHndgrd_PaintBase
  {
    scope = 2;
		color = "DarkTan";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK\data\akm_wood_darktan_co.paa"};
  };
  class RPL_AK_WoodHndgrd_White : RPL_AK_WoodHndgrd_PaintBase
  {
    scope = 2;
		color = "White";
    hiddenSelectionsTextures[] = {"RevivalPlus\weapons\@Attachments\AK\data\akm_wood_white_co.paa"};
  };
};
