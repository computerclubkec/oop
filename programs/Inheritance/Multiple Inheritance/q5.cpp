#include <iostream>
using namespace std;

class Base1 {
public:
    int data1;
    Base1() : data1(10) {}
};

class Base2 {
public:
    int data2;
    Base2() : data2(20) {}
};

class Derived : public Base1, public Base2 {
public:
    void showData() {
        cout << "Data from Base1: " << data1 << endl;
        cout << "Data from Base2: " << data2 << endl;
    }
};

int main() {
    Derived d;
    d.showData();
    return 0;
}
