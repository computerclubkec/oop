//WAP to overload + and * operators for complex numbers.
#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload * operator
    Complex operator*(const Complex& c) {
        return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2), c2(1, 7);

    Complex sum = c1 + c2;     // Uses overloaded +
    Complex prod = c1 * c2;    // Uses overloaded *

    cout << "Sum: "; sum.display();
    cout << "Product: "; prod.display();
}
