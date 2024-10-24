#include <iostream>
using namespace std;

// Base class One
class One
{
public:
    One()
    {
        cout << "Constructor of Class One" << endl;
    }
    ~One()
    {
        cout << "Destructor of Class One" << endl;
    }
};

// Base class Two
class Two
{
public:
    Two()
    {
        cout << "Constructor of Class Two" << endl;
    }
    ~Two()
    {
        cout << "Destructor of Class Two" << endl;
    }
};

// Child class Result
class Result : public One, public Two
{
public:
    Result()
    {
        cout << "Constructor of Class Result" << endl;
    }
    ~Result()
    {
        cout << "Destructor of Class Result" << endl;
    }
};

int main()
{
    Result obj; // Creating object of class Result

    return 0;
}
