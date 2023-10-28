// WAP to show try catch throw in user define classes type.

#include <iostream>
#include <string>
using namespace std;

class MyException
{
public:
    MyException(const string &message) : errorMessage(message) {}

    const char* what() const {
        return errorMessage.c_str();
    }

private:
    string errorMessage;
};

int main()
{
    try
    {
        throw MyException("Exception thrown from inside MyException class");
    }
    catch (MyException &e)
    {
        cout << "Custom exception caught: " << e.what() << endl;
    }
    return 0;
}

