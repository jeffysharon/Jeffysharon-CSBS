#include <iostream>
using namespace std;


class Shape {
protected:
    int length, breadth;

public:
    
    Shape(int l, int b) {
        length = l;
        breadth = b;
    }
};


class Rectangle : public Shape {
public:
    
    Rectangle(int l, int b) : Shape(l, b) {}

    
    void displayArea() {
        int area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    int length, breadth;

  
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;

    
    Rectangle rect(length, breadth);

    
    rect.displayArea();

    return 0;
}