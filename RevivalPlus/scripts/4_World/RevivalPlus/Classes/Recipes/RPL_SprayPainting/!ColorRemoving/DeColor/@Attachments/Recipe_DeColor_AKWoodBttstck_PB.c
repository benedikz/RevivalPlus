class DeColor_AKWoodBttstck_PB extends RecipeBase
{
  override void Init()
	{
    /*************************************************************/
    m_Name = "#STR_RPL_Recipe_RemoveColor";
		m_IsInstaRecipe = false; // NoAnimation [true/false]
  	m_AnimationLength = 4;   // Animation length
		m_Specialty = 0.05;      // + INCREASE ROUGNESS
                             // - INCREASE PRECISSION
    /*************************************************************/
    m_MinDamageIngredient[0] = -1;
    m_MaxDamageIngredient[0] = 3;
    m_MinQuantityIngredient[0] = 50;
    m_MaxQuantityIngredient[0] = -1;
    /*************************************************************/
    m_MinDamageIngredient[1] = -1;
    m_MaxDamageIngredient[1] = 3;
    m_MinQuantityIngredient[1] = -1;
    m_MaxQuantityIngredient[1] = -1;
    /*************************************************************/
    InsertIngredient(0, "RPL_Thinner_6001_Opened");
    m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = -50;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = false;
    /*************************************************************/
    InsertIngredient(1, "RPL_AK_WoodBttstck_PaintBase");
    m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
    /*************************************************************/
  }

  // Recipe validity check
  override bool CanDo(ItemBase ingredients[], PlayerBase player) {return true;}

  // Called upon completion
  override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
  {
    RPL_PaintItem.RemovePaint(ingredients[1], "AK_WoodBttstck", player, specialty_weight);
    //Trace.Log(0, "<DeColor_AKWoodBttstck_PB> Called.");
  }
};
