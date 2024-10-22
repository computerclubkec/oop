#include <iostream>
using namespace std;

// Base class
class Grandparent
{
public:
    void displayGrandparent()
    {
        cout << "This is the Grandparent class." << endl;
    }
};

// Derived class from Grandparent
class Parent : public Grandparent
{
public:
    void displayParent()
    {
        cout << "This is the Parent class." << endl;
    }
};

// Derived class from Parent
class Child : public Parent
{
public:
    void displayChild()
    {
        cout << "This is the Child class." << endl;
    }
};

// Main function
int main()
{
    // Creating an object of the Child class
    Child obj;

    // Accessing methods from all levels of inheritance
    obj.displayGrandparent(); // Method from Grandparent class
    obj.displayParent();      // Method from Parent class
    obj.displayChild();       // Method from Child class

    return 0;
}
