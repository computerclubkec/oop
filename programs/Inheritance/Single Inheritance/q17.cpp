#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Constructor with argument
    Base(int x)
    {
        cout << "Base class constructor called with x = " << x << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Constructor with argument, passing argument to Base class constructor
    Derived(int x) : Base(x)
    {
        cout << "Derived class constructor called with x = " << x << endl;
    }
};

int main()
{
    // Creating object of Derived class and passing argument
    Derived obj(20);

    return 0;
}
