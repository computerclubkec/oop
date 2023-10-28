// WAP to show dynamic cast operator.

#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "The animal makes a generic sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "The dog barks." << endl;
    }
};

int main()
{
    Animal *myAnimal = new Dog();

    Dog *myDog = dynamic_cast<Dog *>(myAnimal);

    if (myDog)
    {
        myDog->speak();
    }
    else
    {
        cout << "The dynamic_cast failed" << endl;
    }

    delete myAnimal;

    return 0;
}