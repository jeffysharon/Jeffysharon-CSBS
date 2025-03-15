#include <iostream>
#include <cmath> 
using namespace std;


class Circle;
float calculateArea(Circle& c);  

class Circle {
private:
    float radius;

public:
    
    Circle(float r) {
        radius = r;
    }

    
    friend float calculateArea(Circle& c);
};


float calculateArea(Circle& c) {
    return M_PI * c.radius * c.radius;  
}

int main() {
    
    float radius;
    
    cout << "Enter Radius: ";
    cin >> radius;
    
    
    Circle circle(radius);
    
    
    cout << "Area of Circle: " << calculateArea(circle) << endl;

    return 0;
}