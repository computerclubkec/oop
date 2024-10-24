#include <iostream>
using namespace std;

class Base1
{
public:
    void show()
    {
        cout << "Base1 method" << endl;
    }
};

class Base2
{
public:
    void show()
    {
        cout << "Base2 method" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void showAll()
    {
        Base1::show(); // Call Base1 method
        Base2::show(); // Call Base2 method
    }
};

int main()
{
    Derived d;
    d.showAll();
    return 0;
}
