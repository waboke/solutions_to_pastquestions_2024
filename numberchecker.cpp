#include <iostream>
using namespace std;

// Function to check if a number is even or odd
void checkEvenOdd(int* num) {
    if (*num % 2 == 0) {
        cout << *num << " is even." << endl;
    } else {
        cout << *num << " is odd." << endl;
    }
}

// Function to check if a number is positive or negative
void checkPositiveNegative(int* num) {
    if (*num > 0) {
        cout << *num << " is positive." << endl;
    } else if (*num < 0) {
        cout << *num << " is negative." << endl;
    } else {
        cout << *num << " is zero." << endl;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    checkEvenOdd(&number);
    checkPositiveNegative(&number);

    return 0;
}
