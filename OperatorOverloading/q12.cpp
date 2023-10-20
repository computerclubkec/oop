// WAP to overload >, <, == operator to compare two amount using the concept of overloading.

#include <iostream>
using namespace std;

class Amount {
private:
    int rupees;
    int paise;

public:
    Amount() : rupees(0), paise(0) {}

    Amount(int r, int p) : rupees(r), paise(p) {}

    friend bool operator>(const Amount &a1, const Amount &a2);
    friend bool operator<(const Amount &a1, const Amount &a2);
    friend bool operator==(const Amount &a1, const Amount &a2);

    void display() {
        cout << "Rupees: " << rupees << " Paise: " << paise << endl;
    }
};

bool operator>(const Amount &a1, const Amount &a2) {
    int p1 = a1.rupees * 100 + a1.paise;
    int p2 = a2.rupees * 100 + a2.paise;
    return p1 > p2;
}

bool operator<(const Amount &a1, const Amount &a2) {
    int p1 = a1.rupees * 100 + a1.paise;
    int p2 = a2.rupees * 100 + a2.paise;
    return p1 < p2;
}

bool operator==(const Amount &a1, const Amount &a2) {
    return (a1.rupees == a2.rupees && a1.paise == a2.paise);
}

int main() {
    Amount a1(100, 50);
    Amount a2(50, 100);

    if (a1 > a2) {
        cout << "a1 is greater than a2" << endl;
    } else if (a1 < a2) {
        cout << "a1 is less than a2" << endl;
    } else if (a1 == a2) {
        cout << "a1 is equal to a2" << endl;
    }

    return 0;
}
