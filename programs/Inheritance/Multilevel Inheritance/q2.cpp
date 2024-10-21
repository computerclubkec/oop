#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    int baseVar;

    // Constructor to initialize baseVar
    Base(int val) : baseVar(val) {}

    // Function to display baseVar
    void displayBase()
    {
        cout << "Base class variable: " << baseVar << endl;
    }
};

// Derived class that inherits from Base class
class Derived : public Base
{
public:
    int derivedVar;

    // Constructor to initialize base class and derived class variables
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedVar(derivedVal) {}

    // Function to display derivedVar
    void displayDerived()
    {
        cout << "Derived class variable: " << derivedVar << endl;
    }
};

// Main function to access members of the derived class
int main()
{
    // Creating an object of the Derived class
    Derived obj(10, 20);

    // Accessing base class member through derived class object
    obj.displayBase();

    // Accessing derived class member
    obj.displayDerived();

    return 0;
}
