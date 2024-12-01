#include <iostream>
#include <string>
using namespace std;


// Question 2a: Check for Prime number
class PrimeCheck {
public:
    // Function to check if a number is prime
    void isPrime() {
        int num;
        cout << "Enter a number to check if it's a prime number: ";
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


// Question 2b: Sum of Elements in Array
class SumArray {
public:
    // Function to calculate the sum of elements in an array
    void calculateSum() {

int n, i, sum = 0;

    cout<<"Enter the number of elements in the array:";
    cin>>n;

    int arr[n];

    cout<<"Enter " <<n<< " elements:";
    for (i = 0; i < n; i++) {
        cout<<"Element-: " << i + 1<< ":";
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<"Sum of all elements in the array is:"<<sum<<endl;
    }
};


// Question 3a: Bubble Sort
class BubbleSort{
public:
    //Function to sort an array using bubble sort
    void bubblesort() {

    int n, i, j, temp;

    cout<<"Enter the number of elements to be stored in the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<< " elements in the array:";
    for (i = 0; i < n; i++) {
        cout<<"Element-: "<<i + 1<<";";
        cin>>arr[i];
    }

    // Bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<<"After sorting, the array is: ";
    for (i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
    }
};


// Question 3b: Calculate Sum and Average of 10 Numbers
class SumAndAverage {
public:
    //Function to calculate sum and average of 10 numbers
    void calculate() {

    int numbers[10], i, sum = 0;
    float average;

    cout << "Enter 10 numbers:\n";
    for (i = 0; i < 10; i++) {
        cout << "Number-" << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    average = static_cast<float>(sum) / 10.0f;

    cout << "The sum of the 10 numbers is: " << sum << endl;
    cout << "The average is: " << average << endl;
    }
};


// Question 4a: String Length
class StringLength {
public:
    //Function to calculate the length of a string
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


// Question 4b: Linear Search
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


// Question 5a: Add Two Numbers using pointers
class AddNumbers {
public:
    // Function to add numbers
    void addNumbers (){
    int a, b;
    int (); {

    int a, b, result;
cout << "Input the first number: ";
cin >> a;

cout << "Input the second number: ";
cin >> b;

        int* p= &a;
        int* q= &b;
        cout<<"The sum of entered numbers is: "<< *p +*q <<endl;
    }
    }
};


// Question 5b: Palindrome Check for Number
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


// Question 6a: Average Marks of 2 Students
class StudentAverage {
public:
    // Function to compute the average marks of two students
    void computeAverage() {
      struct Student {
    string name;
    int age;
    float total_marks;
};

 {
    Student s1, s2;
    float average;

    // Input data for two students
    cout << "Enter details for student 1:\n";
    cout << "Name: ";
    cin >> s1.name;
    cout << "Age: ";
    cin >> s1.age;
    cout << "Total Marks: ";
    cin >> s1.total_marks;

    cout << "\nEnter details for student 2:\n";
    cout << "Name: ";
    cin >> s2.name;
    cout << "Age: ";
    cin >> s2.age;
    cout << "Total Marks: ";
    cin >> s2.total_marks;

    // Display information
    cout << "\nStudent 1: Name = " << s1.name << ", Age = " << s1.age << ", Total Marks = " << s1.total_marks << endl;
    cout << "Student 2: Name = " << s2.name << ", Age = " << s2.age << ", Total Marks = " << s2.total_marks << endl;

    // Calculate average marks
    average = (s1.total_marks + s2.total_marks) / 2.0f;
    cout << "\nThe average of total marks is: " << average << endl;
    }
    }
};


// CQuestion 6b: Properties of Numbers
class NumberProperties {
public:
    // Function to check number sign and parity
    void checkProperties(){
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


// Question 7a: Factorial
class Factorial {
public:
// Function to calculate the factorial of a number
int factorial(int n) {
    if(n == 1 || n == 0) {
        return 1;
    } else {
        return n * factorial(n -1);
    }
}
void factorial(){

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num < 0) {
        cout << "Error, require positive integer!";
    } else {
        cout << factorial(num);
    }
}
};


// Question 7b: Displaying Personal Information
class PersonalInfo {
public:
    // Function to display personal information
    void display(){

string name, DOB;
    int phoneNo;
    cout << "Enter your Name:";
    cin >> name;
    cout << "Enter your Date Of Birth:";
    cin >> DOB;
    cout << "Enter your Phone Number:";
    cin >> phoneNo;
    cout << name << endl << DOB << endl << phoneNo << endl;
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
