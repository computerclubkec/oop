#include <iostream>

class Distance
{
private:
    int feet, inch;

public:
    Distance(int f = 0, int i = 0) : feet(f), inch(i) {}

    void addAndDisplay(const Distance &d)
    {
        int totalInches = (this->feet * 12 + this->inch) + (d.feet * 12 + d.inch);
        int resultFeet = totalInches / 12;
        int resultInch = totalInches % 12;
        std::cout << "Result: " << resultFeet << " feet, " << resultInch << " inches" << std::endl;
    }
};

int main()
{
    Distance D1(5, 10), D2(3, 4);
    D1.addAndDisplay(D2);
    return 0;
}
