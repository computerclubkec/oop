// WAP to show how do you throw only specified excepton from a function.

#include <iostream>

using namespace std;

// Custom exception class
class CustomException {
public:
    const char* what() const {
        return "Custom Exception: This is a specified exception.";
    }
};

// Function that throws a specific exception
void throwError() {
    throw CustomException();
}

int main() {
    try {
        throwError();
    } 
    catch (CustomException exception) {
        cout << "Caught Exception: " << exception.what() << endl;
    }
    return 0;
}


