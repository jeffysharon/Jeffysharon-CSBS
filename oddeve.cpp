#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int evenSum = 0, oddSum = 0;
    int size = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i]; 
        }
    }
    cout << "Sum of Even: " << evenSum << ", Sum of Odd: " << oddSum << endl;
    return 0;
}
