#include <iostream>
using namespace std;

// Base class A
class A
{
public:
    void show()
    {
        cout << "Show from Class A" << endl;
    }
};

// Base class B
class B : virtual public A
{
};

class C : virtual public A
{
};

// Derived class D inherits from B and C
class D : public B, public C
{
public:
    void display()
    {
        show(); // Resolving ambiguity with virtual inheritance
    }
};

int main()
{
    D obj;
    obj.display(); // Calling the display method from derived class

    return 0;
}
