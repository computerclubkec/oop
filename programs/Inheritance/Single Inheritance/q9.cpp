// WAP to show single inheritance with a method in the base class that gets called from the derived class.
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Method in the base class
    void displayBaseMessage() {
        cout << "This is a method from the Base class." << endl;
    }
};

// Derived class inheriting from the Base class
class Derived : public Base {
public:
    // Method in the derived class
    void displayDerivedMessage() {
        // Calling method of the Base class
        displayBaseMessage();
        cout << "This is a method from the Derived class." << endl;
    }
};

int main() {
    // Creating object of the Derived class
    Derived obj;

    // Calling the method in the Derived class which internally calls the Base class method
    obj.displayDerivedMessage();

    return 0;
}



