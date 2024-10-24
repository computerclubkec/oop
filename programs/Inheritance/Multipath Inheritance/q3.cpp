#include <iostream>
using namespace std;

// Base class A
class A
{
public:
    A()
    {
        cout << "Constructor of Class A" << endl;
    }
};

// Base class B
class B
{
public:
    B()
    {
        cout << "Constructor of Class B" << endl;
    }
};

// Derived class C inherits from A and B
class C : public A, public B
{
public:
    C()
    {
        cout << "Constructor of Class C" << endl;
    }
};

int main()
{
    C obj; // Creating object of class C

    return 0;
}
