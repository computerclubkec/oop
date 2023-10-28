// WAP to show pure virtual function mechanism and abstract class

#include <iostream>

using namespace std;

// Abstract class with a pure virtual function
class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function
    virtual double area() = 0;
};

class Circle : public Shape
{
private:
    double radius;
    const float PI = 3.14159;

public:
    Circle(double r) : radius(r) {}

    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }

    double area() override
    {
        return PI * radius * radius;
    }
};

class Square : public Shape
{
private:
    double side;

public:
    Square(double s) : side(s) {}

    void draw() override
    {
        cout << "Drawing a square" << endl;
    }

    double area() override
    {
        return side * side;
    }
};

int main()
{
    // You cannot create an instance of an bstract class
    // Shape shape; // This will result in a compilation error
    Circle circle(5.0);
    Square square(4.0);

    Shape *shape = &circle;
    shape->draw();
    shape->area();

    shape = &square;
    shape->draw();
    shape->area();

    return 0;
}
