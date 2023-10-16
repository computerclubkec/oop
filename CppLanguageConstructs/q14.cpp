// WAP to swap 2 values using function and reference variable. Display result from main

#include <iostream>
using namespace std;

// Function to swap two values using reference variables
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Calling the function to swap the values
    swapValues(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
