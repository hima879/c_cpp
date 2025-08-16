// Program Name: PassByReferenceDemo
#include <bits/stdc++.h> // include all standard C++ libraries
using namespace std;

// Function to demonstrate "pass by reference" behavior with arrays
// When an array is passed to a function, its reference (memory address) is passed
// So changes inside the function reflect back in the original array
void doSomething(int arr[], int n) {
    arr[0] += 100; // add 100 to the first element
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5; // size of array
    int arr[n]; // declare array of size n
    
    // input elements into the array
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // call the function (array is passed by reference)
    doSomething(arr, n);

    // print value of first element again in main to show it was modified
    cout << "Value inside main after function call: " << arr[0] << endl;

    return 0;
}
