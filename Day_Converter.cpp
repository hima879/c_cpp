#include <bits/stdc++.h> // Include all standard C++ libraries
using namespace std;

int main() {
    // Program: Print the day name based on the day number

    int day; // Variable to store day number

    // Prompt the user for input
    cout << "Enter a day number (1-7): ";
    cin >> day;

    // Switch statement to determine the day
    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day (please enter a number from 1 to 7)";
    }

    return 0; // Program executed successfully
}
