// WAP to show passing argument as reference

#include <iostream>
using namespace std;

// Function to swap two numbers using reference parameters
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Calling the function with arguments passed by reference
    swap(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
