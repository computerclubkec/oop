// WAP to show single inheritance with same function name of base and derived class.

#include <iostream>

using namespace std;

class Dinosaurous
{
public:
    void speak()
    {
        cout << "Raaarrrr" << endl;
    }
};

class Chicken : public Dinosaurous
{
public:
    void speak()
    {
        cout << "Pakkak" << endl;
    }
};

int main()
{
    Chicken c;
    c.speak();
}

/*
Output:

Pakkak

*/