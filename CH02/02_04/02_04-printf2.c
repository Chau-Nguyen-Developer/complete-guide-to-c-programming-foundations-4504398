#include <stdio.h>

int main()
{
	int a = 65;

	printf("1. The value of 'a' is %c.\n", a);
	// Will print out A. Treat number 65 as ASCII code.
	// Number 65 --> Upper case A.

	printf("2. The value of 'a' is %d.\n", a);
	// Treat number 65 as integer 65.

	printf("2. The value of 'a' is %f.\n", a);
	//incorrect data type. Integer can be cast/ interpreted as char, but not for double. 
	return 0;
}

