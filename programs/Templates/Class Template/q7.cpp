//Write a C++ program to implement a generic Stack class using templates.
#include <iostream>
using namespace std;

// Template class for a generic Stack
template <class T>
class Stack {
    T arr[100];   // fixed size array for stack
    int top;      // index of top element
public:
    Stack() : top(-1) {}

    // Push element onto stack
    void push(T val) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
    }

    // Pop element from stack
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    // Get the top element
    T peek() {
        if (top == -1) throw runtime_error("Stack Empty");
        return arr[top];
    }

    // Check if stack is empty
    bool empty() { return top == -1; }
};

int main() {
    // Integer stack
    Stack<int> s;
    s.push(10); 
    s.push(20);
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;

    // String stack
    Stack<string> ss;
    ss.push("Hello"); 
    ss.push("World");
    cout << "String top: " << ss.peek() << endl;
}
