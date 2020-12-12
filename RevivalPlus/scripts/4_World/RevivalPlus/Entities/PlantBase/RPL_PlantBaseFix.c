
/*
 *    Addon: Revival Plus
 *    Script: RPL_PlantBaseFix.c
 *    Author: cheweduptrex2, Tomáš Benedikt
 *
 *    © 2020 cheweduptrex2 & Tomáš Benedikt
 *
 *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
 *    <summary>Plant Exploit Fixes.</summary>
 *
 */

class PlantExploitFixConfig
{
	bool removeAfterHarvest = true;
};

class PlantExploitFix
{
	static ref PlantExploitFix g_PlantExploitFix;
	private string CONFIG_FILE =  "$profile:RPL_PlantFix.json";
	private ref PlantExploitFixConfig _config;

	void PlantExploitFix()
	{
		if ( GetGame().IsServer() )
		{
			_config = new PlantExploitFixConfig();
			string fileName;
			FileAttr fileAttr;
			FindFileHandle configFile = FindFile(CONFIG_FILE, fileName, fileAttr, 0);
			if( !configFile )
			{
				JsonFileLoader<PlantExploitFixConfig>.JsonSaveFile(CONFIG_FILE, _config);
			}
			else
			{
				JsonFileLoader<PlantExploitFixConfig>.JsonLoadFile(CONFIG_FILE, _config);
			}
		}
	}

	static ref PlantExploitFix getInstance()
	{
		if ( !g_PlantExploitFix )
		{
			g_PlantExploitFix = new PlantExploitFix();
		}
		return g_PlantExploitFix;
	}

	PlantExploitFixConfig GetConfig()
	{
		return _config;
	}
};

modded class Plant_Cannabis
{
	override void Harvest( PlayerBase player )
	{
		super.Harvest(player);
		if ( GetGame().IsServer() && PlantExploitFix.getInstance().GetConfig().removeAfterHarvest == true )
		{
			GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( RemovePlant, 10, true );
		}
	}
};

modded class PlantBase
{
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;

		if ( GetGame().IsServer() && !ctx.Read( m_HasCrops ) )
			return false;

		return true;
	}

	override void OnStoreSave( ParamsWriteContext ctx )
	{
		super.OnStoreSave( ctx );
		if( GetGame().IsServer() )
			ctx.Write( m_HasCrops );
	}

	private bool harvestingSpamCheck = false;
	override void Harvest( PlayerBase player )
	{
		if ( harvestingSpamCheck == false && m_HasCrops == true )
		{
			harvestingSpamCheck = true;
			m_HasCrops = false;
			SetSynchDirty();
			UpdatePlant();
			super.Harvest(player);
			GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( clearSpamCheck, 5000, true );
		}
	}

	void clearSpamCheck()
	{
		harvestingSpamCheck = false;
	}
};

modded class ActionPlantSeed: ActionSingleUseBase
{
	override void Process( ActionData action_data )
	{
		Object targetObject = action_data.m_Target.GetObject();
		if ( targetObject != NULL && targetObject.IsInherited(GardenBase) )
		{
			ItemBase seed_IB = ItemBase.Cast( action_data.m_MainItem );
			int prePlantCount = seed_IB.GetQuantity();
			super.Process(action_data);
			if ( prePlantCount == seed_IB.GetQuantity() )
			{
				prePlantCount--;
				seed_IB.SetQuantity(prePlantCount);
			}
		}
		else
		{
			super.Process(action_data);
		}
	}
};

modded class ActionHarvestCrops: ActionInteractBase
{
	override void OnExecuteClient( ActionData action_data )
	{
		Object targetObject = action_data.m_Target.GetObject();
		PlantBase plant = PlantBase.Cast( targetObject );
		if ( plant.HasCrops() )
		{
			super.OnExecuteClient(action_data);
		}
	}

	override void OnExecuteServer( ActionData action_data )
	{
		Object targetObject = action_data.m_Target.GetObject();
		PlantBase plant = PlantBase.Cast( targetObject );
		if ( plant.HasCrops() )
		{
			super.OnExecuteServer(action_data);
		}
	}
};
