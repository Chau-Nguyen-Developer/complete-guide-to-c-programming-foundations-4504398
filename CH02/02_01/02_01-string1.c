#include <stdio.h>

int main()
{
	//Declares a character array (string) that
	//can hold up to 31 characters and a null terminator (\0).
	char buffer[32];

	//Print out the prompt to the terminal, asking users for input.
	printf("Type your name: ");

	//char *fgets(char *restrict str, int count, FILE *restrict stream);
	//Read at most 31 characters from the given file stream (stdin), 
	//and stores them in the character array pointed to by "buffer". 
	fgets(buffer,32,stdin);
	
	printf("Hello, %s",buffer);
	return 0;
}

/* Note:
char* fgets( char* restrict str, int count, FILE* restrict stream );
Reads at most (count - 1) characters from the given file stream and stores them in the character array pointed to by str.
Parsing stops if a newline character is found (in which case str will contain that newline character) or if end-of-file occurs.
If bytes are read and no errors occur, writes a null character at the position immediately after the last character written to str.
*/