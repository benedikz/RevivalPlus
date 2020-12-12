
		/*
		 *    Addon: Revival Plus
		 *		Type: Game Script
		 *    Script: RPL_Constants.c
		 *    Author: Tomáš Benedikt
		 *
		 *    © 2020 Tomáš Benedikt
		 *
		 *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
		 *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
		 *
		 *    <summary>Adjusts Shoe/Glove damage & bleeding.</summary>
		 *
		 */

modded class PlayerConstants
{
	//	SHOE DAMAGE / FEET BLEEDING
	static const float BAREFOOT_MOVEMENT_BLEED_MODIFIER = 0.00875;
	static const float SHOES_MOVEMENT_DAMAGE_PER_STEP = 0.00085;

	//	GLOVE DAMAGE / HAND BLEEDING
	static const float CHANCE_TO_BLEED_SLIDING_LADDER_PER_SEC = 0.00875;
	static const float GLOVES_DAMAGE_SLIDING_LADDER_PER_SEC = 0.00085;
}
