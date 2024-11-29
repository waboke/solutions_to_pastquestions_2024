#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int* num) {
    if (*num <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i * i <= *num; ++i) {
        if (*num % i == 0) return false; // Divisible by i means not prime
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    if (isPrime(&number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
