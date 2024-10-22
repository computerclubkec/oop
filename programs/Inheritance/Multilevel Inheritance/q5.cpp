#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual function to demonstrate polymorphism
    virtual void display() {
        cout << "Displaying from Base class." << endl;
    }

    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

// Derived class 1 (inherits from Base)
class Derived1 : public Base {
public:
    // Overriding the virtual function
    void display() override {
        cout << "Displaying from Derived1 class." << endl;
    }

    ~Derived1() {
        cout << "Derived1 class destructor called." << endl;
    }
};

// Derived class 2 (inherits from Derived1)
class Derived2 : public Derived1 {
public:
    // Overriding the virtual function again
    void display() override {
        cout << "Displaying from Derived2 class." << endl;
    }

    ~Derived2() {
        cout << "Derived2 class destructor called." << endl;
    }
};

int main() {
    // Base class pointer pointing to Derived2 object
    Base* basePtr = new Derived2();

    // Call the virtual function - the most derived class's function will be called
    basePtr->display();  // Calls Derived2's display()

    // Deleting the object, destructors will be called in reverse order
    delete basePtr;

    return 0;
}
