// WAP to show type id operator.

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

class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "The cat meows." << endl;
    }
};

int main(){
    Animal* myAnimal = new Dog();

    const type_info& typeInfo = typeid(*myAnimal);

    if (typeInfo == typeid(Dog)){
        cout << "The object is of type Dog." << endl;
    }
    else if (typeInfo == typeid(Cat)){
        cout << "The object is of type Cat." << endl;
    }
    else{
        cout << "The object is of an unknown type." << endl;
    }
    
    delete myAnimal;

    return 0;
}
