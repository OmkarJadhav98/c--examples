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

// Derived class: Doctor (inherits from Person)
class Doctor : public Person {
private:
    std::string specialization;

public:
    Doctor(const std::string& n, const std::string& spec) : Person(n), specialization(spec) {}
    void displaySpecialization() {
        std::cout << "I am a doctor specialized in " << specialization << ". ";
    }
};

// Derived class: Surgeon (inherits from Doctor)
class Surgeon : public Doctor {
private:
    std::string surgeryType;

public:
    Surgeon(const std::string& n, const std::string& spec, const std::string& surgery)
        : Doctor(n, spec), surgeryType(surgery) {}
    void performSurgery() {
        std::cout << "I perform " << surgeryType << " surgeries. ";
    }
};

int main() {
    // Create instances of Surgeon
    Surgeon john("John", "Cardiology", "heart");
    Surgeon mary("Mary", "Orthopedics", "knee");

    // Introduce and display specialization
    john.introduce();
    john.displaySpecialization();
    john.performSurgery();
    std::cout << std::endl;

    mary.introduce();
    mary.displaySpecialization();
    mary.performSurgery();
    std::cout << std::endl;

    return 0;
}
