// WAP to add and subtract 2 distances d1 and d2 (feet, inch) using operator overloading + and - using member function.

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}

    Distance(int ft, int in) : feet(ft), inches(in) {}

    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }

    Distance operator+(const Distance &d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        if (temp.inches >= 12) {
            temp.feet++;
            temp.inches -= 12;
        }
        return temp;
    }

    Distance operator-(const Distance &d) {
        Distance temp;
        int ft1 = feet * 12 + inches;
        int ft2 = d.feet * 12 + d.inches;
        int diff = ft1 - ft2;
        temp.feet = diff / 12;
        temp.inches = diff % 12;
        return temp;
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(2, 10);

    Distance d3 = d1 + d2;
    cout << "After addition: ";
    d3.display(); 

    Distance d4 = d1 - d2;
    cout << "After subtraction: ";
    d4.display(); 

    return 0;
}
