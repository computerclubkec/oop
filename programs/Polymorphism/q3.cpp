// WAP to show virtual destructor

#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor" << endl;
    }

    // virtual destructor ensures that both the base and derived class destructors are called in the correct order, even if the object was created as a "Derived" type.
    virtual ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
};

int main(){
    Base* obj = new Derived();
    delete obj;
    return 0;
}