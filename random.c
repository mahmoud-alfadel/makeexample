//random number generation function
#include <stdlib.h>

int capped_rand(int cap)
{
  return rand() / cap;
}
