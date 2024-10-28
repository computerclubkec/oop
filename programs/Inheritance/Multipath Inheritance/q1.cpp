#include <iostream>
using namespace std;

// Base class A
class A
{
public:
    void displayA()
    {
        cout << "Display from Class A" << endl;
    }
};

// Base class B
class B
{
public:
    void displayB()
    {
        cout << "Display from Class B" << endl;
    }
};

// Derived class C inherits from A and B
class C : public A, public B
{
};

int main()
{
    C obj;
    obj.displayA(); // Accessing method from Class A
    obj.displayB(); // Accessing method from Class B

    return 0;
}
