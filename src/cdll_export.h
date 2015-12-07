#include <cdll_int.h>
#include <APIProxy.h>

typedef struct cl_exportfuncs_s
{
	INITIALIZE_FUNC Initialize;
	HUD_INIT_FUNC HUD_Init;
	HUD_VIDINIT_FUNC HUD_VidInit;
	HUD_REDRAW_FUNC HUD_Redraw;
	HUD_UPDATECLIENTDATA_FUNC HUD_UpdateClientData;
	HUD_RESET_FUNC HUD_Reset;
	HUD_CLIENTMOVE_FUNC HUD_PlayerMove;
	HUD_CLIENTMOVEINIT_FUNC HUD_PlayerMoveInit;
	HUD_TEXTURETYPE_FUNC HUD_PlayerMoveTexture;
	HUD_IN_ACTIVATEMOUSE_FUNC IN_ActivateMouse;
	HUD_IN_DEACTIVATEMOUSE_FUNC IN_DeactivateMouse;
	HUD_IN_MOUSEEVENT_FUNC IN_MouseEvent;
	HUD_IN_CLEARSTATES_FUNC IN_ClearStates;
	HUD_IN_ACCUMULATE_FUNC IN_Accumulate;
	HUD_CL_CREATEMOVE_FUNC CL_CreateMove;
	HUD_CL_ISTHIRDPERSON_FUNC CL_IsThirdPerson;
	HUD_CL_GETCAMERAOFFSETS_FUNC CL_CameraOffset;
	HUD_KB_FIND_FUNC KB_Find;
	HUD_CAMTHINK_FUNC CAM_Think;
	HUD_CALCREF_FUNC V_CalcRefdef;
	HUD_ADDENTITY_FUNC HUD_AddEntity;
	HUD_CREATEENTITIES_FUNC HUD_CreateEntities;
	HUD_DRAWNORMALTRIS_FUNC HUD_DrawNormalTriangles;
	HUD_DRAWTRANSTRIS_FUNC HUD_DrawTransparentTriangles;
	HUD_STUDIOEVENT_FUNC HUD_StudioEvent;
	HUD_POSTRUNCMD_FUNC HUD_PostRunCmd;
	HUD_SHUTDOWN_FUNC HUD_Shutdown;
	HUD_TXFERLOCALOVERRIDES_FUNC HUD_TxferLocalOverrides;
	HUD_PROCESSPLAYERSTATE_FUNC HUD_ProcessPlayerState;
	HUD_TXFERPREDICTIONDATA_FUNC HUD_TxferPredictionData;
	HUD_DEMOREAD_FUNC Demo_ReadBuffer;
	HUD_CONNECTIONLESS_FUNC HUD_ConnectionlessPacket;
	HUD_GETHULLBOUNDS_FUNC HUD_GetHullBounds;
	HUD_FRAME_FUNC HUD_Frame;
	HUD_KEY_EVENT_FUNC HUD_Key_Event;
	HUD_TEMPENTUPDATE_FUNC HUD_TempEntUpdate;
	HUD_GETUSERENTITY_FUNC HUD_GetUserEntity;
	HUD_VOICESTATUS_FUNC HUD_VoiceStatus;
	HUD_DIRECTORMESSAGE_FUNC HUD_DirectorMessage;
	HUD_STUDIO_INTERFACE_FUNC HUD_GetStudioModelInterface;
	HUD_CHATINPUTPOSITION_FUNC HUD_ChatInputPosition;
	HUD_GETPLAYERTEAM HUD_GetPlayerTeam;
	CLIENTFACTORY ClientFactory;
}
cl_exportfuncs_t;

extern cl_exportfuncs_t gExportfuncs;
extern cl_exportfuncs_t gAudClientFuncs;
extern cl_exportfuncs_t gRefClientFuncs;
extern cl_exportfuncs_t gCkfClientFuncs;