// Debug
#define DEBUG 										true
#define DEBUG_FSM 									false
#define DEBUG_SHOW_ERRORS							true
#define DEBUG_SHOW_LOGS								true

// 3DEN
#define FROM_EDEN									(!isNull (findDisplay 313))

// Common
#define MAX_PLAYERS 								4
#define ISPUBLIC									true
#define ISLOCAL										false
#define TARGET_ALL									0
#define TARGET_SERVER								2
#define VIEW_DISTANCE								1000
#define TERRAIN_GRID								12.5
#define SKIP_INTRO_HOLD_MIN_TIME					1.4
#define RESPAWN_TIME								10
#define MISSION_COUNT								7

// Mission manager
#define VAR_SS_STATE								"BIS_coop_campaign_ss_state"
#define VAR_SS_PRELOAD_PLAYERS						"BIS_coop_campaign_ss_preloadPlayers"
#define VAR_SS_INTRO_PLAYERS						"BIS_coop_campaign_ss_introPlayers"
#define VAR_SS_LOADOUT_PLAYERS						"BIS_coop_campaign_ss_loadoutPlayers"

// Mission manager states
#define STATE_WAITING								"Waiting"
#define STATE_INTRO									"Intro"
#define STATE_LOADOUT								"Loadout"
#define STATE_STARTED								"Started"

// Mission manager events
#define EVENT_WAITING								"BIS_coop_campaign_ss_missionWaiting"
#define EVENT_INTRO									"BIS_coop_campaign_ss_missionIntro"
#define EVENT_LOADOUT								"BIS_coop_campaign_ss_missionLoadout"
#define EVENT_STARTED								"BIS_coop_campaign_ss_missionStarted"

// Mission manager misc
#define VAR_SS_PRELOAD_FINISHED						"BIS_coop_campaign_ss_preloadFinished"
#define VAR_SS_CAMERA								"BIS_coop_campaign_ss_camera"
#define VAR_SS_RESPAWN								"BIS_coop_campaign_ss_respawn"
#define VAR_SS_RESPAWN_BODY							"BIS_coop_campaign_ss_respawnBody"
#define VAR_SS_INTRO_VIDEOS							"BIS_coop_campaign_ss_introVideos"
#define VAR_SS_INTRO_VIDEOS_PLAYED					"BIS_coop_campaign_ss_introVideosPlayed"
#define VAR_SS_INTRO_VIDEO_STOPPED					"BIS_coop_campaign_ss_introVideoStopped"
#define VAR_SS_INTRO_VIDEOS_SUBTITLES				"BIS_coop_campaign_ss_introVideosSubtitles"
#define VAR_SS_INTRO_VIDEOS_SUBTITLES_SCRIPT		"BIS_coop_campaign_ss_introVideosSubtitlesScript"
#define VAR_SS_NO_CINEMATICS						"BIS_coop_campaign_ss_noCinematics"
#define VAR_SS_INITIAL_TRANSFORM					"BIS_coop_campaign_ss_initialTransform"
#define VAR_SS_SELECTED_LOADOUT						"BIS_coop_campaign_ss_selectedLoadout"
#define VAR_SS_SAW_INTRO							"BIS_coop_campaign_ss_sawIntro"

// Cinematic mode
#define EVENT_CINEMATIC_MODE_CHANGED				"BIS_coop_campaign_cinematicModeChanged"
#define VAR_IS_CINEMATIC_MODE						"BIS_coop_campaign_isCinematicMode"
#define VAR_CINEMATICS_AFFECT_CAMERA_ONLY			"BIS_coop_campaign_cinematicsAffectCameraOnly"

// Campaign achievements
#define VAR_ACHIEVEMENT_LONE_WOLF					"BIS_coop_campaign_achievement_loneWolf"
#define VAR_ACHIEVEMENT_BETTER_WITH_FRIENDS			"BIS_coop_campaign_achievement_betterWithFriends"
#define VAR_ACHIEVEMENT_BIGGER_PICTURE				"BIS_coop_campaign_achievement_biggerPicture"
#define VAR_ACHIEVEMENT_INTO_THE_FIRE				"BIS_coop_campaign_achievement_intoTheFire"
#define VAR_ACHIEVEMENT_HELL_AND_BACK				"BIS_coop_campaign_achievement_hellAndBack"