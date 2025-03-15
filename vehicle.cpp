#include <iostream>
using namespace std;


class Vehicle {
protected:
    string vehicleName;
public:
    
    Vehicle(string vName) {
        vehicleName = vName;
        cout << "Vehicle: " << vehicleName << endl;
    }
};


class Car : public Vehicle {
protected:
    string carModel; 
public:
    
    Car(string vName, string cModel) : Vehicle(vName) {
        carModel = cModel;
        cout << "Car: " << carModel << endl;
    }
};


class Bike : public Vehicle {
protected:
string bikeModel; 
public:
    
    Bike(string vName, string bModel) : Vehicle(vName) {
        bikeModel = bModel;
        cout << "Bike: " << bikeModel << endl;
    }
};


class Garage : public Car, public Bike {
public:
    
    Garage(string vName, string cModel, string bModel) 
        : Car(vName, cModel), Bike(vName, bModel) {}
};

int main() {
    
    Garage garage("Tesla", "Model S", "Kawasaki Ninja");

    return 0;
}