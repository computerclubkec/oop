 // WAP to show single inheritance with the derived class accessing protected members of the base class.

#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    // Protected member of the base class
    int protectedData;

public:
    // Constructor to initialize protected members
    Base(int value) : protectedData(value) {}
};

// Derived class inheriting from the Base class
class Derived : public Base {
public:
    // Constructor of the derived class
    Derived(int value) : Base(value) {}

    // Public function in the derived class that accesses the base class's protected data
    void displayProtectedData() {
        cout << "Accessing protected data from Base class in Derived class: " << protectedData << endl;
    }
};

int main() {
    // Creating object of the Derived class and passing value to base class constructor
    Derived obj(42);

    // Calling the method in the Derived class to display the protected member
    obj.displayProtectedData();

    return 0;
}
