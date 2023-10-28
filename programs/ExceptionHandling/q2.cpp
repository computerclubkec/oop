// WAP to show throwing inside function.

#include <iostream>
using namespace std;

void testFunction()
{
    throw "Test Exception";
}

int main()
{
    try
    {
        testFunction();
    }
    catch (const char *e)
    {
        cout << "Exception caught: " << e << endl;
    }
    return 0;
}
