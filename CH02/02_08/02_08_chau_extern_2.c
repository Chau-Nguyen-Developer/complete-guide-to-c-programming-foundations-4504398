#include <stdio.h>
int a, b;
void sum(void)
{
  extern int a;
  a = 10;
  printf("global a: %d\n", a); // will print 10

  {
    // Create a different scope for local variable.
    int a = 3;
    printf("local a: %d\n", a);
  }
}

int main()
{
  sum();
  return 0;
}