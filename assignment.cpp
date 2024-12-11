#include <iostream>
#include <cstring>
using namespace std;

class NumberOperations {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }

    // Function to calculate the sum of array elements
    int calculateSum(int *arr, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    // Bubble Sort function to sort an array
    void bubbleSort(int *arr, int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    // Function to check if a number is a palindrome
    bool isPalindrome(int num) {
        int original = num, reversed = 0, remainder;
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        return original == reversed;
    }

    // Function to add two numbers using pointers
    void addNumbers(int *num1, int *num2, int *result) {
        *result = *num1 + *num2;
    }

    // Function to find the position of a target value in an array using linear search
    int linearSearch(int *arr, int size, int target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }

    // Function to calculate the length of a string
    int stringLength(const char *str) {
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        return length;
    }

    // Function to check if a number is odd, even, positive, or negative
    void checkNumber(int num) {
        if (num > 0) {
            cout << "The number is positive." << endl;
        } else if (num < 0) {
            cout << "The number is negative." << endl;
        } else {
            cout << "The number is zero." << endl;
        }

        if (num % 2 == 0) {
            cout << "The number is even." << endl;
        } else {
            cout << "The number is odd." << endl;
        }
    }

    // Function to input and display student details and calculate average marks
    void studentDetails() {
        struct Student {
            string name;
            int age;
            float totalMarks;
        };

        Student students[2];
        float averageMarks = 0;

        // Input data for two students
        for (int i = 0; i < 2; i++) {
            cout << "Enter details for Student " << i + 1 << ":" << endl;
            cout << "Name: ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Age: ";
            cin >> students[i].age;
            cout << "Total Marks: ";
            cin >> students[i].totalMarks;
        }

        // Display student information and calculate average marks
        cout << "\nStudent Details:" << endl;
        for (int i = 0; i < 2; i++) {
            cout << "Student " << i + 1 << ":" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Total Marks: " << students[i].totalMarks << endl;
            averageMarks += students[i].totalMarks;
        }

        averageMarks /= 2;
        cout << "\nAverage Marks: " << averageMarks << endl;
    }
};

int main() {
    NumberOperations operations;

    // Example 1: Check if a number is prime
    int num1;
    cout << "Enter a number to check if it is prime: ";
    cin >> num1;
    if (operations.isPrime(num1)) {
        cout << num1 << " is a prime number." << endl;
    } else {
        cout << num1 << " is not a prime number." << endl;
    }

    // Example 2: Sum of elements in an array
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Sum of elements in array: " << operations.calculateSum(arr, 5) << endl;

    // Example 3: Bubble Sort of an array
    int arr2[] = {5, 2, 9, 1, 5, 6};
    operations.bubbleSort(arr2, 6);
    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Example 4: Check if a number is a palindrome
    int num2;
    cout << "Enter a number to check if it is a palindrome: ";
    cin >> num2;
    if (operations.isPalindrome(num2)) {
        cout << num2 << " is a palindrome." << endl;
    } else {
        cout << num2 << " is not a palindrome." << endl;
    }

    // Example 5: Add two numbers using pointers
    int a = 10, b = 20, sum;
    operations.addNumbers(&a, &b, &sum);
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    // Example 6: Linear search for a target in an array
    int target = 9;
    int index = operations.linearSearch(arr2, 6, target);
    if (index != -1) {
        cout << "Target " << target << " found at index: " << index << endl;
    } else {
        cout << "Target " << target << " not found." << endl;
    }

    // Example 7: Calculate string length
    const char *str = "Hello, World!";
    cout << "Length of the string is: " << operations.stringLength(str) << endl;

    // Example 8: Check if a number is odd, even, positive, or negative
    int num3;
    cout << "Enter a number to check if it is odd, even, positive, or negative: ";
    cin >> num3;
    operations.checkNumber(num3);

    // Example 9: Input student details and calculate average marks
    operations.studentDetails();

    return 0;
}