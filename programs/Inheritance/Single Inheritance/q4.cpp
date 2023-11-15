#include <iostream>
using namespace std;

class Base
{
protected:
    int x;

public:
    Base(int a)
    {
        x = a;
    }
};

class Derived : public Base
{
public:
    Derived(int a, int b) : Base(a)
    {
        cout << "Base class parameter: " << x << endl;
        cout << "Derived class parameter: " << b << endl;
    }
};

int main()
{
    Derived d(10, 20);
    return 0;
}

/*

Base class parameter: 10
Derived class parameter: 20

*/