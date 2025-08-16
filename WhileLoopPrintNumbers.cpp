// Program Name: WhileLoopPrintNumbers.cpp
// Description: This program prints numbers from 1 to 10 
//              using a while loop in C++.
// Author: [Your Name]
// Date: [Current Date]

#include <iostream>  // Standard input-output library
using namespace std;

int main() {
    int i = 1;  // Initialize counter variable

    // --- While Loop ---
    // Condition: Repeat as long as i <= 10
    while (i <= 10) {
        cout << i << endl; // Print the current value of i
        i++;               // Increment i by 1
    }

    return 0; // Program ends
}
