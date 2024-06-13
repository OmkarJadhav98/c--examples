#include <iostream>
using namespace std;

// Base class: Calculation
class Calculation {
public:
    virtual double perform(double num1, double num2) const = 0; // Pure virtual function
};

// Derived class: Addition (inherits from Calculation)
class Addition : public Calculation {
public:
    double perform(double num1, double num2) const override {
        return num1 + num2;
    }
};

// Derived class: Subtraction (inherits from Calculation)
class Subtraction : public Calculation {
public:
    double perform(double num1, double num2) const override {
        return num1 - num2;
    }
};

// Derived class: Multiplication (inherits from Calculation)
class Multiplication : public Calculation {
public:
    double perform(double num1, double num2) const override {
        return num1 * num2;
    }
};

// Derived class: Division (inherits from Calculation)
class Division : public Calculation {
public:
    double perform(double num1, double num2) const override {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
    }
};

int main() {
    double num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    Calculation* calc;

    switch (operation) {
        case '+':
            calc = new Addition();
            break;
        case '-':
            calc = new Subtraction();
            break;
        case '*':
            calc = new Multiplication();
            break;
        case '/':
            calc = new Division();
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }

    double result = calc->perform(num1, num2);
    cout << "Result: " << result << endl;

    delete calc; // Clean up memory

    return 0;
}
