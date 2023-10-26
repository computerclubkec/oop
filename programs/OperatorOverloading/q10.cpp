// WAP to overload >, <, == operator to compare two distances(feet, inch) using the concept of operator overloading using member function.

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}

    Distance(int ft, int in) : feet(ft), inches(in) {}

    bool operator>(const Distance &d) {
        int ft1 = feet * 12 + inches;
        int ft2 = d.feet * 12 + d.inches;
        return ft1 > ft2;
    }

    bool operator<(const Distance &d) {
        int ft1 = feet * 12 + inches;
        int ft2 = d.feet * 12 + d.inches;
        return ft1 < ft2;
    }

    bool operator==(const Distance &d) {
        return (feet == d.feet && inches == d.inches);
    }

    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};

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
