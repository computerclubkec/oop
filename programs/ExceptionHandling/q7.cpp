// WAP to show try catch throw in user define classes type.

#include <iostream>
using namespace std;

class MyException
{
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        cout << "Custom exception caught" << endl;
    }
    return 0;
}
