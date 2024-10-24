#include <iostream>
using namespace std;

class Base
{
public:
    void show(int x = 100)
    {
        cout << "Value of x: " << x << endl;
    }
};

class Derived : public Base
{
};

int main()
{
    Derived d;
    d.show();   // Calls with default argument
    d.show(50); // Calls with provided argument
    return 0;
}
