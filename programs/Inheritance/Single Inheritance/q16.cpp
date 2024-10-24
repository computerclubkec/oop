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

    void callBaseShow()
    {
        Base::show(); // Explicitly calling base class method
    }
};

int main()
{
    Base *ptr;
    Derived obj;

    // Base class pointer points to Derived class object
    ptr = &obj;

    // Calling derived class overridden method
    ptr->show();

    // Accessing base class method from derived class
    obj.callBaseShow();

    return 0;
}
