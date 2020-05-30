// big_number.cpp
// Integer ranges and arbitrary precision integers
#include <iostream>
#include <limits>
#include <string>
#include "../include/bignumber.h"

using namespace std;

int main() {
    cout << "maximum long long integer value: " << std::numeric_limits<long long>::max() << endl;
    // use the maximum long long fundamental type value in calculations
    long long value1 {9'223'372'036'854'775'807LL}; //max long value

    cout << "long long value1: " << value1 << "\nvalue1 - 1 = " 
            << value1 - 1 << "\nvalue1 + 1 = " << value1 + 1; //result is undefined

    // use an aribitrary precision integer
    BigNumber value2 {value1};

    cout << "\n\nBigNumber value2: " << value2 << "\nvalue2 - 1= " 
            << value2 - 1  << "\nvalue2 + 1 = " << value2 + 1 ;
    
    // powers of 100,000,000 with long long
    long long value3 {100'100'100};

    cout << "\n\nvalue3: " << value3;

    int counter {2};

    while (counter <= 5) {
        value3 *= 100'000'000; // quickly exceeds maximum long long value
        cout << "\nvalue3 to the power " << counter << ": " << value3;
        ++counter;
    }
    // powers of 100,000,000 with BigNumber
    BigNumber value4 {100'000'000};
    cout << "\n\nvalue4: " << value4 << endl;

    counter = 2;

    while (counter <= 5) {
        cout << "value3.pow(" << counter << "): " 
            << value4.pow(counter) << endl;
            ++ counter;
    }
    cout << endl;
}
