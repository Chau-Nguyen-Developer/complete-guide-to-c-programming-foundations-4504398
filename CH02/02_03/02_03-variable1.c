#include <stdio.h>

int main()
{
	char a = 'A';
	int b = 5;
	float c = 14.5;
	double d = 1e9;

	printf("a is %c\n", a);
	// printf("a is \n", a); --> Only print out "a is ".
	printf("b is %d\n", b);
	printf("c is %f\n", c);
	printf("d is %f\n", d);
	printf("b is %d\n", b);
	printf("c is %f\n", c);
	printf("d is %f\n", d);

	return (0);
}

//%c, %d, %f: a specific placeholder represents different data types.
//c: character
//d: decimal (integer)
//f: floating point (fraction)  