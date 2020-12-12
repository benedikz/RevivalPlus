class PreservePears extends RecipeBase
{
  override void Init()
	{
    /*************************************************************/
    m_Name = "#STR_RPL_Recipe_Preserve";
		m_IsInstaRecipe = false; // NoAnimation [true/false]
  	m_AnimationLength = 2;   // Animation length
		m_Specialty = -0.05;     // + INCREASE ROUGNESS
                             // - INCREASE PRECISSION
    /*************************************************************/
    m_MinDamageIngredient[0] = -1;
    m_MaxDamageIngredient[0] = 3;
    m_MinQuantityIngredient[0] = -1;
    m_MaxQuantityIngredient[0] = -1;
    /*************************************************************/
    m_MinDamageIngredient[1] = -1;
    m_MaxDamageIngredient[1] = 3;
    m_MinQuantityIngredient[1] = 4;
    m_MaxQuantityIngredient[1] = 4;
    /*************************************************************/
    InsertIngredient(0, "RPL_ImprovisedCan");
    m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = false;
    /*************************************************************/
    InsertIngredient(1, "RPL_PearStack");
    m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = true;
		m_IngredientUseSoftSkills[1] = false;
    /*************************************************************/
    AddResult("RPL_ImprovisedCan_Pears");
    /*************************************************************/
		m_ResultSetFullQuantity[0] = false;   // true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;          // -1 = do nothing
		m_ResultSetHealth[0] = -1;            // -1 = do nothing
		m_ResultInheritsHealth[0] = -2;       // (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;        // (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = 0;          // (value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;     // set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;
  }

  // Recipe validity check
  override bool CanDo(ItemBase ingredients[], PlayerBase player) {return true;}

  // Called upon completion
  override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
  {
    //Trace.Log(0, "<PreservePears> Called.");
  }
};
