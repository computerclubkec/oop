#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 10, num2 = 20;
    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swap(num1, num2);
    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    return 0;
}
