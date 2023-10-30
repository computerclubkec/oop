#include <iostream>
using namespace std;

class Base
{
protected:
    int x;

public:
    Base()
    {
        x = 10;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "The value of x is: " << x << endl;
    }
};

int main()
{
    Derived d;
    d.display(); // but d.x cannot be accessed.
    return 0;
}
