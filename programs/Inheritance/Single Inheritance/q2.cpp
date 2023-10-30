// WAP to show single inheritance with main function access.

#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void display()
    {
        cout << "This is the base class." << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void show()
    {
        cout << "This is the derived class." << endl;
    }
};

// Main function
int main()
{
    Derived d;
    d.display(); // Accessing base class function from derived class object
    d.show();    // Accessing derived class function from derived class object
    return 0;
}