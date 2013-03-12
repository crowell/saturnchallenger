#include "ops-linux.h"


gboolean Monitor(const char* command) {
  if(ControlMessageWrite(0xef00, command, strlen(command)+1, LONG_TIMEOUT)==TRUE) {
    Log("monitor command succeeded: %s", command);
    return TRUE;
  }
  Log("monitor command failed");
  return FALSE;
}




