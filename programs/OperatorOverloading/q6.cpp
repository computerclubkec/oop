// WAP to overload binary operator + using member function. 

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}

    // Overloading binary operator '+'
    Complex operator+(const Complex &other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    void display() {
        cout << "Real: " << real << " Imaginary: " << imag << endl;
    }
};

int main() {
    Complex c1(2.3, 4.5), c2(1.2, 3.5);
    Complex result = c1 + c2;
    result.display();
    return 0;
}
