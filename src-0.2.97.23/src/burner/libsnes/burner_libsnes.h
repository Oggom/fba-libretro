#ifndef _BURNER_LIBSNES_H
#define _BURNER_LIBSNES_H

extern int bDrvOkay;
extern int bRunPause;
extern bool bAlwaysProcessKeyboardInput;

#ifdef _MSC_VER
#define snprintf _snprintf
#define ANSIToTCHAR(str, foo, bar) (str)
#endif

extern void InpDIPSWResetDIPs (void);

#endif