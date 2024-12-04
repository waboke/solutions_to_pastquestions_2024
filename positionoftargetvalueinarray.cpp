#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int* arr, int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) == target) { // Compare the target value
            return i; // Return the index
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    cout << "Enter the target value to search for: ";
    cin >> target;

    int position = linearSearch(arr, n, target);

    if (position != -1) {
        cout << "Target value found at index: " << position << endl;
    } else {
        cout << "Target value not found in the array." << endl;
    }

    delete[] arr; // Free allocated memory
    return 0;
}
