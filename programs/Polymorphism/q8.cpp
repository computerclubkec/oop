//Demonstrate runtime polymorphism using base class pointer and virtual function.
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function (allows runtime polymorphism)
    virtual void sound() { 
        cout << "Animal makes sound\n"; 
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() override { 
        cout << "Dog barks\n"; 
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void sound() override { 
        cout << "Cat meows\n"; 
    }
};

int main() {
    Animal* a;  // Base class pointer

    Dog d; 
    Cat c;

    a = &d;  // Pointing to Dog
    a->sound();

    a = &c;  // Pointing to Cat
    a->sound();
}
