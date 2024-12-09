
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class MathOperations {
public:
    // Function to check if a number is prime
    bool isPrime(int number) {
        if (number <= 1) return false;
        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) return false;
        }
        return true;
    }

    // Function to compute the sum of all elements in an array
    int arraySum(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    MathOperations mathOps;

    // Test for prime number function
    int num;
    cout << "Enter a number to check if it's prime: ";
    cin >> num;
    if (mathOps.isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    // Test for array sum function
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "The sum of the array elements is: " << mathOps.arraySum(arr, n) << endl;

    return 0;
}

class ArrayOperations {
public:
    // Function to implement bubble sort on an array
    void bubbleSort(int arr[], int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Swap elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // Function to read 10 numbers, compute their sum and average
    void computeSumAndAverage() {
        const int count = 10;
        int numbers[count];
        int sum = 0;

        cout << "Enter 10 numbers: ";
        for (int i = 0; i < count; ++i) {
            cin >> numbers[i];
            sum += numbers[i];
        }

        double average = static_cast<double>(sum) / count;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    ArrayOperations arrOps;

    // Test Bubble Sort
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    arrOps.bubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Compute sum and average of 10 numbers
    arrOps.computeSumAndAverage();

    return 0;
}


class Utility {
public:
    // Function to compute the length of a string
    int stringLength(const string& str) {
        int length = 0;
        for (char ch : str) {
            length++;
        }
        return length;
    }

    // Function to find the position of a target value in an array using linear search
    int linearSearch(int arr[], int size, int target) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == target) {
                return i; // Return the index of the target
            }
        }
        return -1; // Return -1 if the target is not found
    }
};

int main() {
    Utility util;

    // Test for string length function
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int length = util.stringLength(inputString);
    cout << "The length of the string is: " << length << endl;

    // Test for linear search function
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target value to search for: ";
    cin >> target;

    int position = util.linearSearch(arr, n, target);
    if (position != -1) {
        cout << "The target value is at index: " << position << endl;
    } else {
        cout << "The target value is not in the array." << endl;
    }

    return 0;
}



class NumberOperations {
public:
    // Function to add two numbers using pointers
    int addUsingPointers(int* a, int* b) {
        return *a + *b;
    }

    // Function to check if a number is a palindrome
    bool isPalindrome(int number) {
        int originalNumber = number;
        int reversedNumber = 0;

        while (number > 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }

        return originalNumber == reversedNumber;
    }
};

int main() {
    NumberOperations operations;

    // Test for addUsingPointers function
    int num1, num2;
    cout << "Enter two numbers to add: ";
    cin >> num1 >> num2;
    int sum = operations.addUsingPointers(&num1, &num2);
    cout << "The sum of the two numbers is: " << sum << endl;

    // Test for isPalindrome function
    int number;
    cout << "\nEnter a number to check if it's a palindrome: ";
    cin >> number;
    if (operations.isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}



class StudentOperations {
public:
    struct Student {
        string name;
        int age;
        int totalMarks;
    };

    // Function to handle Student data
    void handleStudentData() {
        Student students[2];

        // Input data for two students
        for (int i = 0; i < 2; ++i) {
            cout << "Enter details for Student " << i + 1 << ":\n";
            cout << "Name: ";
            cin.ignore(); // Clear the input buffer
            getline(cin, students[i].name);
            cout << "Age: ";
            cin >> students[i].age;
            cout << "Total Marks: ";
            cin >> students[i].totalMarks;
        }

        // Display information and calculate average marks
        int totalMarksSum = 0;
        cout << "\nStudent Details:\n";
        for (int i = 0; i < 2; ++i) {
            cout << "Name: " << students[i].name << ", Age: " << students[i].age
                 << ", Total Marks: " << students[i].totalMarks << endl;
            totalMarksSum += students[i].totalMarks;
        }
        double averageMarks = static_cast<double>(totalMarksSum) / 2;
        cout << "Average Marks: " << averageMarks << endl;
    }

    // Function to determine if a number is odd, even, positive, or negative
    void checkNumberProperties(int number) {
        cout << "\nThe number " << number << " is:\n";

        if (number > 0) {
            cout << "Positive\n";
        } else if (number < 0) {
            cout << "Negative\n";
        } else {
            cout << "Zero (neither positive nor negative)\n";
        }

        if (number % 2 == 0) {
            cout << "Even\n";
        } else {
            cout << "Odd\n";
        }
    }
};

int main() {
    StudentOperations operations;

    // Test for Student data function
    operations.handleStudentData();

    // Test for number properties function
    int num;
    cout << "\nEnter a number to check its properties: ";
    cin >> num;
    operations.checkNumberProperties(num);

    return 0;
}


class UtilityFunctions {
public:
    // Function to calculate factorial using recursion
    int factorial(int n) {
        if (n <= 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }

    // Function to print personal information
    void printPersonalInfo(const string& name, const string& dob, const string& mobile) {
        cout << "\nPersonal Information:\n";
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Mobile Number: " << mobile << endl;
    }
};

int main() {
    UtilityFunctions utility;

    // Test for factorial function
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << number << " is: " << utility.factorial(number) << endl;
    }

    // Test for personal information function
    string name, dob, mobile;
    cout << "\nEnter your name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, name);
    cout << "Enter your date of birth (DD/MM/YYYY): ";
    getline(cin, dob);
    cout << "Enter your mobile number: ";
    getline(cin, mobile);

    utility.printPersonalInfo(name, dob, mobile);

    return 0;
}


