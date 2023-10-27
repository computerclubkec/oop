// WAP to show how do you throw only specified excepton from a function.

#include <iostream>
#include <exception>
using namespace std;

// Custom exception class
class MyException : public exception {
public:
    const char* what() const throw() {
        return "Custom Exception";
    }
};

// Function that throws a specific exception
void customExceptionFunction(int option) {
    if (option == 1) {
        throw MyException();
    } else {
        // Handle other cases or throw a different exception here if needed
    }
}

int main() {
    try {
        int option;
        cout << "Enter 1 to throw Custom Exception, 2 for other exception: ";
        cin >> option;
        customExceptionFunction(option);
    }
    catch (MyException &e) {
        cout << "Caught Custom Exception: " << e.what() << endl;
    }
    catch (exception &e) {
        cout << "Caught an exception: " << e.what() << endl;
    }
    return 0;
}
