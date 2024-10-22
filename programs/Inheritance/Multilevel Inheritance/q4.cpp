#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor called." << endl;
    }
    ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

// Derived class 1 (inherits from Base)
class Derived1 : public Base {
public:
    Derived1() {
        cout << "Derived1 class constructor called." << endl;
    }
    ~Derived1() {
        cout << "Derived1 class destructor called." << endl;
    }
};

// Derived class 2 (inherits from Derived1)
class Derived2 : public Derived1 {
public:
    Derived2() {
        cout << "Derived2 class constructor called." << endl;
    }
    ~Derived2() {
        cout << "Derived2 class destructor called." << endl;
    }
};

int main() {
    // Creating object of Derived2 class
    Derived2 obj;

    // The constructors and destructors will be called in a specific order
    return 0;
}
