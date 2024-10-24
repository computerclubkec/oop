#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    virtual void show()
    {
        cout << "Base class show() called." << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class show() called." << endl;
    }
};

int main()
{
    Base *ptr;
    Derived obj;

    // Base class pointer points to Derived class object
    ptr = &obj;

    // Virtual function resolves at runtime
    ptr->show();

    return 0;
}
