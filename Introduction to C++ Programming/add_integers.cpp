// add_integers.cpp
// Addition program that displays the sum of two integers
#include <iostream> // enables program to perform input and output

// function main begins program execution
int main() {
	// declaring and initializing variables
	int num1 = 0; // first integer to add (initialized to 0)
	int num2 = 0; // second integer to add (initialized to 0)
	int sum = 0; // sum of both integers (initialized to 0)

	std::cout << "Enter first integer: ";
	// prompt user for data
	std::cin >> num1; // read first integer from user into num1

	std::cout << "Enter second integer: ";
	// prompt user for data
	std::cin >> num2; // read second integer from user into num2

	sum = num1 + num2; // perform arithmetic; store result in sum

	std:: cout << "Sum is " << sum << std::endl; // display sum; end line

} // end function main
