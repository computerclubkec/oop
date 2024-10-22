#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual function to enable dynamic dispatch
    virtual void display() {
        cout << "Display from Base class." << endl;
    }

    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

// Intermediate derived class (inherits from Base)
class Derived1 : public Base {
public:
    // Overriding the display function from Base class
    void display() override {
        cout << "Display from Derived1 class." << endl;
    }

    ~Derived1() {
        cout << "Derived1 class destructor called." << endl;
    }
};

// Final derived class (inherits from Derived1)
class Derived2 : public Derived1 {
public:
    // Overriding the display function again
    void display() override {
        cout << "Display from Derived2 class." << endl;
    }

    ~Derived2() {
        cout << "Derived2 class destructor called." << endl;
    }
};

int main() {
    // Base class pointer pointing to Derived2 object
    Base* basePtr = new Derived2();

    // Dynamic dispatch happens here - Derived2's display function is called
    basePtr->display();

    // Base class pointer pointing to Derived1 object
    Base* basePtr2 = new Derived1();

    // Dynamic dispatch happens here - Derived1's display function is called
    basePtr2->display();

    // Clean up: destructors will be called in reverse order
    delete basePtr;
    delete basePtr2;

    return 0;
}
