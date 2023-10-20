// WAP to show conversion between User Defined to User Defined both destination and source conversion.

#include <iostream>

class Meter;

class Feet {
private:
    double feet;

public:
    Feet(double f) : feet(f) {}

    operator Meter(); // Conversion function to convert Feet to Meter
    double getFeet() const { return feet; }
};

class Meter {
private:
    double meters;

public:
    Meter(double m) : meters(m) {}

    operator Feet(); // Conversion function to convert Meter to Feet
    double getMeters() const { return meters; }
};

// Conversion function to convert Feet to Meter
Feet::operator Meter() {
    return Meter(feet * 0.3048);
}

// Conversion function to convert Meter to Feet
Meter::operator Feet() {
    return Feet(meters / 0.3048);
}

int main() {
    // Conversion from Feet to Meter
    Feet feet(10.0);
    Meter meters = feet; // Conversion using operator overloading
    std::cout << "Feet: " << feet.getFeet() << " is equal to " << meters.getMeters() << " meters." << std::endl;

    // Conversion from Meter to Feet
    Meter meters2(5.0);
    Feet feet2 = meters2; // Conversion using operator overloading
    std::cout << "Meters: " << meters2.getMeters() << " is equal to " << feet2.getFeet() << " feet." << std::endl;

    return 0;
}
