// WAP to show how friend function works.

#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Friend function declaration
    friend double getArea(const Circle& c);
};

// Friend function definition
double getArea(const Circle& c) {
    return 3.14 * c.radius * c.radius;
}

int main() {
    Circle circle(5);

    std::cout << "Area of the circle with radius 5: " << getArea(circle) << std::endl;

    return 0;
}
