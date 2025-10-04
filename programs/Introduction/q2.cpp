// WAP to find the prime number in C++

#include <iostream>
#include <math.h>

using namespace std;

void findPrime(int from, int to)
{
    for (int num = from; num <= to; num++)
    {
        if(num<2)continue;  
        bool prime = 1;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num%i == 0)
            {
                prime = 0; 
                break;
            }
        }
        if(prime){
            cout << num << " ";
        }
    }
}

int main()
{
    int from, to;
    cout << "Enter Range: ";
    cin >> from >> to;
    findPrime(from, to);
}
