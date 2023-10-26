// WAP to overload >, <, == operator to compare two distances(feet, inch) using the concept of operator overloading using friend function.

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}

    Distance(int ft, int in) : feet(ft), inches(in) {}

    friend bool operator>(const Distance &d1, const Distance &d2);
    friend bool operator<(const Distance &d1, const Distance &d2);
    friend bool operator==(const Distance &d1, const Distance &d2);

    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};

bool operator>(const Distance &d1, const Distance &d2) {
    int ft1 = d1.feet * 12 + d1.inches;
    int ft2 = d2.feet * 12 + d2.inches;
    return ft1 > ft2;
}

bool operator<(const Distance &d1, const Distance &d2) {
    int ft1 = d1.feet * 12 + d1.inches;
    int ft2 = d2.feet * 12 + d2.inches;
    return ft1 < ft2;
}

bool operator==(const Distance &d1, const Distance &d2) {
    return (d1.feet == d2.feet && d1.inches == d2.inches);
}

int main() {
    Distance d1(5, 8);
    Distance d2(2, 10);

    if (d1 > d2) {
        cout << "d1 is greater than d2" << endl;
    } else if (d1 < d2) {
        cout << "d1 is less than d2" << endl;
    } else if (d1 == d2) {
        cout << "d1 is equal to d2" << endl;
    }

    return 0;
}
