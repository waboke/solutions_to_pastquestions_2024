#include <iostream>
using namespace std;

// Function to add two numbers using pointers
void addNumbers(int* num1, int* num2, int* result) {
    *result = *num1 + *num2; // Add values and store in result
}

int main() {
    int a, b, sum;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    addNumbers(&a, &b, &sum);

    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
