// WAP to show parent function call inside child class.

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
    void show()
    {
        cout << "This is the child class." << endl;
        display(); // Calling parent class function from child class
    }
};

// Main function
int main()
{
    Child c;
    c.show(); // Accessing derived class function from derived class object
    return 0;
}

/*
Output:

This is the child class.
This is the parent class.

*/