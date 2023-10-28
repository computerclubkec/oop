// WAP to show multiple catch statements.

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
        cout << "Integer exception: " << e << endl;
    }
    catch (double e)
    {
        cout << "Double exception: " << e << endl;
    }
    return 0;
}
