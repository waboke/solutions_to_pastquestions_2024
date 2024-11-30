#include <iostream>
#include <cstring>
using namespace std;

// Define a class for the assignment
class Assignment {
public:
    // 1. Add two numbers using pointers
    void addNumbers() {
        int a, b, sum;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;

        int* p1 = &a, * p2 = &b;
        sum = *p1 + *p2;

        cout << "The sum of " << a << " and " << b << " is: " << sum << endl << endl;
    }

    // 2. Check if a number is a palindrome
    bool isPalindrome(int num) {
        int original = num, reversed = 0, digit;
        while (num > 0) {
            digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return original == reversed;
    }

    void checkPalindrome() {
        int num;
        cout << "Enter a number to check if it's a palindrome: ";
        cin >> num;

        if (isPalindrome(num)) {
            cout << num << " is a palindrome." << endl << endl;
        } else {
            cout << num << " is not a palindrome." << endl << endl;
        }
    }

    // 3. Check if a number is odd or even
    void checkOddEven() {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num % 2 == 0)
            cout << num << " is even." << endl;
        else
            cout << num << " is odd." << endl;

        cout << endl;
    }

    // 4. Check if a number is positive, negative, or zero
    void checkPositiveNegative() {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num > 0)
            cout << num << " is positive." << endl;
        else if (num < 0)
            cout << num << " is negative." << endl;
        else
            cout << num << " is zero." << endl;

        cout << endl;
    }

    // 5. Compute the length of a string
    int stringLength(const char* str) {
        int length = 0;
        while (*(str + length) != '\0') {
            length++;
        }
        return length;
    }

    void computeStringLength() {
        char str[100];
        cout << "Enter a string: ";
        cin.ignore();
        cin.getline(str, 100);

        cout << "The length of the string is: " << stringLength(str) << endl << endl;
    }

    // 6. Sort an array using bubble sort
    void bubbleSort(int* arr, int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (*(arr + j) > *(arr + j + 1)) {
                    int temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            }
        }
    }

    void performBubbleSort() {
        int n;
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        int* arr = new int[n];
        cout << "Enter the elements of the array:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> *(arr + i);
        }

        bubbleSort(arr, n);

        cout << "Sorted array: ";
        for (int i = 0; i < n; ++i) {
            cout << *(arr + i) << " ";
        }
        cout << endl << endl;

        delete[] arr;
    }

    // 7. Linear search to find a value's position in an array
    int linearSearch(int* arr, int size, int target) {
        for (int i = 0; i < size; ++i) {
            if (*(arr + i) == target) {
                return i;
            }
        }
        return -1;
    }

    void performLinearSearch() {
        int n, target;
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        int* arr = new int[n];
        cout << "Enter the elements of the array:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> *(arr + i);
        }

        cout << "Enter the target value: ";
        cin >> target;

        int position = linearSearch(arr, n, target);
        if (position != -1) {
            cout << "Target value found at index: " << position << endl << endl;
        } else {
            cout << "Target value not found in the array." << endl << endl;
        }

        delete[] arr;
    }

    // 8. Sum of elements in an array
    int sumArray(int* arr, int size) {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += *(arr + i);
        }
        return sum;
    }

    void calculateSumOfArray() {
        int n;
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        int* arr = new int[n];
        cout << "Enter the elements of the array:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> *(arr + i);
        }

        cout << "The sum of the array elements is: " << sumArray(arr, n) << endl << endl;

        delete[] arr;
    }

    // 9. Handle student information and average marks
    struct Student {
        char name[50];
        int age;
        float totalMarks;
    };

    void handleStudents() {
        Student student1, student2;

        cout << "Enter data for Student 1:" << endl;
        inputStudentData(&student1);

        cout << "\nEnter data for Student 2:" << endl;
        inputStudentData(&student2);

        cout << "\nStudent 1 Details:" << endl;
        displayStudentData(&student1);

        cout << "\nStudent 2 Details:" << endl;
        displayStudentData(&student2);

        float averageMarks = (student1.totalMarks + student2.totalMarks) / 2.0;
        cout << "\nThe average marks of the two students are: " << averageMarks << endl << endl;
    }

private:
    void inputStudentData(Student* student) {
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(student->name, 50);
        cout << "Enter age: ";
        cin >> student->age;
        cout << "Enter total marks: ";
        cin >> student->totalMarks;
    }

    void displayStudentData(const Student* student) {
        cout << "Name: " << student->name << endl;
        cout << "Age: " << student->age << endl;
        cout << "Total Marks: " << student->totalMarks << endl;
    }

    // 10. Calculate sum and average of 10 numbers
public:
    void calculateSumAndAverage() {
        int numbers[10];
        cout << "Enter 10 numbers:" << endl;
        for (int i = 0; i < 10; ++i) {
            cin >> numbers[i];
        }

        int sum = sumArray(numbers, 10);
        float average = static_cast<float>(sum) / 10;

        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl << endl;
    }
};

int main() {
    Assignment assignment;

    assignment.addNumbers();
    assignment.checkPalindrome();
    assignment.checkOddEven();
    assignment.checkPositiveNegative();
    assignment.computeStringLength();
    assignment.performBubbleSort();
    assignment.performLinearSearch();
    assignment.calculateSumOfArray();
    assignment.handleStudents();
    assignment.calculateSumAndAverage();

    return 0;
}
