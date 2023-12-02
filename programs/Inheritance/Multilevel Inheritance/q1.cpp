#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// Intermediate class
class Mammal: public Animal {
public:
    void breathe() {
        cout << "I can breathe!" << endl;
    }
};

// Derived class
class Dog: public Mammal {
public:
    void bark() {
        cout << "I can bark! Woof woof!" << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();    // Inherited from Animal
    dog.breathe(); // Inherited from Mammal
    dog.bark();   // Own method
    return 0;
}