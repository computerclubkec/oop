// WAP to show single inheritance parameterize constructor.

#include <iostream>

using namespace std;

class Father
{
private:
    string surname;

public:
    Father(string surname)
    {
        this->surname = surname;
        cout << "Father surname set" << endl;
    }
    void displayName()
    {
        cout << "Father class surname is: " << surname << endl;
    }
};

class Child : public Father
{
private:
    string surname;

public:
    Child(string surname)
        : Father(surname)
    {
        this->surname = surname;
        cout << "Child surname set" << endl;
    }
    void showName()
    {
        cout << "Child class surname is " << surname << endl;
    }
};

int main()
{
    Child child("Giri");
    child.displayName(); // displays father surname
    child.showName();    // displays child surname

    return 0;
}

/*
Output:

Father surname set
Child surname set
Father class surname is: Giri
Child class surname is Giri

*/