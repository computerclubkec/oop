// WAP to create classes ABC with data member feet nad XYZ with data member
// inch. Add members of class ABC and XYZ using friend function.
#include <iostream>
#include <cmath>
using namespace std;

class XYZ;

class ABC
{
private:
    float feet;

public:
    ABC()
    {
        feet = 0;
    }
    ABC(float _feet)
    {
        feet = _feet;
    }
    friend void add(ABC, XYZ);
};

class XYZ
{
private:
    float inch;

public:
    XYZ()
    {
        inch = 0;
    }
    XYZ(float _inch)
    {
        inch = fmod(_inch, 12);
    }
    friend void add(ABC, XYZ);
};

void add(ABC obj1, XYZ obj2)
{
    float total = obj1.feet * 12 + obj2.inch;
    cout << "Total inches = " << total;
    total = obj1.feet + obj2.inch / 12;
    cout << "Total feet = " << total;
}

int main()
{
    ABC a(12);
    XYZ b(13);
    add(a,b);
}