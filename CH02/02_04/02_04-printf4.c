#include <stdio.h>

int main()
{
	float pi = 3.14159;
	printf("The value of pi: %.2f\n", pi);

	float temperature = 90.123456789;
	printf("0. Origingal value: %f\n", temperature);
	printf("1. With %%.9: %.9f\n", temperature);
	printf("2. With %%.15: %.15f\n", temperature);
	puts("Conclusion: With float, the original value was not pretained.");
	puts("Only correct to 5 digit after decimal place.");

	//---------------------
	puts("Let's try with type double.");
	double d_pi = 90.123456789;
	puts("Original value is 90.123456789.");
	printf("0. With %%lg place holder: %lg\n", d_pi);
	puts("Only correct to 3 decimal place.");
	printf("1. With %%.9G: %.9G\n", d_pi);
	puts("Return 9 digits and correct up to 6 decimal place.");
	printf("2. With %%.9g: %.9g\n", d_pi);
	puts("Like above.");
	printf("3. With %%.11G: %.11G\n", d_pi);
	puts("Able to retain the original number.");
	printf("4. With %%.15G: %.15G\n", d_pi);
	puts("No zeros are added to the end.");

	return 0;
}
