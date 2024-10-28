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
public:
    void display()
    {
        displayA(); // Accessing method from Class A
        displayB(); // Accessing method from Class B
    }
};

int main()
{
    C obj;
    obj.display(); // Calling the display method from derived class

    return 0;
}
