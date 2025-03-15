#include <iostream>
using namespace std;

class Box {
private:
    float length, breadth, height;

public:
   
    Box(float l, float b, float h) : length(l), breadth(b), height(h) {}

    
    friend void compareVolume(Box box1, Box box2);

    
    float volume() {
        return length * breadth * height;
    }
};


void compareVolume(Box box1, Box box2) {
    float volume1 = box1.volume();
    float volume2 = box2.volume();

    cout << "Box 1 Volume: " << volume1 << endl;
    cout << "Box 2 Volume: " << volume2 << endl;

    if (volume1 > volume2) {
        cout << "Larger Box: Box 1" << endl;
    } else if (volume2 > volume1) {
        cout << "Larger Box: Box 2" << endl;
    } else {
        cout << "Both boxes have the same volume" << endl;
    }
}

int main() {
    
    Box box1(2, 3, 4); 
    Box box2(3, 3, 3); 

   
    compareVolume(box1, box2);

    return 0;
}