class RPL_ImprovisedCan_Shit_Opened extends Edible_Base
{
	Particle m_ParticleEfx;
	protected ref EffectSound m_FliesEffectSound;

	override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra)

		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_ParticleEfx = Particle.PlayOnObject(ParticleList.ENV_SWARMING_FLIES, this, Vector(0, 0.25, 0));

			if (!m_FliesEffectSound)
          PlaySoundSetLoop(m_FliesEffectSound, "Flies_SoundSet", 1.0, 1.0);
		}
	}

	override void EEDelete(EntityAI parent)
	{
		if ( m_ParticleEfx )
				 m_ParticleEfx.Stop();

		if ( m_FliesEffectSound )
				 StopSoundSet(m_FliesEffectSound);
	}
}
