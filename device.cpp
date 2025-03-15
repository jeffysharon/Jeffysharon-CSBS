#include <iostream>
#include <string>
using namespace std;


class Device {
protected:
    string brand;
    double price;

public:
   
    Device(string b, double p) : brand(b), price(p) {}

    
    void display() const {
        cout << "Device: " << brand << ", Price: $" << price << endl;
    }
};


class Laptop : public Device {
private:
    string processor;

public:
    
    Laptop(string b, double p, string proc) : Device(b, p), processor(proc) {}

    
    void display() const {
        Device::display();
        cout << "Processor: " << processor << endl;
    }
};


class Smartphone : public Device {
private:
    int cameraMP;

public:
    
    Smartphone(string b, double p, int cam) : Device(b, p), cameraMP(cam) {}

    
    void display() const {
        Device::display();
        cout << "Camera: " << cameraMP << " MP" << endl;
    }
};

int main() {
   
    Laptop laptop("Dell", 1000, "Intel i7");

   
    Smartphone smartphone("Samsung", 800, 48);

   
    laptop.display();

    
    smartphone.display();

    return 0;
}