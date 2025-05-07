#include <stdio.h>

int main()
{
	char c;
	int i;
	float f;
	double d;

	/* input */
	printf("Type a character: ");
	// Scan in address.
	// The scanf function reads in the input.
	// First agrument: the type of data. Second argument: the variable's address.
	scanf("%c", &c);
	printf("Type an integer: ");
	scanf("%d", &i);
	printf("Type a small value: ");
	scanf("%f", &f);
	printf("Type a huge value: ");
	scanf("%lg", &d);

	/* output */
	// Don't need to pass in the address of data in the printf function.
	printf("\nCharacter: %c\n", c);
	printf("Integer: %d\n", i);
	printf("Single-precision: %f\n", f);
	printf("Double-precision: %lg\n", d);
	return 0;
}

// Another data type: "void" data type
/*Void for no data type or an undefined data type.
This type comes into play for allocating memory
and referencing functions that return no value or accept no argument.
(used when allocating memory and used for function definitions)


Programming language C has no string or text data type.
An array of char variables is used for strings.

*/