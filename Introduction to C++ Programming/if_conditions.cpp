// if_conditions.cpp
#include <iostream>  // enables program to perform input and output

using std::cout; //program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

// function main begins program execution
int main() {
	int num1 = 0; // first integer to compare (initialized to 0)
	int num2 = 0; // second integer to compare (initialized to 0)
	
	cout << "Enter two integers to compare: "	; // prompt user for data

	cin >> num1 >> num2; //read two integers from user

	if (num1 == num2) {
		cout << num1 << " == " << num2<< endl;
	}

	if (num1 != num2) {
		cout << num1 << " != " << num2 << endl;
	}

	if (num1 < num2) {
		cout << num1 << " < " << num2 << endl;
	}

	if (num1 > num2) {
		cout << num1 << " > " << num2 << endl;
	}

	if (num1 <= num2) {
		cout << num1 << " <= " << num2 << endl;
	}

	if (num1 >= num2) {
		cout << num1 << " >= " << num2 << endl;
	}
}