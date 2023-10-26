//  WAP to calculate area of circle(radius), rectangle(l,b), area of triangle(a,b,c) using function overloading

#include <iostream>
#include <cmath>
# define PI 3.14
using namespace std;


// Function to calculate area of a circle
float area(float radius) {
    return PI * radius * radius;
}

// Function to calculate area of a rectangle
float area(float length, float breadth) {
    return length * breadth;
}

// Function to calculate area of a triangle 
float area(float a, float b, float c) {

    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    float radius, length, breadth, side1, side2, side3;

    // Input for Circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    // Input for Rectangle
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << area(length, breadth) << endl;

    // Input for Triangle
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    cout << "Area of the triangle: " << area(side1, side2, side3) << endl;

    return 0;
}
