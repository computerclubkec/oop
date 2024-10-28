#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void show()
    {
        cout << "Base class show() called." << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Overloading show() method
    void show(int x)
    {
        cout << "Derived class overloaded show() called with x = " << x << endl;
    }
};

int main()
{
    Derived obj;

    // Calling base class method
    obj.show();

    // Calling overloaded method in derived class
    obj.show(10);

    return 0;
}
