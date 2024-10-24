#include <iostream>

class StaticExample
{
public:
    static int count; // Static variable

    StaticExample()
    {
        count++;
    }

    static void showCount()
    { // Static function
        std::cout << "Count: " << count << std::endl;
    }
};

int StaticExample::count = 0; // Initialize static variable

int main()
{
    StaticExample obj1, obj2;
    StaticExample::showCount(); // Calling static function
    return 0;
}
