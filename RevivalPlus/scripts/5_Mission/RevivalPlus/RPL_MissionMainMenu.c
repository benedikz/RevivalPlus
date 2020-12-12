/* MODDED MAIN MENU V 2
modded class MainMenu extends UIScriptedMenu
{
	protected Widget				discord_button;
	protected Widget				map_button;
	protected Widget				web_button;

	// <test>
	protected TextWidget			m_PlayPauseText;
	protected VideoWidget			m_Video;
	protected ref Timer				m_VideoPlayTimer;
	protected ref WidgetFadeTimer	m_VideoFadeTimer;
	// </test>

	Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "RevivalPlus/gui/MainMenu/MainMenu.layout" );

		m_Play = layoutRoot.FindAnyWidget( "play" );
		m_CustomizeCharacter = layoutRoot.FindAnyWidget( "customize_character" );
		m_SettingsButton = layoutRoot.FindAnyWidget( "settings" );
		m_Exit = layoutRoot.FindAnyWidget( "exit" );
		discord_button = layoutRoot.FindAnyWidget( "discord" );
		map_button = layoutRoot.FindAnyWidget( "twitter" );
		web_button	= layoutRoot.FindAnyWidget( "VK" );

		m_Version	= TextWidget.Cast( layoutRoot.FindAnyWidget( "version" ) );
		m_Stats	= new MainMenuStats( layoutRoot.FindAnyWidget( "stats_root" ) );
		m_Mission	= MissionMainMenu.Cast( GetGame().GetMission() );
		m_LastFocusedButton = m_Play;
		m_ScenePC	= m_Mission.GetIntroScenePC();

		if( m_ScenePC )
		{
			m_ScenePC.ResetIntroCamera();
		}
		m_PlayerName = TextWidget.Cast( layoutRoot.FindAnyWidget("character_name") );

		string version;
		GetGame().GetVersion( version );
		m_Version.SetText( version );

		GetGame().GetUIManager().ScreenFadeOut(0);
		SetFocus( null );
		Refresh();
		GetDayZGame().GetBacklit().MainMenu_OnShow();

		g_Game.SetLoadState( DayZLoadState.MAIN_MENU_CONTROLLER_SELECT );

		return layoutRoot;
	}

	override bool OnClick( Widget w, int x, int y, int button )
	{
		if( button == MouseState.LEFT )
		{
			if( w == m_Play )
			{
				m_LastFocusedButton = m_Play;
				//g_Game.ConnectFromServerBrowser( "127.0.0.1", 2302, "" ); // change to ip of your server
				return true;
			}
			else if ( w == m_CustomizeCharacter )
			{
				OpenMenuCustomizeCharacter();
				return true;
			}
			else if ( w == discord_button )
			{
				GetGame().OpenURL("https://discord.gg/v9HVhHS"); // discord button, change
				return true;
			}
			else if ( w == web_button )
			{
				GetGame().OpenURL("https://revival-rp.net/"); // vk
				return true;
			}
			else if ( w == map_button )
			{
				GetGame().OpenURL("https://infinity-roleplay.site/a/mapa.php"); // twitter
				return true;
			}
			else if ( w == m_SettingsButton )
			{
				OpenSettings();
				return true;
			}
			else if ( w == m_Exit )
			{
				Exit();
				return true;
			}
		}
		return false;
	}

	void OnChangeCharacter()
	{
		if ( m_ScenePC && m_ScenePC.GetIntroCharacter() )
		{
			int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
			m_ScenePC.GetIntroCharacter().CreateNewCharacterById( charID );
			m_PlayerName.SetText( "#c_welcome" + " " + m_ScenePC.GetIntroCharacter().GetCharacterNameById( charID ) );

			Widget w = m_CustomizeCharacter.FindAnyWidget( m_CustomizeCharacter.GetName() + "_label");

			if ( w )
			{
				TextWidget text = TextWidget.Cast( w );

				if( m_ScenePC.GetIntroCharacter().IsDefaultCharacter() )
				{
					text.SetText("#layout_main_menu_customize_char");
				}
				else
				{
					text.SetText("#layout_main_menu_rename");
				}
			}
			if (m_ScenePC.GetIntroCharacter().GetCharacterObj() )
			{
				if ( m_ScenePC.GetIntroCharacter().GetCharacterObj().IsMale() )
					m_ScenePC.GetIntroCharacter().SetCharacterGender(ECharGender.Male);
				else
					m_ScenePC.GetIntroCharacter().SetCharacterGender(ECharGender.Female);
			}

			//update character stats
			m_Stats.UpdateStats();
		}
	}

	override void LoadMods() {}

	override void Play() {}
};
*/

modded class MissionMainMenu
{
	override void PlayMusic()
	{
		ref SoundParams soundParams			= new SoundParams( "RPL_Soundset_MainMenuOST" );
		ref SoundObjectBuilder soundBuilder	= new SoundObjectBuilder( soundParams );
		ref SoundObject soundObject			= soundBuilder.BuildSoundObject();
		soundObject.SetKind( WaveKind.WAVEMUSIC );
		m_MenuMusic = GetGame().GetSoundScene().Play2D(soundObject, soundBuilder);
		m_MenuMusic.Loop( true );
		m_MenuMusic.Play();
	}
};
