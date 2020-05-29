// strings.cpp
// Standard Library string class test program
#include <iostream>
#include <string>

int main() {

	std::string s1 = "happy";
	std::string s2 = "birthday";
	std::string s3; // creates an empty string

	//display the strings and respective lengths
	std::cout << "\ns1: \"" << s1 << "\"; length: " << s1.length();

	std::cout << "\ns2: \"" << s2 << "\"; length: " << s2.length();

	std::cout << "\ns3: \"" << s3 << "\"; length: " << s3.length();

	// compare strings with == and !=
	std::cout << "\n\nThe results of comparing s2 and s1: \n" << std::boolalpha;

	std::cout << "s1 == s2: " << (s1 == s2);
	std::cout << "\ns1 != s2: " << (s1 != s3);

	std::cout << "\n\nTesting if s3 is empty...\n";

	if (s3.empty()) {
		std::cout << "s3 is empty; assigning to s3;\n";
		
		s3 = s1 + s2; // assign s3 the result of concatenating s1 and s2

		std::cout << "s3: \"" << s3 << "\"";
	}

	// testing C++20 string member functions
	std::cout << "\n\ns1 starts with \"ha\": " << s1.starts_with("ha") << std::endl;
	std::cout << "s2 starts with \"ha\": " << s2.starts_with("ha") << std::endl;
	
	std::cout << "s1 ends with \"ay\": " << s1.ends_with("ay") << std::endl;
	std::cout << "s2 ends with \"ay\": " << s2.ends_with("ay") << std::endl;

}