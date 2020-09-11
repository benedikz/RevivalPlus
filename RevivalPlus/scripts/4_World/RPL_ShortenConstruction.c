
  /*
   *    Addon: Revival Extension
   *    Script: RPL_ShortenConstruction.c
   *    Author: Tomáš Benedikt; submitted by H3MII
   *
   *    © 2020 Tomáš Benedikt
   *
   *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
   *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
   *
   *    <summary>Overrides Base-building Construction Action Time.</summary>
   *
   */

modded class ActionBuildPartCB : ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        //Default value = 11
        m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_CONSTRUCT * 1);
    }
};
