#include <iostream>
using namespace std;

// Base class Person
class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Employee
class Employee : public Person
{
private:
    double salary;

public:
    Employee(string n, int a, double s) : Person(n, a), salary(s) {}
    void display()
    {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};

// Derived class Student
class Student : public Person
{
private:
    char grade;

public:
    Student(string n, int a, char g) : Person(n, a), grade(g) {}
    void display()
    {
        Person::display();
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Employee emp("Alice", 30, 50000);
    Student stu("Bob", 20, 'A');

    Person *p1 = &emp;
    Person *p2 = &stu;

    p1->display();
    p2->display();

    return 0;
}
