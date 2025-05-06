#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 10
// this defined constant COUNT is expanded by the compiler throughout the code wherever it appears.
// COUNT is replaced by 10 at compile time.
// Advantage: Reduce run time. Also, if I want to change the value in multiple locations int he source code file,
// I only need to change the defined constant's value here once.

int main()
{
	int a;

	srand((unsigned)time(NULL));
	for (a = 0; a < COUNT; a++)
		printf("%3d ", rand() % 100 + 1);
	putchar('\n');

	return 0;
}
