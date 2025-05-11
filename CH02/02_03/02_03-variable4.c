#include <stdio.h>

int main()
{
	// Float variable x is not initialized.
	float x = 3.14;

	printf("The value of %f is unknown\n", x);

	// Might encounter compiler warning.
	// The value output represents whatever data exists in memory at that location.
	// It could be zero, and it also could be some other value.
	// Moral of the story: Always assign a value to a variable before it is used."
	 

	return (0);
}
