#include <stdio.h>

static int sharedValue = 5;
void incrementValue()
{
  sharedValue = sharedValue * 2;
}

int main()
{
  incrementValue();
  printf("%d\n", sharedValue);
  return 0;
}