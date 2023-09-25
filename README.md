# Object Oriented Programming Codes:

This repository contains code for the OOP problems mentioned in `WAPs.pdf`.

## For Learners:
	1. Check `WAPs.pdf`.
	2. Choose your questions and solve it.
	3. If stucked, check the solution mentioned in equivalent directories.
 
## For Contributors:
	1. Fork the Repo
	2. Create a branch
	3. Solve a question in respective directory.
	4. add the following to `README.md` file of respective directory:
	EXAMPLE:
	- [x] [q15](q15.cpp): WAP to add two numbers.
	- [x] [q16](q16.cpp): WAP to subtract two numbers.
	5. add your name to `Contributors.md`
	6. Push and Create a Pull Request

### NOTE:
 	Do not use any libraries or headers that is not standard. Example: conio.h , windows.h, etc.


# Programs

## Introduction to C++ Programs

1. WAP to illustrate the concept of OOP.
2. WAP to find the prime number in C++.
3. WAP to create class 'time' with data members days, hours, minutes and second. Then add two 'time' object by taking object as argument and also returning object as argument.

## C++ Language Constructs

1. WAP to add and subtract two numbers.
2. WAP to add and subtract two numbers using function and display result inside function.
3. WAP to add and subtract two numbers using function and display result from main.
4. WAP to show function overloading.
5. WAP to calculate area of circle(radius), rectangle(l,b), area of triangle(a,b,c) using function overloading.
6. WAP to show default argument.
7. WAP to calculate price of n items. Pass number of items and unit price to a function and return total price. If unity price is not specified use Default price.
8. WAP to show DMA.
9. WAP to take n numbers from user and display their average. Also create memory dynamically for array and delete it.
10. WAP to show the use of inline function.
11. WAP to show reference variable.
12. WAP to show passing argument as reference.
13. WAP to show return by reference.
14. WAP to swap 2 values using function and reference variable. Display result from main.
15. WAP to show how namespace works.
16. WAP to create file named "programmerone.cpp" with function display. Also create file named "Programmetwo.cpp" with function named display. Access both display from third program named "result.cpp". Use namespace whenever needed.

## Classes And Objects

1. WAP to access public data from main function.
2. WAP to access the data from the function outside the class.
3. WAP to access the data from the function inside the class.
4. Create a class named "Animal" with data and methods as follows:
    - Data: name, id_number, cost;
    - Methods: void setdata(char, int, float) and void showdata()
    - Create two different objects of type "Animals" and use setdata() to set the data member values and use showdata() to display them.
5. WAP to create a class student. Ask user to enter name and marks obtained in 5 different subjects. The program should print the name and total marks obtained by students.
6. WAP to show different type of constructor (default, parameterized and copy) and destructor.
7. Explain all constructor with and display appropriate message when object goes out of scope.
8. Create a class named "Rectangle" with two data members-length and breadth and a function to calculate the are which is length x breath.
    The class has three constructor which are:
        - having no parameter: values of both length and breadth are assigned zero.
        - having two numbers as parameters: the two numbers are assigned as length and breadth respectively.
        - having one number  as parameter: both length and breadth are assigned that number.
    Now crate objects of "Rectangle" class having none, one and two parameters and print their areas using member function area.
9. WAP to prnit the name of students by creating a student class. If no name is passed while creating and object of the student clas, then the name should be "unknown" otherwise the name should be equal to the string value passed while creating object of the student class.
10. WAP to show how friend function works.
11. Expxlain friend class with exampel.
12. WAP to create classes ABC with data member feet and XYZ with data member inch. Add memebers of class ABC and XYZ using friend function.
13. WAP to add distances D1(feet, inch) and D2(feet, inch). Display result by returning values using friend function.
14. WAP to show passing single argument as an object.
15. WAP to show returnign object by normal way and also with nameless object.
16. WAP to add two complex numbers using memer function add(). Pass single argument to function, return from function and display result.
17. WAP to add distances D1(feet, inch) and D2(feet, inch). Dipslay result by returning values with nameless object.
18. WAP to add distances D1(feet, inch) and D2(feet, inch). Display result inside function.
19. WAP to swap the numbers by using reference variable.
20. WAP to show static variable and static function.
21. WAP to show the order of creation and destruction using static data members. There must be static keyword in your program to display the value of static data.

## Operator Overloading

1. WAP to show conversion from Basic to User Defined.
2. WAP to show conversion from User Defined to Basic.
3. WAP to show conversion between User Defined to User Defined both destination and source conversion.
4. WAP to overload unary operator(++,--).
5. WAP to overload pre-decrement and post-decrement operator.
6. WAP to overload binary operator + using member function.
7. WAP to overload binary operator + using friend function.
8. WAP to add and subtract 2 distances d1 and d2 (feet, inch) using operator overloading + and - using member function.
9. WAP to add and subtract 2 distances d1 and d2 (feet, inch) using operator overloading + and - using friend function.
10. WAP to overload >, <, == operator to compare two distances(feet, inch) using the concept of operator overloading using member function.
11. WAP to overload >, <, == operator to compare two distances(feet, inch) using the concept of operator overloading using friend function.
12. WAP to overload >, <, == operator to compare two amount using the concept of overloading.
13. WAP to overload insertion and excertion operator.

## Inheritance

### Single Inheritance:

1. WAP to show single inheritance with default constructor.
2. WAP to show single inheritance with main function access.
3. WAP to show single inheritance parameterize constructor.
4. WAP to show single inheritance parameterized only in child class.
5. WAP to show single inheritance with same function name of base and derived class.
6. WAP to show parent function call inside child class.
7. WAP to show protected data inside base class.
8. WAP to shw parent function call inside child class having same member function name.

## Multiple Inheritance:

1. WAP to show multiple inheritance constructor and destructor.
2. WAP to show multiple inheritance with different function name.
3. WAP to show the ambiguity in multiple inheritance.

## Multilevel Inheritance:

1. WAP to show multi level inheritance.

## Multipath Inheritance:

1. WAP to show multi path inheritance.

## Important:

1. Create a class called cricketer with member variables to represent name, age, and number of matches played. From this derive two classes Bowler and Batsmen. Bowler class has number of wickets as member variable and Batsmen class has number of runs and centuries as member variables. Use appropriate member functions in all classes to read and display respective data.
2. Create a class student with data members studen ID and name. Create class internal exam with marks first as data member and external exam with marks second. Create class result by inheriting class internal exam and external exam that will add marks of class internal exam and external exam.
3. WAP to show order of constructor(default, parameterized) and destructor call in multiple inheritance. Base class one ename and class two have employee id and child class result.
4. WAP to convert object from class that represent weight of gold in Nepal, tola to object of a class that represent internal gold measurement of weight in gram scale.
5. WAP with three classes students, test, and result by using multi level inheritance. Assume necessary member and function yourself and program with input information input data and calculate marks total and display result.


