// Program Name: FunctionsDemo.cpp
// Description: This program demonstrates the use of functions in C++.
//              1. printName() -> prints a greeting with the given name.
//              2. sum_Method1() -> computes sum and prints result directly.
//              3. sum_Method2() -> computes sum and returns result.
// Author: [Your Name]
// Date: [Current Date]

#include <iostream> // Standard input-output library
using namespace std;

// --- Function Definitions ---

// Function to print a personalized greeting
void printName(const string& name) {
    cout << "Hey " << name << "!" << endl;
}

// Function to return the sum of two numbers (Method 2: with return)
int sum_Method2(int a, int b) {
    return a + b;
}

// Function to print the sum of two numbers (Method 1: direct output)
void sum_Method1(int a, int b) {
    int c = a + b;
    cout << "Sum (Method 1 - direct print): " << c << endl;
}

// --- Main Function ---
int main() {
    // Input and print name
    string name;
    cout << "Enter your name: ";
    cin >> name;
    printName(name);

    // Input numbers
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Using sum_Method2 (returns result)
    int add = sum_Method2(a, b);
    cout << "Sum (Method 2 - with return): " << add << endl;

    // Using sum_Method1 (direct print)
    sum_Method1(3, 4); // Example call with fixed values

    return 0;
}
