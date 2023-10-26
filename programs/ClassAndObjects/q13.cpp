// WAP to add distances D1(feet,inch) and D2(feet,inch)
// Display result by returning values using friend function.

#include <iostream>
#include <cmath>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = inches = 0;
    }
    Distance(int _feet, float _inches)
    {
        feet = _feet;
        feet += _inches / 12;
        inches = fmod(_inches, 12);
    }
    friend void add(Distance, Distance);
};

void add(Distance d1, Distance d2)
{
    int feet = d1.feet + d2.feet + d1.inches / 12 + d2.inches / 12;
    float inches = fmod(d1.inches + d2.inches, 12);
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
}

int main()
{
    Distance d1(12, 3), d2(13, 9);
    add(d1, d2);
}