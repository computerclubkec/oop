// WAP to show the ambiguity in multiple inheritance.

#include<iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void show() {
        cout << "Function of Base1" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void show() {
        cout << "Function of Base2" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void showBoth() {
        Base1::show();  // Call Base1's show function
        Base2::show();  // Call Base2's show function
    }
};

int main() {
    Derived obj;
    // obj.show(); // This will cause ambiguity if uncommented
    obj.showBoth();  // Clear call to both base functions
    return 0;
}


// Output

// -> this is the output of the above program

// Function of Base1
// Function of Base2