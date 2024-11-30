#include <iostream>
using namespace std;

// Function to compute the sum of array elements
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(arr + i); // Accessing elements using pointer arithmetic
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n]; // Dynamic array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = sumArray(arr, n);
    cout << "The sum of the array elements is: " << sum << endl;

    delete[] arr; // Free dynamically allocated memory
    return 0;
}
