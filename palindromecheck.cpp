#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num; // Store the original number
    int reversed = 0, digit;

    while (num > 0) {
        digit = num % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    return original == reversed; // Compare the original and reversed numbers
}

int main() {
    int number;
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
