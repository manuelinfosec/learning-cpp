// fix_increment.cpp
// Prefix increment and postfix increment operators.
#include <iostream>
using namespace std;

int main() {
    // demostrate postfix increment operator
    int c {5};
    cout << "c before post-increment: " << c << endl; // prints 5
    cout << "\tpost-incrementing c: " << c++ << endl; // prints 5
    cout << "c after post-increment: " << c << endl; // prints 6

    cout << endl; // skip a line

    // demonstrate prefix increment operator
    c = 5;
    cout << "c before pre-increment: " << c << endl; // prints 5
    cout << "\tpre-incrementing c: " << ++c << endl; // prints 6
    cout << "c after pre-increment: " << c << endl; // prints 6   
    
    return 0;
}