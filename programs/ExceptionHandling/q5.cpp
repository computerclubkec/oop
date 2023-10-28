// WAP to show specifying exceptions.

#include <iostream>

using namespace std;

// Custom exception classes
class CustomException1 {
};

class CustomException2 {
};

// Function that may throw a specific exception
void someFunction(int option) {
    if (option == 1) {
        throw CustomException1();
    } else if (option == 2) {
        throw CustomException2();
    }
}

int main() {
    try {
        int option;
        cout << "Enter 1 to throw Custom Exception 1, 2 to throw Custom Exception 2: ";
        cin >> option;
        someFunction(option);
    }
    catch (CustomException1) {
        cout << "Caught Custom Exception 1" << endl;
    }
    catch (CustomException2) {
        cout << "Caught Custom Exception 2" << endl;
    }
    return 0;
}
