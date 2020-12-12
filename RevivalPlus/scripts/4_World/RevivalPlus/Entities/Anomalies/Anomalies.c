class SPL_Anomaly_Wendigo001 extends Inventory_Base
{
	protected ref EffectSound m_AnomalyEffect;

	override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra);

		if ( GetGame().IsClient() || !GetGame().IsMultiplayer() ) {
			if ( !m_AnomalyEffect )
					 PlaySoundSet(m_AnomalyEffect, "RPL_SoundSet_Anomaly_Wendigo001", 1.0, 1.0);
			     Print("[RPLA] :: Spooked someone out!");
		}
	}

	override void EEDelete(EntityAI parent) {
		if( !m_AnomalyEffect ) {
			m_AnomalyEffect.Stop();
			Print("[RPLA] :: Anomaly<Wendigo1> Deleted.");
		}
	}
}

class SPL_Anomaly_Wendigo002 extends Inventory_Base
{
	protected ref EffectSound m_AnomalyEffect;

	override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra);

		if ( GetGame().IsClient() || !GetGame().IsMultiplayer() ) {
			if ( !m_AnomalyEffect )
					 PlaySoundSet(m_AnomalyEffect, "RPL_SoundSet_Anomaly_Wendigo002", 1.0, 1.0);
			     Print("[RPLA] :: Spooked someone out!");
		}
	}

	override void EEDelete(EntityAI parent) {
		if( !m_AnomalyEffect ) {
			m_AnomalyEffect.Stop();
			Print("[RPLA] :: Anomaly<Wendigo2> Deleted.");
		}
	}
}

class SPL_Anomaly_Arctotherium extends Inventory_Base
{
	protected ref EffectSound m_AnomalyEffect;

	override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra);

		if ( GetGame().IsClient() || !GetGame().IsMultiplayer() ) {
			if ( !m_AnomalyEffect )
					 PlaySoundSet(m_AnomalyEffect, "RPL_SoundSet_Anomaly_Arctotherium", 1.0, 1.0);
			     Print("[RPLA] :: Spooked someone out!");
		}
	}

	override void EEDelete(EntityAI parent) {
		if( !m_AnomalyEffect ) {
			m_AnomalyEffect.Stop();
			Print("[RPLA] :: Anomaly<Arctotherium> Deleted.");
		}
	}
}
