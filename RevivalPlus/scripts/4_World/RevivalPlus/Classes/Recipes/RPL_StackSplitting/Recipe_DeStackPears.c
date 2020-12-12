class DeStackPears extends RecipeBase
{
  override void Init()
	{
    /*************************************************************/
    m_Name = "#STR_RPL_Recipe_DeStack";
		m_IsInstaRecipe = false; // NoAnimation [true/false]
  	m_AnimationLength = 0.5;   // Animation length
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
    m_MinQuantityIngredient[1] = 2;
    m_MaxQuantityIngredient[1] = 2;
    /*************************************************************/
    InsertIngredient(0, "Sickle");
    InsertIngredient(0, "Hacksaw");
    InsertIngredient(0, "HandSaw");
    InsertIngredient(0, "KitchenKnife");
    InsertIngredient(0, "SteakKnife");
    InsertIngredient(0, "HayHook");
    InsertIngredient(0, "StoneKnife");
    InsertIngredient(0, "Cleaver");
    InsertIngredient(0, "CombatKnife");
    InsertIngredient(0, "HuntingKnife");
    InsertIngredient(0, "Machete");
    InsertIngredient(0, "Screwdriver");
    InsertIngredient(0, "Crowbar");
    InsertIngredient(0, "Pickaxe");
    InsertIngredient(0, "WoodAxe");
    InsertIngredient(0, "Hatchet");
    InsertIngredient(0, "FirefighterAxe");
    InsertIngredient(0, "Sword");
    InsertIngredient(0, "AK_Bayonet");
    InsertIngredient(0, "M9A1_Bayonet");
    InsertIngredient(0, "Mosin_Bayonet");
    InsertIngredient(0, "SKS_Bayonet");
    m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[0] = false;
    /*************************************************************/
    InsertIngredient(1, "RPL_PearStack");
    m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = true;
		m_IngredientUseSoftSkills[1] = false;
    /*************************************************************/
    AddResult("Pear");
    AddResult("Pear");
    /*************************************************************/
    m_ResultSetFullQuantity[0] = true;   // true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;           // -1 = do nothing
		m_ResultSetHealth[0] = -1;            // -1 = do nothing
		m_ResultInheritsHealth[0] = -2;       // (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;        // (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -1;          // (value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;     // set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;
    /*************************************************************/
    m_ResultSetFullQuantity[1] = true;   // true = set full quantity, false = do nothing
		m_ResultSetQuantity[1] = -1;           // -1 = do nothing
		m_ResultSetHealth[1] = -1;            // -1 = do nothing
		m_ResultInheritsHealth[1] = -2;       // (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[1] = -1;        // (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[1] = -1;          // (value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[1] = false;     // set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[1] = -1;
  }

  // Recipe validity check
  override bool CanDo(ItemBase ingredients[], PlayerBase player) {return true;}

  // Called upon completion
  override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
  {
    //Trace.Log(0, "<DeStackPears> Called.");
  }
};
