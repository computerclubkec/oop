// WAP to show return by reference

#include <iostream>
using namespace std;

// Function to find the maximum of two numbers and return it by reference
int& findMax(int &a, int &b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 5, y = 10;

    // Calling the function and assigning the returned reference to a variable
    int &maxRef = findMax(x, y);

    cout << "x = " << x << ", y = " << y << endl;
    cout << "Maximum value: " << maxRef << endl;

    // Modifying the maximum value through the reference
    maxRef = 20;

    cout << "Modified maximum value: " << maxRef << endl;
    cout << "Updated x = " << x << ", y = " << y << endl;

    return 0;
}
