#include <iostream>
#include "fmt/format.h"

using namespace std;

int main() {
    string student {"Paul"};
    int grade {87};

    cout << fmt::format("{}'s grade is {}", student, grade) << endl;
}