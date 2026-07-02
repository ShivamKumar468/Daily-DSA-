#include <iostream>
using namespace std;

int main() {

    int arr[] = {3, 4, 5, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int secondLargest = arr[0];

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest << endl;

    return 0;
}