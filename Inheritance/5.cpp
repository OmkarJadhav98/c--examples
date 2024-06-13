#include <iostream>
#include <string>

// Base class: Machine
class Machine {
protected:
    std::string name;

public:
    Machine(const std::string& n) : name(n) {}
    void start() {
        std::cout << name << " is starting. ";
    }
};

// Derived class: WashingMachine (inherits from Machine)
class WashingMachine : public Machine {
public:
    WashingMachine(const std::string& n) : Machine(n) {}
    void wash() {
        std::cout << "Washing clothes in the " << name << ". ";
    }
};

// Derived class: DishWasher (inherits from Machine)
class DishWasher : public Machine {
public:
    DishWasher(const std::string& n) : Machine(n) {}
    void washDishes() {
        std::cout << "Washing dishes in the " << name << ". ";
    }
};

// Derived class: CarWashingMachine (inherits from Machine)
class CarWashingMachine : public Machine {
public:
    CarWashingMachine(const std::string& n) : Machine(n) {}
    void washCar() {
        std::cout << "Washing a car in the " << name << ". ";
    }
};

int main() {
    // Create instances of each machine
    WashingMachine wm("Front-Load Washer");
    DishWasher dw("Countertop Dishwasher");
    CarWashingMachine cwm("Automatic Car Wash");

    // Start and perform actions
    wm.start();
    wm.wash();
    std::cout << std::endl;

    dw.start();
    dw.washDishes();
    std::cout << std::endl;

    cwm.start();
    cwm.washCar();
    std::cout << std::endl;

    return 0;
}
