
/*
 *    Addon: Revival Plus
 *    Script: ActionBuildPart.c
 *    Author: Tomáš Benedikt
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
        float time = 1.0;
        m_ActionData.m_ActionComponent = new CAContinuousTime( time );
    }
}
