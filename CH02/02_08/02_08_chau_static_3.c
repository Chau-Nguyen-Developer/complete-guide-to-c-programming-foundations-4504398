#include <stdio.h>

char *myName()
{
  static char me[] = "Ngoc Chau";
  // with the keyword static, now the variable's value is retained
  // and seen in the output.
  return me;
}

int main()
{
  printf("My name is : %s\n", myName());
  return 0;
}