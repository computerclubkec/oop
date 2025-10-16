# Object Oriented Programming Codes:

This program contains programs for object oriented programming using C++. The questions listed here falls under the syllabus of IOE (Institute Of Engineering).

## For Explorers:

1. Begin by searching for your questions within the Programs section, which is further categorized into various Object-Oriented Programming (OOP) topics.

2. Once you've located your question, navigate to the directory named after the specific OOP topic it falls under.

3. Check if the question is marked as "checked" to confirm that a solution is available.

4. If you have any feedback or need assistance, you can provide it through the issues section.

## For Contributors:

🍴 **Fork the Repository**:

- Start by forking the repository to create your own copy.

🌿 **Create a Branch**:

- Create a new branch where you'll work on your solution.

💡 **Solve a Question**:

- In the respective directory, solve the question provided.

📝 **Update `README.md`**:

- Add your solution to the `README.md` file of the respective directory. Follow the format below:

EXAMPLE:

```
- [x] [q15](q15.cpp): Write a program to add two numbers.
- [x] [q16](q16.cpp): Write a program to subtract two numbers.
```

📋 **Add Your Name**:

- Include your name in the `Contributors.md` file to be recognized for your contribution.

🚀 **Push and Create a Pull Request**:

- Push your changes to your branch and create a Pull Request to submit your solution.

### NOTE:

Do not use any libraries or headers that is not standard. Example: conio.h , windows.h, etc.

# Programs

## [Introduction to C++ Programs](Introduction/README.md)

1. WAP to illustrate the concept of OOP.
2. WAP to find the prime number in C++.
3. WAP to create class 'time' with data members days, hours, minutes and second. Then add two 'time' object by taking object as argument and also returning object as argument.

## [C++ Language Constructs](CppLanguageConstructs/README.md)

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

## [Classes And Objects](ClassAndObjects/README.md)

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
   The class has three constructor which are: - having no parameter: values of both length and breadth are assigned zero. - having two numbers as parameters: the two numbers are assigned as length and breadth respectively. - having one number as parameter: both length and breadth are assigned that number.
   Now crate objects of "Rectangle" class having none, one and two parameters and print their areas using member function area.
9. WAP to print the name of students by creating a student class. If no name is passed while creating and object of the student class, then the name should be "unknown" otherwise the name should be equal to the string value passed while creating object of the student class.
10. WAP to show how friend function works.
11. Explain friend class with example.
12. WAP to create classes ABC with data member feet and XYZ with data member inch. Add members of class ABC and XYZ using friend function.
13. WAP to add distances D1(feet, inch) and D2(feet, inch). Display result by returning values using friend function.
14. WAP to show passing single argument as an object.
15. WAP to show returning object by normal way and also with nameless object.
16. WAP to add two complex numbers using member function add(). Pass single argument to function, return from function and display result.
17. WAP to add distances D1(feet, inch) and D2(feet, inch). Display result by returning values with nameless object.
18. WAP to add distances D1(feet, inch) and D2(feet, inch). Display result inside function.
19. WAP to swap the numbers by using reference variable.
20. WAP to show static variable and static function.
21. WAP to show the order of creation and destruction using static data members. There must be static keyword in your program to display the value of static data.

## [Operator Overloading](OperatorOverloading/README.md)

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
13. WAP to overload insertion and excretion operator.
14. WAP to overload + and \* operators for complex numbers.


## [Inheritance](Inheritance/README.md)

### Single Inheritance:

1. WAP to show single inheritance with default constructor.
2. WAP to show single inheritance with main function access.
3. WAP to show single inheritance parameterize constructor.
4. WAP to show single inheritance parameterized only in child class.
5. WAP to show single inheritance with same function name of base and derived class.
6. WAP to show parent function call inside child class.
7. WAP to show protected data inside base class.
8. WAP to show parent function call inside child class having same member function name.
9. WAP to show single inheritance with a method in the base class that gets called from the derived class.
10. WAP to demonstrate single inheritance where the base class has private members accessed through public member functions in the derived class.
11. WAP to show single inheritance with the derived class accessing protected members of the base class.
12. WAP to show single inheritance where both base and derived classes have constructors and destructors.
13. WAP to demonstrate single inheritance with method overloading in the derived class.
14. WAP to show single inheritance with multiple parameterized constructors in the base and derived class.
15. WAP to show single inheritance with virtual functions.
16. WAP to demonstrate single inheritance where the derived class overrides the base class method and accesses the overridden method using a pointer to the base class.
17. WAP to show single inheritance where the base class constructor requires an argument passed through the derived class constructor.

### Multiple Inheritance:

1. WAP to show multiple inheritance constructor and destructor.
2. WAP to show multiple inheritance with different function name.
3. WAP to show the ambiguity in multiple inheritance.
4. WAP to show multiple inheritance where both base classes provide different methods.
5. WAP to demonstrate multiple inheritance where the derived class accesses public members of both base classes.
6. WAP to show multiple inheritance where one base class contains a constructor, and the derived class calls the constructor.
7. WAP to demonstrate multiple inheritance with two base classes having constructors and destructors.
8. WAP to show multiple inheritance where one base class contains a method with a default argument.
9. WAP to demonstrate multiple inheritance where the derived class calls methods from both base classes.
10. WAP to show multiple inheritance with virtual inheritance to avoid ambiguity.
11. WAP to demonstrate multiple inheritance where both base classes have the same function name, and the derived class resolves ambiguity.
12. WAP to show multiple inheritance where the derived class implements polymorphism using function pointers.

### Multipath Inheritance:

1. WAP to show multipath inheritance.
2. WAP to show multipath inheritance where a derived class accesses a method from both parent classes.
3. WAP to demonstrate multipath inheritance where a base class constructor is called twice without virtual inheritance.
4. WAP to show multipath inheritance where the base class has a common method and demonstrate how virtual inheritance resolves ambiguity.
5. WAP to demonstrate multipath inheritance with constructors and destructors in both base and derived classes and show how virtual inheritance helps in correct constructor calling order.

### Multilevel Inheritance:

1. WAP to show multi level inheritance.
2. WAP to show multilevel inheritance with base, intermediate, and derived class.
3. WAP to demonstrate multilevel inheritance where each class has its own method.
4. WAP to show multilevel inheritance where each class contains its own constructor and destructor.
5. WAP to demonstrate multilevel inheritance with virtual functions.
6. WAP to show multilevel inheritance where the derived class overrides methods from both intermediate and base classes.
7. WAP to demonstrate multilevel inheritance with method overriding and dynamic method dispatch using pointers.

### Important:

1. Create a class called cricketer with member variables to represent name, age, and number of matches played. From this derive two classes Bowler and Batsmen. Bowler class has number of wickets as member variable and Batsmen class has number of runs and centuries as member variables. Use appropriate member functions in all classes to read and display respective data.
2. Create a class student with data members student ID and name. Create class internal exam with marks first as data member and external exam with marks second. Create class result by inheriting class internal exam and external exam that will add marks of class internal exam and external exam.
3. WAP to show order of constructor (default, parameterized) and destructor call in multiple inheritance. Base class one ename and class two have employee id and child class result.
4. WAP to convert object from class that represent weight of gold in Nepal, tola to object of a class that represent internal gold measurement of weight in gram scale.
5. WAP with three classes students, test, and result by using multi level inheritance. Assume necessary member and function yourself and program with input information input data and calculate marks total and display result.
6. WAP to demonstrate hybrid inheritance where a derived class inherits from both single and multiple inheritance and show how ambiguity is resolved using virtual base classes.
7. WAP to create a base class Shape with derived classes Rectangle, Triangle, and Circle. Each derived class should have a method to calculate the area. Use appropriate constructors to initialize and calculate the area for different shapes.
8. Create a class Person with attributes name and age. Derive classes Employee and Student from Person. Use virtual functions to display different information for Employee (salary) and Student (grade).
9. WAP to demonstrate runtime polymorphism using a base class pointer and derived classes where a method is overridden in each derived class. Show how the base class pointer calls the derived class method during runtime.
10. WAP to implement an example of friend classes where one class can access private and protected members of another class.

## [Polymorphism](Polymorphism/README.md)

1. WAP to show virtual function mechanism.
2. WAP to show pure virtual function mechanism and abstract class.
3. WAP to show virtual destructor.
4. WAP to show dynamic cast operator.
5. WAP to show type id operator.
6. A bookshop in Kathmandu valley sells books and DVD. Two classes Book and DVD are inherited from the astract base class Media. The Media class has common data members such as title and publication. The class Book has data members such as number_of_pages and that of DVD has data member such as duration. Each class members has member functions such as read data() and showdata(). WAP for modeling the class hierarchy for book shop and process objects of these classes using pointers to the base class.
7. Design a class that represents paper. Create class book, nespaper, copy derived from class paper. Add necessary member function to make your program meaningful and also show constructor and virtual destructor. Create object Dynamically using pointer to the base class.
8. Demonstrate runtime polymorphism using base class pointer and virtual function.

## [File Handling](FileHandling/README.md)

1. WAP to open a file using constructor.
2. WAP to open a file using member function.
3. WAP to user r/w file using fstream.
4. WAP using fin and fout.
5. WAP to show use of manipulators.
6. WAP to store book database in a file. Design a book class with members ISBN number, name of author, title, price. The Program should able to store book object to a file, find a book in the database and display according to ISBN number. Also display all records.
   - getInput()
   - display()
   - add_record
   - show_record
   - search_record_by_isbn_number & modify also.

## [Templates](Templates/README.md)

### Function Template

1. WAP to show more than one template mechanism.
2. WAP to show function template overloading with function.
3. WAP to show overloading template with template and normal function.

### Class Template

1. WAP to find MAX value of array with default argument with class template.
2. WAP to show use of multiple template.
3. WAP to show template and non template argument.
4. WAP to find maximum and minimum value of an array using class template.
5. WAP to demonstrate different functions of vector and reverse() which is algorithm.
6. WAP to compare 2 values using function template and display largest value. Check your program for char, int and float type data.
7. Write a C++ program to implement a generic Stack class using templates.

## [Exception Handling](ExceptionHandling/README.md)

1. WAP to show simple try catch throw.
2. WAP to show throwing inside function.
3. WAP to show multiple catch statements.
4. WAP to show catching all exceptions.
5. WAP to show specifying exceptions.
6. WAP to show re-throwing exception.
7. WAP to show try catch throw in user define classes type.
8. WAP to compute square root of a number. THe input value must be tested for validity. If it is negative an exception must be raised.
9. WAP to read name, roll number and marks that catches multiple exception using exception class if roll number is negative and marks greater than full marks.
10. WAP to show how do you throw only specified exception from a function.
11. WAP to throw multiple exception. Using exception class and each exception is handled by separate handler.
