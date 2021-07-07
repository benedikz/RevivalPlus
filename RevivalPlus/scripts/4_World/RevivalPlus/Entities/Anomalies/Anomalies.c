class SPL_Anomaly_Wendigo001 extends Inventory_Base
{
	protected EffectSound m_AnomalyEffect;
	protected string m_AnomalySound = "RPL_SoundSet_Anomaly_Wendigo001";

	override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra);
		EffectSound sound;
		Object anomaly;

		if ( GetGame().IsClient() || !GetGame().IsMultiplayer() ) {
			if ( !m_AnomalyEffect ) {
				anomaly = Object.Cast(this);
				sound = SEffectManager.PlaySoundOnObject(m_AnomalySound, anomaly);
				Print("[RPLA] :: Spooked someone out!");
			}

			if (sound)
				sound.SetSoundAutodestroy(true);
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
	protected EffectSound m_AnomalyEffect;
	protected string m_AnomalySound = "RPL_SoundSet_Anomaly_Wendigo002";

	override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra);
		EffectSound sound;
		Object anomaly;

		if ( GetGame().IsClient() || !GetGame().IsMultiplayer() ) {
			if ( !m_AnomalyEffect ) {
				anomaly = Object.Cast(this);
				sound = SEffectManager.PlaySoundOnObject(m_AnomalySound, anomaly);
				Print("[RPLA] :: Spooked someone out!");
			}

			if (sound)
				sound.SetSoundAutodestroy(true);
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
	protected EffectSound m_AnomalyEffect;
	protected string m_AnomalySound = "RPL_SoundSet_Anomaly_Arctotherium";

	override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra);
		EffectSound sound;
		Object anomaly;

		if ( GetGame().IsClient() || !GetGame().IsMultiplayer() ) {
			if ( !m_AnomalyEffect ) {
				anomaly = Object.Cast(this);
				sound = SEffectManager.PlaySoundOnObject(m_AnomalySound, anomaly);
				Print("[RPLA] :: Spooked someone out!");
			}

			if (sound)
				sound.SetSoundAutodestroy(true);
		}
	}

	override void EEDelete(EntityAI parent) {
		if( !m_AnomalyEffect ) {
			m_AnomalyEffect.Stop();
			Print("[RPLA] :: Anomaly<Arctotherium> Deleted.");
		}
	}
}
