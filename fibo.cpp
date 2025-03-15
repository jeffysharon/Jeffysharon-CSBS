#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int first = 0, second = 1;
    if (n > 0) {
        cout << first << " "; 
        for (int i = 1; i < n; i++) {
            cout << second << " "; 
            int next = first + second; 
            first = second; 
            second = next; 
        }
        cout << endl;
    } else {
        cout << "Enter a positive number." << endl;
    }

    return 0;
}
