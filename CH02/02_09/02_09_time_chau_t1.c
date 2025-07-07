#include <stdio.h>
#include <time.h>

int main()
{
  time_t now;
  time(&now);
  printf("This is function time: %ld\n", time(&now));
  // printf("This is function time: %s\n", time(&now)); --> This will cause segmentation fault.
  printf("This is function ctime: %s\n", ctime(&now));
  return 0;
}