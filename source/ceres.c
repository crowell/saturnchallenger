#include "ops-linux.h"
int main() {
  if (Init() == FALSE)
    return 1;
  if (Open() == FALSE)
    return 1;
  if (Unlock() == FALSE)
    return 1;

}
