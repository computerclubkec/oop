#include <iostream>

class Distance
{
private:
    int feet, inch;

public:
    Distance(int f = 0, int i = 0) : feet(f), inch(i) {}

    // Method to add distances
    Distance operator+(const Distance &d)
    {
        int totalInches = (this->feet * 12 + this->inch) + (d.feet * 12 + d.inch);
        return Distance(totalInches / 12, totalInches % 12); // Return nameless object
    }

    void display()
    {
        std::cout << "Distance: " << feet << " feet, " << inch << " inches" << std::endl;
    }
};

int main()
{
    Distance D1(5, 10), D2(3, 4);
    Distance result = D1 + D2; // Using operator overloading for addition
    result.display();
    return 0;
}
