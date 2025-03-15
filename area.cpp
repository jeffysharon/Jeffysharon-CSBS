#include <iostream>
using namespace std;


class AreaCalculator;

class Rectangle {
private:
    int length;
    int breadth;

public:
   
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    
    friend class AreaCalculator;
};


class AreaCalculator {
public:
    
    int calculateArea(Rectangle& rect) {
        return rect.length * rect.breadth;  
    }
};

int main() {
    
    int length, breadth;
    
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;
    
    
    Rectangle rect(length, breadth);
    
   
    AreaCalculator areaCalc;

    
    cout << "Area of Rectangle: " << areaCalc.calculateArea(rect) << endl;

    return 0;
}