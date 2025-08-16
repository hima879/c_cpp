// Program Name: PassByValueStringDemo.cpp
// Description: Demonstrates "Pass by Value" with strings in C++.
//              A copy of the string is passed to the function,
//              so modifications inside the function do not affect the original.

#include <iostream>
using namespace std;

// Function that takes a string by value (copy is passed)
void doSomething(string s) {
    s[0] = 'C'; // Modify the first character of the local copy
    cout << "Inside function (modified copy): " << s << endl;
}

int main() {
    string s = "P Programming"; // Original string
    cout << "Before function call: " << s << endl;

    doSomething(s); // Pass by value (copy of 's' is passed)

    cout << "After function call (original unchanged): " << s << endl;

    return 0;
}
