// WAP to demonstrate single inheritance where the base class has private members accessed through public member functions in the derived class.

#include <iostream>
using namespace std;

// Base class
class Base {
private:
    // Private members of the base class
    int privateData;

public:
    // Constructor to initialize private members
    Base(int value) : privateData(value) {}

    // Public function to access private members
    int getPrivateData() const {
        return privateData;
    }
};

// Derived class inheriting from the Base class
class Derived : public Base {
public:
    // Constructor of the derived class
    Derived(int value) : Base(value) {}

    // Public function in the derived class that accesses the base class's private data via a public function
    void displayPrivateData() {
        cout << "Accessing private data from Base class through Derived class: " << getPrivateData() << endl;
    }
};

int main() {
    // Creating object of the Derived class and passing value to base class constructor
    Derived obj(100);

    // Calling the method in the Derived class that accesses the base class's private member
    obj.displayPrivateData();

    return 0;
}
