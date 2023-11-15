// WAP to show parent function call inside child class having same member function name.

#include <iostream>
using namespace std;

// Base class
class Parent
{
public:
    void display()
    {
        cout << "This is the parent class." << endl;
    }
};

// Derived class
class Child : public Parent
{
public:
    void display()
    {
        cout << "This is the child class." << endl;
        Parent::display(); // Calling parent class function from child class
    }
};

// Main function
int main()
{
    Child c;
    c.display(); // Accessing derived class function from derived class object
    return 0;
}