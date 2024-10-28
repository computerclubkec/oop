#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape
{
public:
    virtual void area() = 0; // Pure virtual function
};

// Derived class Rectangle
class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void area()
    {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    void area()
    {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

// Derived class Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    void area()
    {
        cout << "Area of Circle: " << M_PI * radius * radius << endl;
    }
};

int main()
{
    Shape *shape;

    Rectangle rect(10, 5);
    shape = &rect;
    shape->area();

    Triangle tri(10, 5);
    shape = &tri;
    shape->area();

    Circle circ(5);
    shape = &circ;
    shape->area();

    return 0;
}
