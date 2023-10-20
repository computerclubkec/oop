// WAP to overload binary operator + using friend function.

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}

    void display() {
        cout << "Real: " << real << " Imaginary: " << imag << endl;
    }

    friend Complex operator+(const Complex &c1, const Complex &c2);
};

Complex operator+(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(2.3, 4.5), c2(1.2, 3.5);
    Complex result = c1 + c2;
    result.display();
    return 0;
}
