// helloworld.c
// boolean  true = 1 /false = 0
#include <stdio.h>

// separation of concerns(SoC)
int main(int argc, char ** argv) {
	int count = 5; // declare and define var
	char * s = "Hello, World!\n";
	for (int i = 0; i < count; i++) 
	{
		printf("i is %d\n", i);
		int x = printf(s) * 5; // expressions in a statement
		printf("printf s string returned %d chars\n", x); // printf value returns 70 statement
	} // end for loop
	return 0; // excution was successful 0 = (EXIT_SUCCESS) 1 = (EXIT_FAILURE) 
}