#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Base1 constructor" << endl;
    }
    ~Base1()
    {
        cout << "Base1 destructor" << endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Base2 constructor" << endl;
    }
    ~Base2()
    {
        cout << "Base2 destructor" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    Derived()
    {
        cout << "Derived constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    Derived d;
    return 0;
}
