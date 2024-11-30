#include <iostream>
using namespace std;

// Function to compute sum and average
void computeSumAndAverage(int* arr, int size, int* sum, float* average) {
    *sum = 0;
    for (int i = 0; i < size; ++i) {
        *sum += *(arr + i); // Add elements to sum
    }
    *average = static_cast<float>(*sum) / size; // Calculate average
}

int main() {
    const int size = 10;
    int numbers[size];
    int sum;
    float average;

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> *(numbers + i); // Store input using pointer notation
    }

    computeSumAndAverage(numbers, size, &sum, &average);

    cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;

    return 0;
}
