#include <iostream>
using namespace std;

// Base class A
class A
{
public:
    void display()
    {
        cout << "Display from Class A" << endl;
    }
};

// Base class B inherits from A
class B : virtual public A
{
};

// Base class C inherits from A
class C : virtual public A
{
};

// Derived class D inherits from B and C
class D : public B, public C
{
public:
    void show()
    {
        display(); // Resolving ambiguity with virtual inheritance
    }
};

int main()
{
    D obj;
    obj.show(); // Calling method from derived class

    return 0;
}
