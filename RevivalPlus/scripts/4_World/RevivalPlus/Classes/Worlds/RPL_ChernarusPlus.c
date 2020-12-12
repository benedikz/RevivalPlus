
    /*
     *    Addon: Revival Plus
     *    Script: RPL_ChernarusPlus.c
     *    Author: Tomáš Benedikt; submitted by benedi.kz
     *
     *    © 2020 Tomáš Benedikt
     *
     *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
     *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
     *
     *    <summary>Script override of ChernarusPlusData class.</summary>
     *
     */

modded class ChernarusPlusData extends WorldData
{
	override void Init()
	{
		super.Init();

		m_Sunrise_Jan = 8.54;
		m_Sunset_Jan = 15.52;
		m_Sunrise_Jul = 3.26;
		m_Sunset_Jul = 20.73;

		//            1  2  3   4   5   6   7   8   9  10  11  12
		m_MaxTemps = {2, 3, 9, 12, 24, 36, 34, 32, 18,  9,  3,  2};
		m_MinTemps = {0, 1, 3,  5,  7, 14, 25, 27, 18,  3,  1,  0};
	}
};
