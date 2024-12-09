#include <iostream>
#include <string>
using namespace std;

// Function declarations with expected terminal outputs as comments
void checkPrime();
// Output: Input a number: 7
// 7 is a prime number

void sumOfArrayElements();
// Output: Input the number of elements to be stored in the array : 5
// Input 5 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Sum of all elements stored in the array is : 15

void bubbleSort();
// Output: Input the number of elements to be stored in the array : 5
// Input 5 elements in the array :
// element - 0 : 5
// element - 1 : 2
// element - 2 : 9
// element - 3 : 1
// element - 4 : 6
// After sorting the array are
// 1
// 2
// 5
// 6
// 9

void sumAndAverageOfTenNumbers();
// Output: Input the 10 numbers :
// Number-1 : 1
// ...
// The sum of 10 no is : 55
// The Average is : 5.5

void computeLengthOfGivenString();
// Output: Input a string to compute the length of: hello
// The length of the string 'hello' is 5

void positionUsingLinearSearch();
// Output: Element : 90
// Position: 3

void addTwoNumbersUsingPointers();
// Output: Input the first number : 4
// Input the second number : 6
// The sum of the entered numbers is : 10

void checkIfNumberIsPalindrome();
// Output: Input a number: 121
// 121 is a palindrome number

void studentStructure();
// Output: Student Name Age Total marks
// 1: Alice 20 85
// 2: Bob 22 90
// The average of their total marks is: 87.5

void checkSignAndTypeOfANumber();
// Output: Input a number (Integer): -7
// Number is negative-odd

// Main function
int main() {
    checkPrime();
    sumOfArrayElements();
    bubbleSort();
    sumAndAverageOfTenNumbers();
    computeLengthOfGivenString();
    positionUsingLinearSearch();
    addTwoNumbersUsingPointers();
    checkIfNumberIsPalindrome();
    studentStructure();
    checkSignAndTypeOfANumber();

    return 0;
}

// Function definitions
void checkPrime() {
    int num, i, flag = 0;
    cout << "Input a number: ";
    cin >> num;
    if (num <= 1) {
        cout << num << " is not a prime number\n";
        return;
    }
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << num << " is a prime number\n";
    else
        cout << num << " is not a prime number\n";
}

void sumOfArrayElements() {
    int n, sum = 0;
    cout << "Input the number of elements to be stored in the array : ";
    cin >> n;
    int arr[n];
    cout << "Input " << n << " elements in the array :\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << " : ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of all elements stored in the array is : " << sum << endl;
}

void bubbleSort() {
    int n;
    cout << "Input the number of elements to be stored in the array : ";
    cin >> n;
    int arr[n];
    cout << "Input " << n << " elements in the array :\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "After sorting the array are\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

void sumAndAverageOfTenNumbers() {
    int sum = 0, num;
    cout << "Input the 10 numbers :\n";
    for (int i = 0; i < 10; i++) {
        cout << "Number-" << i + 1 << " : ";
        cin >> num;
        sum += num;
    }
    cout << "The sum of 10 no is : " << sum << endl;
    cout << "The Average is : " << (sum / 10.0) << endl;
}

void computeLengthOfGivenString() {
    string str;
    cout << "Input a string to compute the length of: ";
    cin >> str;
    cout << "The length of the string '" << str << "' is " << str.length() << endl;
}

void positionUsingLinearSearch() {
    int n, element, position = -1;
    cout << "Input the number of elements to be stored in the array : ";
    cin >> n;
    int arr[n];
    cout << "Input " << n << " elements in the array :\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << " : ";
        cin >> arr[i];
    }
    cout << "Element : ";
    cin >> element;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            position = i + 1;
            break;
        }
    }
    if (position != -1)
        cout << "Position: " << position << endl;
    else
        cout << "Element not found\n";
}

void addTwoNumbersUsingPointers() {
    int a, b, *ptr1, *ptr2;
    cout << "Input the first number : ";
    cin >> a;
    cout << "Input the second number : ";
    cin >> b;
    ptr1 = &a;
    ptr2 = &b;
    cout << "The sum of the entered numbers is : " << (*ptr1 + *ptr2) << endl;
}

void checkIfNumberIsPalindrome() {
    int num, temp, remainder, reversed = 0;
    cout << "Input a number: ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }
    if (reversed == num)
        cout << num << " is a palindrome number\n";
    else
        cout << num << " is not a palindrome number\n";
}

void studentStructure() {
    struct Student {
        string name;
        int age;
        int totalMarks;
    };
    int n;
    cout << "Input the number of students: ";
    cin >> n;
    Student students[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " Name: ";
        cin >> students[i].name;
        cout << "Student " << i + 1 << " Age: ";
        cin >> students[i].age;
        cout << "Student " << i + 1 << " Total marks: ";
        cin >> students[i].totalMarks;
        total += students[i].totalMarks;
    }
    cout << "Student\tName\tAge\tTotal marks\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ":\t" << students[i].name << "\t" << students[i].age << "\t" << students[i].totalMarks << endl;
    }
    cout << "The average of their total marks is: " << (total / (float)n) << endl;
}

void checkSignAndTypeOfANumber() {
    int num;
    cout << "Input a number (Integer): ";
    cin >> num;
    if (num > 0)
        cout << "Number is positive-" << (num % 2 == 0 ? "even\n" : "odd\n");
    else if (num < 0)
        cout << "Number is negative-" << (num % 2 == 0 ? "even\n" : "odd\n");
    else
        cout << "Number is zero\n";
}
