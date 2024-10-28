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
    ~A()
    {
        cout << "Destructor of Class A" << endl;
    }
};

// Base class B
class B : virtual public A
{
public:
    B()
    {
        cout << "Constructor of Class B" << endl;
    }
    ~B()
    {
        cout << "Destructor of Class B" << endl;
    }
};

// Base class C
class C : virtual public A
{
public:
    C()
    {
        cout << "Constructor of Class C" << endl;
    }
    ~C()
    {
        cout << "Destructor of Class C" << endl;
    }
};

// Derived class D inherits from B and C
class D : public B, public C
{
public:
    D()
    {
        cout << "Constructor of Class D" << endl;
    }
    ~D()
    {
        cout << "Destructor of Class D" << endl;
    }
};

int main()
{
    D obj; // Creating object of class D

    return 0;
}
