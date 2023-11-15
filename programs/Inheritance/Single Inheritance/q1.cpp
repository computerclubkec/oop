// WAP to show single inheritance with default constructor.

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Default constructor of class A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Default constructor of class B" << endl;
    }
};

int main()
{
    B b;
    return 0;
}

/*
Output:

Default constructor of class A
Default constructor of class B

*/