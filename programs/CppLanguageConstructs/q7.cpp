// WAP to calculate price of n items. Pass number of items and unit price to a function and return total price. If unity price is not specified use Default price

#include <iostream>
using namespace std;

// Function to calculate the total price of 'n' items
float calculateTotalPrice(int n, float unitPrice = 10.0) {
    return n * unitPrice;
}

int main() {
    int numberOfItems;
    float pricePerItem;

    cout << "Enter the number of items: ";
    cin >> numberOfItems;
    cout << "Enter the unit price of each item (default is 10.0 if not specified): ";
    cin >> pricePerItem;

    // Calculating total price
    float totalPrice = calculateTotalPrice(numberOfItems, pricePerItem);
    cout << "Total price: " << totalPrice << endl;

    return 0;
}
