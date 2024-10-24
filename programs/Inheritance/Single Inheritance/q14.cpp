#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Parameterized constructor
    Base(int x)
    {
        cout << "Base class constructor called with x = " << x << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Parameterized constructor
    Derived(int x, int y) : Base(x)
    {
        cout << "Derived class constructor called with y = " << y << endl;
    }
};

int main()
{
    // Creating object of Derived class
    Derived obj(5, 10);

    return 0;
}
