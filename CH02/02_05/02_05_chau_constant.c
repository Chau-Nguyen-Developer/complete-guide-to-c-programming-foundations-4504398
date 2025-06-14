#include <stdio.h>
#define MAX 20

/* Generate a line */
void line(int givenValue)
{
  for (int i = 0; i < givenValue; ++i)
  {
    if (i >= MAX)
    {
      break;
    }
    putchar('-');
  }
  putchar('\n');
}

int main()
{
  // Read the input from user
  int userInput;
  printf("Please enter a positive number less than %d: ", MAX);
  scanf("%d", &userInput);
  printf("You entered: %d\n", userInput);

  // Pass user input into the "line" function as argument
  line(userInput);
  return 0;
}