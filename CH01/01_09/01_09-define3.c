#include <stdio.h>

// MARCO: a fragment of code given a name
#define charout(a) putc(a, stdout)

int main()
{
	charout('H');
	charout('i');
	charout('!');
	charout('\n');
	return 0;
}
