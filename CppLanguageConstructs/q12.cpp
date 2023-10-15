// WAP to show passing argument as reference

#include <iostream>
using namespace std;

// Function to modify the value of the argument using reference
void modifyValue(int &value) {
    value = 100; // Modifying the value of the parameter directly
}

int main() {
    int number = 50;

    cout << "Number before modification: " << number << endl;

    // Calling the function and passing the variable by reference
    modifyValue(number);

    cout << "Number after modification: " << number << endl;

    return 0;
}

