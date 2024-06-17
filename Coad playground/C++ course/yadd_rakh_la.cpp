/*In C++, the dot (.) operator is used for member access in object-oriented programming. It is used to access the members (data members or member functions) of an object. Here are the main uses of the dot operator:

Accessing Data Members:

cpp
Copy code
class MyClass {
public:
    int myVariable;
};

MyClass obj;
obj.myVariable = 42; // Accessing and assigning a value to myVariable
Invoking Member Functions:

cpp
Copy code
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

Calculator calc;
int result = calc.add(3, 4); // Invoking the add function
Accessing Members of Class Instances (Objects):

cpp
Copy code
class Point {
public:
    int x;
    int y;
};

Point p1;
p1.x = 10;
p1.y = 20;
In contrast, the arrow (->) operator is used to access members of an object through a pointer to that object. For example:

cpp
Copy code
MyClass* ptr = new MyClass();
ptr->myVariable = 42; // Accessing myVariable through a pointer
In summary, the dot operator is fundamental for working with class instances and objects in C++ and is used to access their members.*/