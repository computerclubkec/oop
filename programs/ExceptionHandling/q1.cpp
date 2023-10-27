// WAP to show simple try catch throw.

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 20;
    }
    catch (int e)
    {
        cout << "An exception occurred. Exception Number: " << e << endl;
    }
    return 0;
}
