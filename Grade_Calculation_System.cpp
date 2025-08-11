#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std;

int main() {
    /* 
       Program: Grade Calculation System
       Rules:
       Below 25       → F
       25 to 45       → E
       45 to 50       → D
       50 to 60       → C
       60 to 80       → B
       Above 80       → A
    */

    int marks; // Variable to store the marks entered by the user

    // Ask user for input
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Grade calculation using if-else ladder
    if (marks < 0 || marks > 100) {
        cout << "Invalid input. Marks should be between 0 and 100." << endl;
    } 
    else if (marks < 25) {
        cout << "Your grade is F" << endl;
    } 
    else if (marks < 45) { // 25 to 44
        cout << "Your grade is E" << endl;
    } 
    else if (marks < 50) { // 45 to 49
        cout << "Your grade is D" << endl;
    } 
    else if (marks < 60) { // 50 to 59
        cout << "Your grade is C" << endl;
    } 
    else if (marks < 80) { // 60 to 79
        cout << "Your grade is B" << endl;
    } 
    else { // 80 to 100
        cout << "Your grade is A" << endl;
    }

    return 0; // Program executed successfully
}
