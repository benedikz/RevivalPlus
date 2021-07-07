class RPL_Notebook_Base extends Inventory_Base
{
	  override bool CanReceiveItemIntoCargo (EntityAI item)
    {
		if ( item.IsKindOf("Paper"))
        {
            return true;
        };
		if ( item.IsKindOf("WrittenNote"))
        {
            return true;
        };
        return false;
    }
};
