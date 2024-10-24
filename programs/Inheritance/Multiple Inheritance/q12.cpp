#include <iostream>
using namespace std;

class Base1
{
public:
    virtual void show()
    {
        cout << "Base1 method" << endl;
    }
};

class Base2
{
public:
    virtual void show()
    {
        cout << "Base2 method" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void (Derived::*funcPtr)();

    Derived()
    {
        funcPtr = &Derived::showDerived;
    }

    void showDerived()
    {
        cout << "Derived method" << endl;
    }

    void invokeMethod()
    {
        (this->*funcPtr)();
    }
};

int main()
{
    Derived d;
    d.invokeMethod(); // Calls derived class method using function pointer
    return 0;
}
