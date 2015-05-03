// helloworld.cpp
#include <iostream>
#include <cstdio>
// namespaces introduced in C++
using namespace std;

int main(int argc, char ** argv) {
	// cout is an object
	cout << "Hello, World!\n"; 
	// if no namespace use std
	std::cout << "Hello, World!\n"; // print Hello, World! and new line
	printf("Hello, World!\n");
	return 0;
}