// WAP to add two complex numbers using member function add(). Pass single argument to function, return from function and display result.

#include <iostream>

class Complex {
    float real, imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(float r, float i) : real(r), imag(i) {}

    // Member function to add two complex numbers
    Complex add(Complex c) {
        Complex temp(0.0, 0.0); // Create a temporary complex number
        temp.real = real + c.real; // Add real parts
        temp.imag = imag + c.imag; // Add imaginary parts
        return temp; // Return the sum as a new complex number
    }

    // Function to display the complex number
    void display() {
        if (imag >= 0) {
            std::cout << real << " + " << imag << "i" << std::endl; // Positive imaginary part
        } else {
            std::cout << real << imag << "i" << std::endl; // Negative imaginary part
        }
    }
};

int main() {
    Complex c1(3.0, 4.0), c2(1.5, 2.5);
    
    // Call the add function and store the result
    Complex result = c1.add(c2);
    
    // Display the result
    result.display();

    return 0;
}
