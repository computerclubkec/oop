// WAP to show conversion from Basic to User Defined.

#include <iostream>
#include <cmath>

using namespace std;
class Distance
{

private:
    int meter;
    float centimeter;

public:
    Distance()
    {
        meter = centimeter = 0;
    }
    Distance(int _meter, int _centimeter)
    {
        meter = _meter;
        centimeter = _centimeter;
    }
    operator float()
    {
        float total = meter + (float)centimeter / 100;
        return total;
    }
    Distance(float dist)
    {
        meter = (int)dist;
        centimeter = (dist - meter) * 100;
    }
    friend ostream &operator<<(ostream &, Distance &);
};

ostream &operator<<(ostream &out, Distance &obj)
{
    out << "Meter: " << obj.meter << " Centimeter: " << obj.centimeter;
    return out;
}

int main()
{
    float distance;
    cout << "Enter Distance: ";
    cin >> distance;
    cout << "Converting into Meter and Cetimeter: ";
    Distance d1 = distance;
    cout << d1 << endl;
    float distance2 = d1;
    cout << distance << endl;    
}