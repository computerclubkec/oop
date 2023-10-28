// WAP to show virtual function mechanism.

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

class Dog : public Animal{

    public:
        void speak() override{
            cout << "The dog barks." << endl;
        }
};

class Cat : public Animal{
    public:
    void speak() override {
        cout << "The cat meows." << endl;
    }
};

int main(){
    Animal *myAnimal;

    Dog myDog;
    Cat myCat;

    myAnimal = &myDog;
    myAnimal->speak(); // Calls the speak() function of Dog

    myAnimal = &myCat;
    myAnimal->speak(); // Calls the speak() function of Cat

    return 0;
}
