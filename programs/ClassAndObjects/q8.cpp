// Create a class named "Rectangle" with two data members-length and breadth and a function to calculate the area which is length x breath. The class has three constructor which are: - having no parameter: values of both length and breadth are assigned zero. - having two numbers as parameters: the two numbers are assigned as length and breadth respectively. - having one number as parameter: both length and breadth are assigned that number. Now crate objects of "Rectangle" class having none, one and two parameters and print their areas using member function area.

#include <iostream>

class Rectangle {
private:
    float length, breadth;

public:
    // Constructor with no parameter
    Rectangle() : length(0), breadth(0) {}

    // Constructor with two numbers as parameters
    Rectangle(float l, float b) : length(l), breadth(b) {}

    // Constructor with one number as parameter
    Rectangle(float s) : length(s), breadth(s) {}

    // Function to calculate the area
    float area() {
        return length * breadth;
    }
};

int main() {
    // Creating objects of Rectangle class with different constructors
    Rectangle rect1;           // Using default constructor
    Rectangle rect2(10);       // Using one-parameter constructor
    Rectangle rect3(5, 8);     // Using two-parameter constructor

    // Printing the areas of the rectangles
    std::cout << "Area of rect1: " << rect1.area() << std::endl;
    std::cout << "Area of rect2: " << rect2.area() << std::endl;
    std::cout << "Area of rect3: " << rect3.area() << std::endl;

    return 0;
}
