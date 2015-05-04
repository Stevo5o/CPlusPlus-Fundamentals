// storage class
#include <stdio.h>

extern void func(); // in a differnet source file
extern int var;

// separation of concerns(SoC)
int main(int argc, char ** argv) {
	func();
	printf("The extern var is %d\n", var);
	int count = 7; // auto storage inside block 
	for (int i = 0; i < count; i++)
	{
		static int number = 4; // permanent storage stays there	& can be reused
		int y = printf("The number is %d\n", number++);
	} // end for loop
	int x = printf("The count is %d\n", count);
	return 0;
} // end main

