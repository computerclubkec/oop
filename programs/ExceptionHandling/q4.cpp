// WAP to show catching all exceptions.

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 20;
    }
    catch (...)
    {
        cout << "Some exception occurred" << endl;
    }
    return 0;
}
