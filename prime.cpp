#include <iostream>
using namespace std;
int main() {
    int num, i, j, n;
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1) {
        cout << "Not Prime" << endl;
    } else {
        n = 1; 
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                n = 0; 
                break; 
            }
        }
        if (n == 1) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}
