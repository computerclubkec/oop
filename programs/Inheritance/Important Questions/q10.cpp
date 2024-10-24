#include <iostream>
using namespace std;

// Forward declaration
class ClassB;

class ClassA
{
private:
    int valueA;

public:
    ClassA(int val) : valueA(val) {}
    friend class ClassB; // ClassB is a friend of ClassA
};

class ClassB
{
public:
    void display(ClassA a)
    {
        cout << "Value from Class A: " << a.valueA << endl; // Accessing private member
    }
};

int main()
{
    ClassA a(10);
    ClassB b;
    b.display(a);

    return 0;
}
