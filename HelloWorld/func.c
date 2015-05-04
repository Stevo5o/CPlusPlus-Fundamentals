// func.c 
#include <stdio.h>
#include "func.h" // declaration

int main(int argc, char ** argv) {	
	func();

	for (int i = 0; i < 5; i++)
	{
		printf("i is %d\n", i);
	}
	return 0;
}

void func() {
	printf("This is in the function\n");
} // definition