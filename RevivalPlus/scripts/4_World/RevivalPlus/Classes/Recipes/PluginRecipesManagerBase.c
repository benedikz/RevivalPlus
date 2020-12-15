modded class PluginRecipesManagerBase extends PluginBase
{
  void RegisterRecipies()
	{
    super.RegisterRecipies();

    /************* FOOD PRESERVATION *************/
    //  <CraftCan>
    RegisterRecipe( new CraftEmptyCan );
    RegisterRecipe( new CraftPaperStrip );
    RegisterRecipe( new CraftImprovisedCan );
    //  <FoodConserving>
    RegisterRecipe( new PreserveApples );
    RegisterRecipe( new PreservePears );
    RegisterRecipe( new PreservePlums );
    RegisterRecipe( new PreserveZucchinis );
    RegisterRecipe( new PreserveTomatoes );
    RegisterRecipe( new PreservePotatoes );
    RegisterRecipe( new PreservePeppers );
    RegisterRecipe( new PreserveMeat );
    RegisterRecipe( new PreserveMushrooms );
    RegisterRecipe( new PreserveHumanMeat );
    RegisterRecipe( new PreservePumpkin );
    RegisterRecipe( new PreserveCarp );
    RegisterRecipe( new PreserveSardines );
    RegisterRecipe( new PreserveLard );
    // <Stacking>
    RegisterRecipe( new StackApples );
    RegisterRecipe( new StackPears );
    RegisterRecipe( new StackPlums );
    RegisterRecipe( new StackZucchinis );
    RegisterRecipe( new StackTomatoes );
    RegisterRecipe( new StackPotatoes );
    RegisterRecipe( new StackPeppers );
    RegisterRecipe( new StackMeat );
    RegisterRecipe( new StackHumanMeat );
    RegisterRecipe( new StackMushrooms );
    RegisterRecipe( new StackPumpkin );
    RegisterRecipe( new StackCarpFillets );
    RegisterRecipe( new StackSardines );
    RegisterRecipe( new StackLard );
    //  <DeStacking>
    //RegisterRecipe( new DeStackApples );
    //RegisterRecipe( new DeStackPears );
    //RegisterRecipe( new DeStackPlums );
    //RegisterRecipe( new DeStackZucchinis );
    //RegisterRecipe( new DeStackTomatoes );
    //RegisterRecipe( new DeStackPotatoes );
    //RegisterRecipe( new DeStackPeppers );
    //RegisterRecipe( new DeStackMeat );
    //RegisterRecipe( new DeStackHumanMeat );
    //RegisterRecipe( new DeStackMushrooms );
    //RegisterRecipe( new DeStackPumpkin );
    //RegisterRecipe( new DeStackCarpFillets );
    //RegisterRecipe( new DeStackSardines );
    //RegisterRecipe( new DeStackLard );
    //  <Liquor>
    RegisterRecipe( new CraftLiquor );
    //RegisterRecipe( new CraftAppleLiquor );
    //RegisterRecipe( new CraftPearLiquor );
    //RegisterRecipe( new CraftPlumLiquor );

    /**************** SPRAY-PAINTING ****************/
    //  <Solvent>
    RegisterRecipe( new OpenSolvent6000 );
    RegisterRecipe( new OpenSolvent6001 );
    //  <Camping>
    RegisterRecipe( new PaintPowerGenerator_Black );
    RegisterRecipe( new PaintWoodenCrate_Black );
    RegisterRecipe( new PaintWoodenCrate_Olive );
    RegisterRecipe( new PaintWoodenCrate_White );
    //  <Headgear>
    RegisterRecipe( new PaintGorkaHelmet_Black );
    RegisterRecipe( new PaintGorkaHelmet_Olive );
    RegisterRecipe( new PaintGorkaHelmet_DarkTan );
    RegisterRecipe( new PaintGorkaHelmet_White );
    RegisterRecipe( new PaintMotoHelmet_Black );
    RegisterRecipe( new PaintMotoHelmet_Olive );
    RegisterRecipe( new PaintMotoHelmet_DarkTan );
    RegisterRecipe( new PaintMotoHelmet_White );
    //RegisterRecipe( new PaintBallisticHelmet_Black );
    //RegisterRecipe( new PaintBallisticHelmet_Olive );
    //RegisterRecipe( new PaintBallisticHelmet_DarkTan );
    //RegisterRecipe( new PaintBallisticHelmet_White );
    RegisterRecipe( new PaintBurlapSackCover_Black );
    RegisterRecipe( new PaintBurlapSackCover_Olive );
    RegisterRecipe( new PaintBurlapSackCover_DarkTan );
    RegisterRecipe( new PaintBurlapSackCover_White );
    // <Weapons>
    RegisterRecipe( new PaintAKS74U_Black );
    RegisterRecipe( new PaintAKS74U_Olive );
    RegisterRecipe( new PaintAKS74U_DarkTan );
    RegisterRecipe( new PaintAKS74U_White );
    RegisterRecipe( new PaintB95_Black );
    RegisterRecipe( new PaintB95_Olive );
    RegisterRecipe( new PaintB95_DarkTan );
    RegisterRecipe( new PaintB95_White );
    RegisterRecipe( new PaintFAL_Black );
    RegisterRecipe( new PaintFAL_Olive );
    RegisterRecipe( new PaintFAL_DarkTan );
    RegisterRecipe( new PaintFAL_White );
    RegisterRecipe( new PaintRepeater_Black );
    RegisterRecipe( new PaintRepeater_Olive );
    RegisterRecipe( new PaintRepeater_DarkTan );
    RegisterRecipe( new PaintRepeater_White );
    RegisterRecipe( new PaintSVD_Black );
    RegisterRecipe( new PaintSVD_Olive );
    RegisterRecipe( new PaintSVD_DarkTan );
    RegisterRecipe( new PaintSVD_White );
    RegisterRecipe( new PaintVSS_Black );
    RegisterRecipe( new PaintVSS_Olive );
    RegisterRecipe( new PaintVSS_DarkTan );
    RegisterRecipe( new PaintVSS_White );
    RegisterRecipe( new PaintWinchester70_Black );
    RegisterRecipe( new PaintWinchester70_Olive );
    RegisterRecipe( new PaintWinchester70_DarkTan );
    RegisterRecipe( new PaintWinchester70_White );
    RegisterRecipe( new PaintMosin9130_Black );
    RegisterRecipe( new PaintMosin9130_Olive );
    RegisterRecipe( new PaintMosin9130_DarkTan );
    RegisterRecipe( new PaintMosin9130_White );
    RegisterRecipe( new PaintRuger1022_Black );
    RegisterRecipe( new PaintRuger1022_Olive );
    RegisterRecipe( new PaintRuger1022_DarkTan );
    RegisterRecipe( new PaintRuger1022_White );
    RegisterRecipe( new PaintSKS_Black );
    RegisterRecipe( new PaintSKS_Olive );
    RegisterRecipe( new PaintSKS_DarkTan );
    RegisterRecipe( new PaintSKS_White );
    // <Pistols>
    RegisterRecipe( new PaintGlock19_Black );
    RegisterRecipe( new PaintGlock19_Olive );
    RegisterRecipe( new PaintGlock19_DarkTan );
    RegisterRecipe( new PaintGlock19_White );
    // <Magazines>
    // <Attachments>
    RegisterRecipe( new PaintAK_WoodBttstck_Black );
    RegisterRecipe( new PaintAK_WoodBttstck_Olive );
    RegisterRecipe( new PaintAK_WoodBttstck_DarkTan );
    RegisterRecipe( new PaintAK_WoodBttstck_White );
    RegisterRecipe( new PaintAK_WoodHndgrd_Black );
    RegisterRecipe( new PaintAK_WoodHndgrd_Olive );
    RegisterRecipe( new PaintAK_WoodHndgrd_DarkTan );
    RegisterRecipe( new PaintAK_WoodHndgrd_White );
    RegisterRecipe( new PaintAK74_WoodBttstck_Black );
    RegisterRecipe( new PaintAK74_WoodBttstck_Olive );
    RegisterRecipe( new PaintAK74_WoodBttstck_DarkTan );
    RegisterRecipe( new PaintAK74_WoodBttstck_White );
    RegisterRecipe( new PaintAK74_WoodHndgrd_Black );
    RegisterRecipe( new PaintAK74_WoodHndgrd_Olive );
    RegisterRecipe( new PaintAK74_WoodHndgrd_DarkTan );
    RegisterRecipe( new PaintAK74_WoodHndgrd_White );
    RegisterRecipe( new PaintFal_OeBttstck_Black );
    RegisterRecipe( new PaintFal_OeBttstck_Olive );
    RegisterRecipe( new PaintFal_OeBttstck_DarkTan );
    RegisterRecipe( new PaintFal_OeBttstck_White );

    /*********** SOLVENT - COLOR REMOVING ***********/
    //  <Camping>
    RegisterRecipe( new DeColor_PowerGenerator_PB );
    //  <Headgear>
    RegisterRecipe( new DeColor_GorkaHelmet_PB );
    //RegisterRecipe( new DeColor_BallisticHelmet_PB );
    RegisterRecipe( new DeColor_MotoHelmet_PB );
    //  <Weapons>
    RegisterRecipe( new DeColor_AKS74U_PB );
    RegisterRecipe( new DeColor_B95_PB );
    RegisterRecipe( new DeColor_FAL_PB );
    RegisterRecipe( new DeColor_Repeater_PB );
    RegisterRecipe( new DeColor_SVD_PB );
    RegisterRecipe( new DeColor_VSS_PB );
    RegisterRecipe( new DeColor_Winchester70_PB );
    RegisterRecipe( new DeColor_Mosin9130_PB );
    RegisterRecipe( new DeColor_Ruger1022_PB );
    RegisterRecipe( new DeColor_SKS_PB );
    // <Pistols>
    RegisterRecipe( new DeColor_Glock19_PB );
    // <Magazines>
    // <Attachments>
    RegisterRecipe( new DeColor_AK74WoodBttstck_PB );
    RegisterRecipe( new DeColor_AK74WoodHndgrd_PB );
    RegisterRecipe( new DeColor_AKWoodBttstck_PB );
    RegisterRecipe( new DeColor_AKWoodHndgrd_PB );
    RegisterRecipe( new DeColor_FalOeBttstck_PB );

    /************ DISTILLING - ALCOHOL ************/
    RegisterRecipe( new CraftImprovisedAlcoholBottle );
    RegisterRecipe( new CraftVodka );
    //RegisterRecipe( new CraftPlumSpirit );
  }
};
