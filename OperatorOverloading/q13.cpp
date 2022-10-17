// WAP to overload insertion and excertion operator

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Person
{
private:
    char name[25];
    int age;

public:
    Person()
    {
        strcpy(name, "Unknown");
        age = 0;
    }
    friend ostream &operator<<(ostream &, Person);
    friend istream &operator>>(istream &, Person &);
};

ostream &operator<<(ostream &out, Person obj)
{
    out << "Name: " << obj.name << " Age: " << obj.age;
    return out;
    
}
istream &operator>>(istream &in, Person &obj)
{
    in.getline(obj.name, 25, '\n') >> obj.age;
    return in;
}

int main()
{
    Person a;
    cin >> a;
    cout << a;
}