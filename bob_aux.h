#ifndef _BOB_AUX_
#define _BOB_AUX_

#ifdef _BOB_DEBUG

#define BOB_TRACE(s) Serial.println(s);
#else
#define BOB_TRACE(s)
#endif

#endif
