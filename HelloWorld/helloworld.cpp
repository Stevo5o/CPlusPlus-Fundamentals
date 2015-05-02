// helloworld.cpp
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char ** argv) {
	string inputString;
	cout << "Type a string: ";
	// cin >> inputString;
	getline(cin, inputString);
	cout << "Input is: " << inputString << endl;
	return 0;
}