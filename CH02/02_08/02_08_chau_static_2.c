#include <stdio.h>
void counter()
{
  static int myCount = 0;
  ++myCount;
  printf("My count: %d\n", myCount);
}
int main()
{
  counter(); //output: 1
  counter(); //output: 2
  counter(); //output: 3
}