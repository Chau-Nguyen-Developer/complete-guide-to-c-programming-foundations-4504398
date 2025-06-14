#include <stdio.h>
void doubleValue(void)
{
  auto int a = 15;
  printf("Double of %d is %d.\n", a, a << 1);
}
int main()
{
  puts("Calling the double function.");
  doubleValue();
  puts("Done.");
  return 0;
}