#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Person() {
        std::cout << "Default constructor called." << std::endl;
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Person(std::string personName, int personAge) {
        std::cout << "Parameterized constructor called." << std::endl;
        name = personName;
        age = personAge;
    }

    // Copy constructor
    Person(const Person& otherPerson) {
        std::cout << "Copy constructor called." << std::endl;
        name = otherPerson.name;
        age = otherPerson.age;
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Member function to display person information
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Default constructor
    Person person1;
    person1.displayInfo();

    // Parameterized constructor
    Person person2("Alice", 25);
    person2.displayInfo();

    // Copy constructor
    Person person3 = person2;
    person3.displayInfo();

    return 0;
}
