// WAP to show multiple inheritance constructor and destructor.

#include<iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    Base1() {
        cout << "Constructor of Base1 called" << endl;
    }
    ~Base1() {
        cout << "Destructor of Base1 called" << endl;
    }
};

// Base class 2
class Base2 {
public:
    Base2() {
        cout << "Constructor of Base2 called" << endl;
    }
    ~Base2() {
        cout << "Destructor of Base2 called" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Constructor of Derived called" << endl;
    }
    ~Derived() {
        cout << "Destructor of Derived called" << endl;
    }
};

int main() {
    Derived obj;
    return 0;
}


// Output

// -> this is the output of the above program

// Constructor of Base1 called
// Constructor of Base2 called
// Constructor of Derived called
// Destructor of Derived called
// Destructor of Base2 called
// Destructor of Base1 called