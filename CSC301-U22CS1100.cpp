#include <iostream>
#include <string>
using namespace std;

// Class for Question 2a: Prime Number Check
class PrimeCheck {
public:
    // Function to check if a number is prime
    void isPrime() {
        int num;
        cout << "Enter a number to check if it's prime: ";
        cin >> num;
        int count = 0;
        if (num <= 1) {
            cout << num << " is not a prime number" << endl;
        } else {
            for (int i = 1; i <= num; i++) {
                if (num % i == 0) {
                    count++;
                }
            }
            if (count == 2) {
                cout << num << " is a prime number" << endl;
            } else {
                cout << num << " is not a prime number" << endl;
            }
        }
    }
};

// Class for Question 2b: Sum of Array Elements
class SumArray {
public:
    // Function to calculate the sum of elements in an array
    void calculateSum() {
        int n, sum = 0;
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        int arr[n];
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
            sum += arr[i];
        }
        cout << "Sum of all elements in the array is: " << sum << endl;
    }
};

// Class for Question 3a: Bubble Sort
class BubbleSort {
public:
    // Function to sort an array using bubble sort
    void bubblesort() {
        int n;
        cout << "Enter the number of elements to be stored in the array: ";
        cin >> n;
        int arr[n];
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        cout << "After sorting, the array is:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << endl;
        }
    }
};

// Class for Question 3b: Calculate Sum and Average of 10 Numbers
class SumAndAverage {
public:
    // Function to calculate sum and average of 10 numbers
    void calculate() {
        int numbers[10], sum = 0;
        float average;
        cout << "Enter 10 numbers:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Number " << i + 1 << ": ";
            cin >> numbers[i];
            sum += numbers[i];
        }
        average = static_cast<float>(sum) / 10;
        cout << "The sum of the 10 numbers is: " << sum << endl;
        cout << "The average is: " << average << endl;
    }
};

// Class for Question 4a: String Length
class StringLength {
public:
    // Function to calculate the length of a string
    void strLength() {
        char str[50];
        cout << "Enter a string: ";
        cin.ignore();
        cin.getline(str, 50);
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        cout << "The length of the string \"" << str << "\" is: " << length << endl;
    }
};

// Class for Question 4b: Linear Search
class LinearSearch {
public:
    // Function to perform linear search in an array
    void linearSearch() {
        int n, target;
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        int arr[n];
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
        cout << "Enter the target value to find: ";
        cin >> target;
        int position = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                position = i + 1;
                break;
            }
        }
        if (position != -1)
            cout << "The target value " << target << " is found at position: " << position << endl;
        else
            cout << "The target value " << target << " is not found in the array." << endl;
    }
};

// Class for Question 5a: Add Two Numbers
class AddNumbers {
public:
    // Function to add two numbers
    void addNumbers() {
        int num1, num2;
        cout << "Input the first number: ";
        cin >> num1;
        cout << "Input the second number: ";
        cin >> num2;
        cout << "The sum of the entered numbers is: " << num1 + num2 << endl;
    }
};

// Class for Question 5b: Palindrome Check
class PalindromeCheck {
public:
    // Function to check if a number is a palindrome
    void isPalindrome() {
        int num, original, reversed = 0, remainder;
        cout << "Enter a number to check if it's a palindrome: ";
        cin >> num;
        original = num;
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        if (original == reversed) {
            cout << original << " is a palindrome number." << endl;
        } else {
            cout << original << " is not a palindrome number." << endl;
        }
    }
};

// Class for Question 6a: Average Marks of Students
class StudentAverage {
public:
    // Function to compute the average marks of two students
    void computeAverage() {
        struct Student {
            string name;
            int age;
            float totalMarks;
        };
        Student s1, s2;
        cout << "Enter details for student 1:\n";
        cout << "Name: ";
        cin >> s1.name;
        cout << "Age: ";
        cin >> s1.age;
        cout << "Total Marks: ";
        cin >> s1.totalMarks;

        cout << "Enter details for student 2:\n";
        cout << "Name: ";
        cin >> s2.name;
        cout << "Age: ";
        cin >> s2.age;
        cout << "Total Marks: ";
        cin >> s2.totalMarks;

        float average = (s1.totalMarks + s2.totalMarks) / 2.0f;
        cout << "The average of total marks is: " << average << endl;
    }
};

// Class for Question 6b: Number Properties
class NumberProperties {
public:
    // Function to check number sign and parity
    void checkProperties() {
        int num;
        cout << "Input a number (integer): ";
        cin >> num;
        if (num == 0) {
            cout << "The number is Zero." << endl;
        } else {
            string sign = (num > 0) ? "positive" : "negative";
            string parity = (num % 2 == 0) ? "even" : "odd";
            cout << "Number is " << sign << "-" << parity << "." << endl;
        }
    }
};

// Class for Question 7a: Factorial Calculation
class Factorial {
public:
    // Function to calculate the factorial of a number
    void factorial() {
        int n;
        cout << "Enter a number to find its factorial: ";
        cin >> n;
        if (n < 0) {
            cout << "Error! Factorial of a negative number doesn't exist." << endl;
        } else {
            long long fact = 1;
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
            cout << "The factorial of " << n << " is: " << fact << endl;
        }
    }
};

// Class for Question 7b: Display Personal Information
class PersonalInfo {
public:
    // Function to display personal information
    void display() {
        cout << "Name: Omale Joseph\n";
        cout << "DOB: July 14, 1975\n";
        cout << "Mobile: 07012345678\n";
    }
};

// Main function to test all the classes
int main() {
    PrimeCheck().isPrime();
    SumArray().calculateSum();
    BubbleSort().bubblesort();
    SumAndAverage().calculate();
    StringLength().strLength();
    LinearSearch().linearSearch();
    AddNumbers().addNumbers();
    PalindromeCheck().isPalindrome();
    StudentAverage().computeAverage();
    NumberProperties().checkProperties();
    Factorial().factorial();
    PersonalInfo().display();

    return 0;
}
