#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation for a single integer
    int *p = new int;
    if (!p) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Assigning value to the dynamically allocated memory
    *p = 42;
    cout << "Dynamically allocated integer value: " << *p << endl;

    // Dynamic memory allocation for an array of integers
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    if (!arr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Assigning values to the dynamically allocated array
    cout << "Enter " << n << " integers for the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Displaying the values stored in the dynamically allocated array
    cout << "Dynamically allocated array values: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocating the dynamically allocated memory
    delete p;
    delete[] arr;

    return 0;
}
