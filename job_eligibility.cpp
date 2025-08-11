#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std;

int main() {
    /* 
       Program: Job Eligibility Checker
       Rules:
       - Below 18 → Not eligible for job
       - 18 to 54 → Eligible for job
       - 55 to 57 → Eligible for job, but retirement soon
       - Above 57 → Retirement time
    */

    int age; // Variable to store user's age

    // Ask the user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Check eligibility based on age
    if (age < 18) {
        cout << "Not eligible for job";
    } 
    else if (age >= 18 && age < 55) {
        cout << "Eligible for job";
    } 
    else if (age >= 55 && age <= 57) {
        cout << "Eligible for job, but retirement soon";
    } 
    else if (age > 57) {
        cout << "Retirement time";
    } 
    else {
        cout << "ERROR"; // This case is unlikely to occur
    }

    return 0; // Program executed successfully
}
