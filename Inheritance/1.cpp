#include <iostream>
using namespace std;

// Base class: Vehicle
class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called." << endl;
    }

    void start() {
        cout << "Vehicle started." << endl;
    }
};

// Derived class: Car (inherits from Vehicle)
class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor called.";
    }

    void drive() {
        cout << "Car is being driven." << endl;
    }
};

// Derived class: Bike (inherits from Vehicle)
class Bike : public Vehicle {
public:
    Bike() {
        cout << "Bike constructor called." << endl;
    }

    void ride() {
        cout << "Bike is being ridden." << endl;
    }
};

// Derived class: Truck (inherits from Vehicle)
class Truck : public Vehicle {
public:
    Truck() {
        cout << "Truck constructor called." << endl;
    }

    void haul() {
        cout << "Truck is hauling cargo." << endl;
    }
};

// Derived class: Rickshaw (inherits from Vehicle)
class Rickshaw : public Vehicle {
public:
    Rickshaw() {
        cout << "Rickshaw constructor called." << endl;
    }

    void pull() {
        cout << "Rickshaw is being pulled." << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();
    myCar.drive();

    Bike myBike;
    myBike.start();
    myBike.ride();

    Truck myTruck;
    myTruck.start();
    myTruck.haul();

    Rickshaw myRickshaw;
    myRickshaw.start();
    myRickshaw.pull();

    return 0;
}
