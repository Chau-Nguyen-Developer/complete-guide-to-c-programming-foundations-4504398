#include <stdio.h>

int main()
{
	char ch = 'A';
	unsigned x = 100;
	float pi = 3.141590000;

	printf("ch = %c, x = %u, pi = %f\n", ch, x, pi);

	char letter = 'C';
	double money = 3.141590000;
	float money_2 = 3.14159;
	signed k = 10;
	printf("letter: %c, money = %.3lg,,money_2 = %.3f, k = %d", letter, money, money_2, k);

	// The behavior %.3 is different for double and float.
	// The double type returns TOTAL three digits.
	// The float type returns three digits AFTER the decimal place.

	return 0;
}
