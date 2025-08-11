#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std;

int main() {
    // ----- Program: Check if the user is an adult -----

    int age; // Variable to store the user's age

    // Prompt the user for input
    cout << "Enter your age: ";
    cin >> age; // Read the age from the user

    // Check the age and print the result
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are not an adult." << endl;
    }

    // Program execution successful
    return 0;
}
