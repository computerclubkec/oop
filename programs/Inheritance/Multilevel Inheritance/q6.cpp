#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Function to be overridden
    virtual void show() {
        cout << "Base class show function." << endl;
    }
    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

// Intermediate derived class (inherits from Base)
class Derived1 : public Base {
public:
    // Overriding the show function from Base class
    void show() override {
        cout << "Derived1 class show function." << endl;
    }
    ~Derived1() {
        cout << "Derived1 class destructor called." << endl;
    }
};

// Final derived class (inherits from Derived1)
class Derived2 : public Derived1 {
public:
    // Overriding the show function from both Base and Derived1 classes
    void show() override {
        cout << "Derived2 class show function." << endl;
    }
    ~Derived2() {
        cout << "Derived2 class destructor called." << endl;
    }
};

int main() {
    // Base class pointer pointing to Derived2 object
    Base* obj = new Derived2();

    // Call the show function - the most derived class's method will be called
    obj->show();  // Calls Derived2's show function

    // Deleting the object, destructors will be called in reverse order
    delete obj;

    return 0;
}
