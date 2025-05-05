#include <stdio.h>

int main()
{
	// Declares and initializes a character array named "string"
	char string[] = "Greetings, human!\n";
	int index;

	index = 0;
	// loop through each character in the array and print them one by one
	{
		putchar(string[index]);
		index++;
	}

	return (0);
}
