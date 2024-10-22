## Single Inheritance

- [x] [q1](./Single%20Inheritance/q1.cpp): WAP to show single inheritance with default constructor.
- [x] [q2](./Single%20Inheritance/q2.cpp): WAP to show single inheritance with main function access.
- [x] [q3](./Single%20Inheritance/q3.cpp): WAP to show single inheritance parameterize constructor.
- [x] [q4](./Single%20Inheritance/q4.cpp): WAP to show single inheritance parameterized only in child class.
- [x] [q5](./Single%20Inheritance/q5.cpp): WAP to show single inheritance with same function name of base and derived class.
- [x] [q6](./Single%20Inheritance/q6.cpp): WAP to show parent function call inside child class.
- [x] [q7](./Single%20Inheritance/q7.cpp): WAP to show protected data inside base class.
- [x] [q8](./Single%20Inheritance/q8.cpp): WAP to show parent function call inside child class having same member function name.
- [x] [q9](./Single%20Inheritance/q9.cpp): WAP to show single inheritance with a method in the base class that gets called from the derived class.
- [x] [q10](./Single%20Inheritance/q10.cpp): WAP to demonstrate single inheritance where the base class has private members accessed through public member functions in the derived class.
- [x] [q11](./Single%20Inheritance/q11.cpp): WAP to show single inheritance with the derived class accessing protected members of the base class.
- [ ] [q12](./Single%20Inheritance/q12.cpp): WAP to show single inheritance where both base and derived classes have constructors and destructors.
- [ ] [q13](./Single%20Inheritance/q13.cpp): WAP to demonstrate single inheritance with method overloading in the derived class.
- [ ] [q14](./Single%20Inheritance/q14.cpp): WAP to show single inheritance with multiple parameterized constructors in the base and derived class.
- [ ] [q15](./Single%20Inheritance/q15.cpp): WAP to show single inheritance with virtual functions.
- [ ] [q16](./Single%20Inheritance/q16.cpp): WAP to demonstrate single inheritance where the derived class overrides the base class method and accesses the overridden method using a pointer to the base class.
- [ ] [q17](./Single%20Inheritance/q17.cpp): WAP to show single inheritance where the base class constructor requires an argument passed through the derived class constructor.

## Multiple Inheritance

- [x] [q1](./Multiple%20Inheritance/q1.cpp): WAP to show multiple inheritance constructor and destructor.
- [x] [q2](./Multiple%20Inheritance/q2.cpp): WAP to show multiple inheritance with different function name.
- [x] [q3](./Multiple%20Inheritance/q3.cpp): WAP to show the ambiguity in multiple inheritance.
- [ ] [q4](./Multiple%20Inheritance/q4.cpp): WAP to show multiple inheritance where both base classes provide different methods.
- [ ] [q5](./Multiple%20Inheritance/q5.cpp): WAP to demonstrate multiple inheritance where the derived class accesses public members of both base classes.
- [ ] [q6](./Multiple%20Inheritance/q6.cpp): WAP to show multiple inheritance where one base class contains a constructor, and the derived class calls the constructor.
- [ ] [q7](./Multiple%20Inheritance/q7.cpp): WAP to demonstrate multiple inheritance with two base classes having constructors and destructors.
- [ ] [q8](./Multiple%20Inheritance/q8.cpp): WAP to show multiple inheritance where one base class contains a method with a default argument.
- [ ] [q9](./Multiple%20Inheritance/q9.cpp): WAP to demonstrate multiple inheritance where the derived class calls methods from both base classes.
- [ ] [q10](./Multiple%20Inheritance/q10.cpp): WAP to show multiple inheritance with virtual inheritance to avoid ambiguity.
- [ ] [q11](./Multiple%20Inheritance/q11.cpp): WAP to demonstrate multiple inheritance where both base classes have the same function name, and the derived class resolves ambiguity.
- [ ] [q12](./Multiple%20Inheritance/q12.cpp): WAP to show multiple inheritance where the derived class implements polymorphism using function pointers.

## Multipath Inheritance

- [ ] [q1](./Multipath%20Inheritance/q1.cpp): WAP to show multi path inheritance.
- [ ] [q2](./Multipath%20Inheritance/q2.cpp): WAP to show multipath inheritance where a derived class accesses a method from both parent classes.
- [ ] [q3](./Multipath%20Inheritance/q3.cpp): WAP to demonstrate multipath inheritance where a base class constructor is called twice without virtual inheritance.
- [ ] [q4](./Multipath%20Inheritance/q4.cpp): WAP to show multipath inheritance where the base class has a common method and demonstrate how virtual inheritance resolves ambiguity.
- [ ] [q5](./Multipath%20Inheritance/q5.cpp): WAP to demonstrate multipath inheritance with constructors and destructors in both base and derived classes and show how virtual inheritance helps in correct constructor calling order.

## Multilevel Inheritance

- [x] [q1](./Multilevel%20Inheritance/q1.cpp): WAP to show multi level inheritance.
- [x] [q2](./Multilevel%20Inheritance/q2.cpp): WAP to show multilevel inheritance with base, intermediate, and derived class.
- [x] [q3](./Multilevel%20Inheritance/q3.cpp): WAP to demonstrate multilevel inheritance where each class has its own method.
- [ ] [q4](./Multilevel%20Inheritance/q4.cpp): WAP to show multilevel inheritance where each class contains its own constructor and destructor.
- [ ] [q5](./Multilevel%20Inheritance/q5.cpp): WAP to demonstrate multilevel inheritance with virtual functions.
- [ ] [q6](./Multilevel%20Inheritance/q6.cpp): WAP to show multilevel inheritance where the derived class overrides methods from both intermediate and base classes.
- [ ] [q7](./Multilevel%20Inheritance/q7.cpp): WAP to demonstrate multilevel inheritance with method overriding and dynamic method dispatch using pointers.

## Important

- [ ] [q1](./Important/q1.cpp): Create a class called cricketer with member variables to represent name, age, and number of matches played. From this derive two classes Bowler and Batsmen. Bowler class has number of wickets as member variable and Batsmen class has number of runs and centuries as member variables. Use appropriate member functions in all classes to read and display respective data.
- [ ] [q2](./Important/q2.cpp): Create a class student with data members student ID and name. Create class internal exam with marks first as data member and external exam with marks second. Create class result by inheriting class internal exam and external exam that will add marks of class internal exam and external exam.
- [ ] [q3](./Important/q3.cpp): WAP to show order of constructor(default, parameterized) and destructor call in multiple inheritance. Base class one ename and class two have employee id and child class result.
- [ ] [q4](./Important/q4.cpp): WAP to convert object from class that represent weight of gold in Nepal, tola to object of a class that represent internal gold measurement of weight in gram scale.
- [ ] [q5](./Important/q5.cpp): WAP with three classes students, test, and result by using multi level inheritance. Assume necessary member and function yourself and program with input information input data and calculate marks total and display result.
- [ ] [q6](./Important/q6.cpp): WAP to demonstrate hybrid inheritance where a derived class inherits from both single and multiple inheritance and show how ambiguity is resolved using virtual base classes.
- [ ] [q7](./Important/q7.cpp): WAP to create a base class Shape with derived classes Rectangle, Triangle, and Circle. Each derived class should have a method to calculate the area. Use appropriate constructors to initialize and calculate the area for different shapes.
- [ ] [q8](./Important/q8.cpp): Create a class Person with attributes name and age. Derive classes Employee and Student from Person. Use virtual functions to display different information for Employee (salary) and Student (grade).
- [ ] [q9](./Important/q9.cpp): WAP to demonstrate runtime polymorphism using a base class pointer and derived classes where a method is overridden in each derived class. Show how the base class pointer calls the derived class method during runtime.
- [ ] [q10](./Important/q10.cpp): WAP to implement an example of friend classes where one class can access private and protected members of another class.
