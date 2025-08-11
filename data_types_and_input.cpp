#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main() {
    // ----- Reading Input -----
    string s1, s2; // Two string variables to store words

    // Prompt user to enter two words
    cout << "Enter two words: ";
    cin >> s1 >> s2; // Reads first two words from input

    // (Optional) If you want to read the rest of the line after s1 and s2:
    // string restOfLine;
    // getline(cin, restOfLine);
    // cout << "Remaining part of line: " << restOfLine << endl;

    // Display the entered words
    cout << "You entered: " << s1 << " " << s2 << endl;

    // ----- Demonstrating char type -----
    char ch = 'a'; // Single character
    cout << "Value of ch is: " << ch << endl;

    // ----- Demonstrating integer types -----
    int a = 10;                   // Standard integer
    long b = 15;                  // Long integer
    long long c = 1500000000LL;   // Long long integer (LL suffix ensures long long type)
    cout << "Value of a (int) is: " << a << endl;
    cout << "Value of b (long) is: " << b << endl;
    cout << "Value of c (long long) is: " << c << endl;

    // ----- Demonstrating floating-point types -----
    float d = 10.5f;  // Float type (f suffix)
    double f = 10.0;  // Double type
    cout << "Value of d (float) is: " << d << endl;
    cout << "Value of f (double) is: " << f << endl;

    // Indicate program finished successfully
    return 0;
}
