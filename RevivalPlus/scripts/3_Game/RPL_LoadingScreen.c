
	/*
	 *    Addon: Revival Extension
	 *    Script: RPL_LoadingScreen.c
	 *    Author: Tomáš Benedikt
	 *
	 *    © 2020 Tomáš Benedikt
	 *
	 *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
	 *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
	 *
	 *    <summary>Adds RevivalPlus LoadingScreens into the game.</summary>
	 *
	 */

modded class LoadingScreen {

	void LoadingScreen(DayZGame game) {
		Class.CastTo(m_ImageLogoMid, m_WidgetRoot.FindAnyWidget("ImageLogoMid"));
		Class.CastTo(m_ImageLogoCorner, m_WidgetRoot.FindAnyWidget("ImageLogoCorner"));
		m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);

		TStringArray m_ImageBank = {
			"RevivalPlus/Loading/data/Game/primary_marked_co.edds"
		};
		string random = m_ImageBank.GetRandomElement();

		m_ImageBackground.LoadImageFile(0, random);
		m_ImageBackground.LoadMaskTexture("");
		ProgressAsync.SetUserData(m_ImageBackground);
	}

	override void Show()
	{
		Widget lIcon = m_ImageBackground;
		Widget pText = m_ProgressLoading;
		m_ProgressText.SetText("");
		m_ProgressLoading.SetCurrent( 0.0 );
		m_ImageBackground.SetMaskProgress( 0.0 );

		if ( !m_WidgetRoot.IsVisible() )
		{
			if ( m_DayZGame.GetUIManager().IsDialogVisible() )
			{
				m_DayZGame.GetUIManager().HideDialog();
			}

			if ( m_DayZGame.GetMissionState() == DayZGame.MISSION_STATE_MAINMENU )
			{
				m_ImageWidgetBackground.Show( true );
				m_TextWidgetStatus.Show(true);
			}
			else
			{
				m_ImageWidgetBackground.Show( true );
				m_TextWidgetStatus.Show(false);
			}

			m_WidgetRoot.Show( true );
			m_TextWidgetTitle.SetText( "" );
			m_TextWidgetStatus.SetText( "" );
		}

		ProgressAsync.SetProgressData(pText);
		ProgressAsync.SetUserData(lIcon);
	}
}

modded class LoginQueueBase {

	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadMaskTexture("");

		TStringArray m_ImageBank = {
			"RevivalPlus/Loading/data/Game/primary_marked_co.edds"
		};
		string random = m_ImageBank.GetRandomElement();

		imageWidgetBackground.LoadImageFile(0, random);
		return w;
	}
}

modded class LoginTimeBase {

	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadMaskTexture("");

		TStringArray m_ImageBank = {
			"RevivalPlus/Loading/data/Game/primary_marked_co.edds"
		};
		string random = m_ImageBank.GetRandomElement();

		imageWidgetBackground.LoadImageFile(0, random);
		return w;
	}
}
