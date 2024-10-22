#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void displayBase()
    {
        cout << "This is the Base class." << endl;
    }
};

// Intermediate class derived from Base
class Intermediate : public Base
{
public:
    void displayIntermediate()
    {
        cout << "This is the Intermediate class." << endl;
    }
};

// Derived class derived from Intermediate
class Derived : public Intermediate
{
public:
    void displayDerived()
    {
        cout << "This is the Derived class." << endl;
    }
};

// Main function
int main()
{
    // Creating an object of the Derived class
    Derived obj;

    // Accessing methods from all levels of inheritance
    obj.displayBase();         // Method from Base class
    obj.displayIntermediate(); // Method from Intermediate class
    obj.displayDerived();      // Method from Derived class

    return 0;
}
