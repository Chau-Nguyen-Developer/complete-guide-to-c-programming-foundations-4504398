#include <stdio.h>

char *myname(void)
// the char* mean this function returns a pointer to a character
// which is typically used to return a string (of characters) in C
{
	// char me[] = "Dan Gookin";
	// Fix:
	static char me[] = "Chau Nguyen";

	return (me);
}

int main()
{
	printf("My name is %s .\n", myname());

	return (0);
}
