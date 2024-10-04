// WAP to show multiple inheritance with different function name.

#include<iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void showBase1() {
        cout << "Function of Base1" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void showBase2() {
        cout << "Function of Base2" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void showDerived() {
        cout << "Function of Derived" << endl;
    }
};

int main() {
    Derived obj;
    obj.showBase1();   // Call function of Base1
    obj.showBase2();   // Call function of Base2
    obj.showDerived(); // Call function of Derived
    return 0;
}


// Output

// -> this is the output of the above program

// Function of Base1
// Function of Base2
// Function of Derived