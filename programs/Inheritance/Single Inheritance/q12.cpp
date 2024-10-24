#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Constructor of Base class
    Base()
    {
        cout << "Base class constructor called." << endl;
    }

    // Destructor of Base class
    ~Base()
    {
        cout << "Base class destructor called." << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Constructor of Derived class
    Derived()
    {
        cout << "Derived class constructor called." << endl;
    }

    // Destructor of Derived class
    ~Derived()
    {
        cout << "Derived class destructor called." << endl;
    }
};

int main()
{
    // Creating an object of Derived class
    Derived obj;

    return 0;
}
