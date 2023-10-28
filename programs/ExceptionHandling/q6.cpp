// WAP to show rethrowing exception.

#include <iostream>
using namespace std;

void rethrowFunction()
{
    try
    {
        throw;
    }
    catch (int e)
    {
        cout << "Exception caught inside function: " << e << endl;
        throw; // Rethrow the caught exception
    }
}

int main()
{
    try
    {
        rethrowFunction();
    }
    catch (int e)
    {
        cout << "Rethrown exception caught outside function: " << e << endl;
    }
    return 0;
}
