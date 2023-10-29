// Expxlain friend class with example.

#include <iostream>

class Engine;  // Forward declaration

class Car {
private:
    int speed;

public:
    Car(int s) : speed(s) {}

    // Friend class declaration
    friend class Engine;
};

class Engine {
public:
    void showSpeed(const Car &c) {
        std::cout << "Car's speed: " << c.speed << " km/h" << std::endl;
    }
};

int main() {
    Car myCar(120);

    Engine carEngine;
    carEngine.showSpeed(myCar);  // Accessing private member of Car through Engine

    return 0;
}
