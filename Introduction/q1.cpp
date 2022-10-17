// WP to illustrate the concept of OOP.

#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
private:
	string name;
	int age;

public:
	void info()
	{
		cout << "My name is " << name << " and my age is " << age << endl;
	}
	void setName(string _name)
	{
		name = _name;
	}
	void setAge(int _age)
	{
		age = _age;
	}
};

int main()
{
	Animal Dog, Cat;
	Dog.setName("Bruno");
	Dog.setAge(10);
	Cat.setName("Mew");
	Cat.setAge(11);
	Dog.info();
	Cat.info();
}