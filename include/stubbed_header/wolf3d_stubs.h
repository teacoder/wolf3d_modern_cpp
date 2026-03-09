#pragma once
#ifdef WOLF3D_STUBS

#ifndef O_BINARY
#define O_BINARY 0
#endif
//----------------------------------------------------
// VIDEO (ID_VL / ID_VH)
//----------------------------------------------------
static inline void VL_Startup()  {}
static inline void VL_Shutdown() {}
static inline void VL_WaitVBL(int) {}
static inline void VL_SetVGAPlane(int){}
static inline void VL_LatchToScreen(const void*, int, int, int, int){}
static inline void VL_Plot(int, int, int){}
static inline void VL_Hlin(int, int, int, int){}
static inline void VL_Vlin(int, int, int, int){}
static inline void VL_UpdateScreen(){}

//----------------------------------------------------
// AUDIO (ID_SD / ID_AA / ID_AS)
//----------------------------------------------------
static inline void SD_Startup() {}
static inline void SD_Shutdown(){}
static inline void SD_PlaySound(int){}
static inline void SD_StopSound(){}
static inline void SD_StartMusic(int){}
static inline void SD_MusicOn(){}
static inline void SD_MusicOff(){}

//----------------------------------------------------
// INPUT (ID_IN)
//----------------------------------------------------
typedef struct {
    int dummy;
} ControlInfo;

static inline void IN_Startup(){}
static inline void IN_Shutdown(){}
static inline void IN_ReadControl( ControlInfo*){}
static inline void IN_StartAck(){}
static inline void IN_Ack(){}

//----------------------------------------------------
// TIMER (ID_T)
//----------------------------------------------------
static inline void T_Startup(){}
static inline void T_Shutdown(){}
static inline unsigned long T_GetTimeCount() { return 0; }

//----------------------------------------------------
// MEMORY MANAGER (ID_MM)
//----------------------------------------------------
static inline void MM_Startup(){}
static inline void MM_Shutdown(){}
static inline void MM_GetPtr( void**, unsigned long) {}
static inline void MM_FreePtr(void**){}
static inline void MM_MapEMS(){}
static inline void MM_UnMapEMS(){}

//----------------------------------------------------
// JOYSTICK (ID_JO)
//----------------------------------------------------
static inline void INL_GetJoyDelta(int*, int*){}

#endif // WOLF3D_STUBS
