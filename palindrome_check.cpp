#include <iostream>
using namespace std;

struct PalindromeChecker {
    int num;

    bool isPalindrome() {
        int original = num, reversed = 0, remainder;
        while (num > 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        return original == reversed;
    }
};

int main() {
    PalindromeChecker checker;
    cout << "Enter a number: ";
    cin >> checker.num;

    if (checker.isPalindrome())
        cout << "The number is a palindrome." << endl;
    else
        cout << "The number is not a palindrome." << endl;

    return 0;
}