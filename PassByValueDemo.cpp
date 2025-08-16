// Program Name: PassByValueDemo.cpp
// Description: This program demonstrates "Pass by Value" in C++.
//              When a variable is passed by value, a copy is made.
//              Changes inside the function do not affect the original variable.


#include <iostream> // Standard input-output library
using namespace std;

// --- Function Definition ---
// Function that takes an integer by value (copy created)
void doSomething(int num) {
    cout << "Initial value inside function: " << num << endl;

    num += 10; // Modify local copy
    cout << "After adding 10 (inside function): " << num << endl;

    num += 10;
    cout << "After adding another 10 (inside function): " << num << endl;

    num += 10;
    cout << "After adding another 10 (inside function): " << num << endl;
}

// --- Main Function ---
int main() {
    int num = 5; // Original variable
    cout << "Original value before function call: " << num << endl;

    doSomething(num); // Pass by value (copy is passed)

    cout << "Original value after function call: " << num << endl;

    return 0;
}
