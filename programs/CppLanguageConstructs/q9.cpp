// WAP to take n numbers from user and display their average. Also create memory dynamically for array and delete it

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for the array
    double *arr = new double[n];

    // Taking input from the user
    cout << "Enter " << n << " numbers: ";
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculating the average
    double average = sum / n;
    cout << "Average of the numbers: " << average << endl;

    // Deallocating the dynamically allocated memory
    delete[] arr;

    return 0;
}
