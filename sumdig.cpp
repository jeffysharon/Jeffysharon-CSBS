#include <iostream>
using namespace std;
int main() {
    int num, n = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        remainder = num % 10;
        n += remainder;  
        num /= 10;  
    }
    cout << "Sum of the num is : " << n << endl;
    return 0;
}
