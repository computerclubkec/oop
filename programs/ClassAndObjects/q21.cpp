#include <iostream>

class Order
{
public:
    static int count; // Static variable

    Order()
    {
        count++;
        std::cout << "Object created. Count: " << count << std::endl;
    }

    ~Order()
    {
        count--;
        std::cout << "Object destroyed. Count: " << count << std::endl;
    }
};

int Order::count = 0; // Initialize static variable

int main()
{
    Order obj1;
    {
        Order obj2;
        Order obj3;
    } // obj2 and obj3 will be destroyed here
    return 0;
}
