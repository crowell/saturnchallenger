#include "ops-linux.h"

gboolean EnableMassStorage() {

  if (Monitor("wl 8013dee8 0xa") == TRUE) {
    Log("Sent Mass Storage enable command");
    Log(
	       "Press 'PLAYBACK' on the camcorder to enable Mass Storage mode.\n"
	       "\n"
	       "Note: You will need to power-cycle the cam and re-open it to restore\n"
	       "normal communications with Ops for linux"
	       );
    return TRUE;
  } else {
    Log("Failed to send Mass Storage Mode enable command");
  }
  return FALSE;
  
}
