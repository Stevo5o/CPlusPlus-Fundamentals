// helloworld.c
// boolean  true = 1 /false = 0
#include <stdio.h>

// separation of concerns(SoC)
int main(int argc, char ** argv) {
	for (int i = 0; i < 5; i++) 
	{
		printf("i is %d\n", i);
		int x = printf("Hello, World!\n") * 5; // expressions in a statement
		printf("printf returned %d\n", x); // printf value returns 70 statement

	}
	return 0; // excution was successful 0 = (EXIT_SUCCESS) 1 = (EXIT_FAILURE) 
}