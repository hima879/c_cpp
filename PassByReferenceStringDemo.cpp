// Program Name: PassByReferenceStringDemo.cpp
// Description: Demonstrates "Pass by Reference" with strings in C++.
//              When a string is passed by reference, no copy is made.
//              Changes inside the function affect the original string.

#include <iostream>
using namespace std;

// Function that takes a string by reference
void doSomething(string &s) {
    s[0] = 'C'; // Modify the first character of the original string
    cout << "Inside function (original modified): " << s << endl;
}

int main() {
    string s = "P Programming"; // Original string
    cout << "Before function call: " << s << endl;

    doSomething(s); // Pass by reference (original is modified)

    cout << "After function call (original changed): " << s << endl;

    return 0;
}
