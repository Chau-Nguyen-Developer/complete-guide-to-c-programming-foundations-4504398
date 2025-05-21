// PROGRAMMER: NGOC CHAU NGUYEN

#include <stdio.h>

int main()
{
  char c;
  printf("Type a character: ");
  scanf("%c", &c);
  printf("Your character: %c\n", c);

  int i;
  printf("Type an integer: ");
  scanf("%d", &i);
  printf("Your integer: %d\n", i);

  float f;
  printf("Type a floating number: ");
  scanf("%f", &f);
  printf("Your floating number: %f\n", f);

  double m;
  printf("Type a very large number: ");
  scanf("%lg", &m);
  printf("Your large number: %lg\n", m);

  return 0;
}
