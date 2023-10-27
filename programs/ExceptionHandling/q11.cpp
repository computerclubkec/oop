// WAP to throw multiple exception. Using exception class and each exception is handled by separate handler.

#include <iostream>
using namespace std;

int main()
{
    try
    {
        int option;
        cout << "Enter 1 to throw a string exception, 2 to throw an int exception: ";
        cin >> option;
        if (option == 1)
            throw "String Exception";
        else if (option == 2)
            throw 20;
    }
    catch (const char *e)
    {
        cout << "String exception caught: " << e << endl;
    }
    catch (int e)
    {
        cout << "Int exception caught: " << e << endl;
    }
    return 0;
}
