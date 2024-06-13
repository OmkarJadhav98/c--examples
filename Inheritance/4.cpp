#include <iostream>
#include <string>

// Base class: Person
class Person {
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {}
    void introduce() {
        std::cout << "Hello, I am " << name << ". ";
    }
};

// Derived class: Employee (inherits from Person)
class Employee : public Person {
private:
    std::string department;

public:
    Employee(const std::string& n, const std::string& dept) : Person(n), department(dept) {}
    void displayDepartment() {
        std::cout << "I work in the " << department << " department. ";
    }
};

// Derived class: Developer (inherits from Employee)
class Developer : public Employee {
private:
    std::string programmingLanguage;

public:
    Developer(const std::string& n, const std::string& dept, const std::string& lang)
        : Employee(n, dept), programmingLanguage(lang) {}
    void writeCode() {
        std::cout << "I write code in " << programmingLanguage << ". ";
    }
};

int main() {
    // Create instances of Developer
    Developer alice("Alice", "Engineering", "C++");
    Developer bob("Bob", "IT", "Java");

    // Introduce, display department, and mention programming language
    alice.introduce();
    alice.displayDepartment();
    alice.writeCode();
    std::cout << std::endl;

    bob.introduce();
    bob.displayDepartment();
    bob.writeCode();
    std::cout << std::endl;

    return 0;
}
