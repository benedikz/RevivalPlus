
    /*
     *    Addon: Revival Extension
     *    Script: RPL_TemperatureFix.c
     *    Author: Tomáš Benedikt; submitted by benedi.kz
     *
     *    © 2020 Tomáš Benedikt
     *
     *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
     *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
     *
     *    <summary>Sets Day/Night Temperatures.</summary>
     *
     */

modded class ChernarusPlusData extends WorldData
{
	override void Init()
	{
		super.Init();

		// default = 22
		m_DayTemperature = 18;
		// default = 12
		m_NightTemperature = 14;
	}
};
