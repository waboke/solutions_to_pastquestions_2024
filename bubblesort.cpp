#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) { // Compare adjacent elements
                // Swap elements using pointers
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

// Function to display the array
void displayArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    cout << "Original array: ";
    displayArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    displayArray(arr, n);

    delete[] arr; // Free allocated memory
    return 0;
}
