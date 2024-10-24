#include <iostream>
using namespace std;

// Base class Shape
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Rectangle" << endl;
    }
};

int main()
{
    Shape *shape;

    Circle circle;
    Rectangle rectangle;

    shape = &circle;
    shape->draw(); // Calls Circle's draw()

    shape = &rectangle;
    shape->draw(); // Calls Rectangle's draw()

    return 0;
}
