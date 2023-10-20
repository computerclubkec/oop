// WAP to overload pre-decrement and post-decrement operator.

#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}

    void operator --() {
        --count; // pre-decrement
    }

    void operator --(int) {
        count--; // post-decrement
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;
    cout << "Post-decrement: " << endl;
    --c;
    c.display();  

    cout << "Pre-decrement: " << endl;
    c--;
    c.display();  
    return 0;
}
