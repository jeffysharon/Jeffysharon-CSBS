#include <iostream>
using namespace std;

int main() {
    int num,n = 0, remainder, original;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (num != 0) {
        remainder = num % 10;  
        n = n * 10 + remainder; 
        num /= 10;  
    }
    if (original == n) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
