#include <iostream>
using namespace std;

class Base1
{
public:
    void method1()
    {
        cout << "Base1 method" << endl;
    }
};

class Base2
{
public:
    void method2()
    {
        cout << "Base2 method" << endl;
    }
};

class Derived : public Base1, public Base2
{
};

int main()
{
    Derived d;
    d.method1();
    d.method2();
    return 0;
}
