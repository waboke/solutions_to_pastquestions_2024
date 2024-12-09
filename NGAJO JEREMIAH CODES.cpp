#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Questions{
public:

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return false; 
    }
    return true; 
}

int main() {
    int number;

   
    cout << "Enter a number: ";
    cin >> number;

  
    if (isPrime(number)) {
        cout << number << " IS A PRIME" << endl;
    } else {
        cout << number << " IS NOT A PRIME" << endl;
    }

    return 0;
}

    // Sum of elements in an array
    int array[] = {2, 5, 8};
    int size = sizeof(array) / sizeof(array[0]); 
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
   
    cout << "Sum of elements stored in the array is " << sum << endl;

    return 0;
}

//Bubble Sort
void bubbleSort(int arr[], int size) {
    // Bubble Sort implementation

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[5]; 
    // Input 5 elements
    cout << "Enter 5 elements in the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << ": ";
        cin >> array[i];
    }

    // Sort the array
    bubbleSort(array, 5);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;

}


//Function to compute sum and average 
int main() {
    int numbers[10];  // Array to store 10 numbers
    int sum = 0;   
    double average;   

    // Input 10 numbers
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i]; // Add the input to the sum
    }

    // Calculate the average
    average = static_cast<double>(sum) / 10;

    cout << "Sum is " << sum << " and average is " << average << endl;

    return 0;
}

// Function to calculate the length of a string

int stringLength(const string& str) {
    int length = 0;
    for (char ch : str) {
        length++;
    }
    return length;
}

int main() {
    string input;

    
    cout << "Enter a string: ";
    getline(cin, input);

    int length = stringLength(input);

    
    cout << "Length is " << length << endl;

    return 0;
}

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int array[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array
    int target;

    // Input the target value
    cout << "Enter the target value: ";
    cin >> target;

    // Find the position using linear search
    int position = linearSearch(array, size, target);

    // Output the result
    if (position != -1) {
        cout << "Target value found at position: " << position << endl;
    } else {
        cout << "Target value not found in the array." << endl;
    }

    return 0;
}
 
//Function to add two numbers using pointers
int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2; // Pointers to hold the addresses of the numbers

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Assign the addresses of the numbers to the pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Compute the sum using pointers
    sum = *ptr1 + *ptr2;

    // Output the result
    cout << "Sum is: " << sum << endl;

    return 0;
}


// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10; 
        reversedNum = reversedNum * 10 + digit;
        num /= 10;     
    }

    // Check if the reversed number is equal to the original number
    return (originalNum == reversedNum);
}

int main() {
    int number;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Checker
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}



// Structure definition for Student
struct Student {
    string name;
    int age;
    int totalMarks;
};

int main() {
    Student student1, student2;

    // Input data for the first student
    cout << "Enter details for Student 1:" << endl;
    cout << "Name: ";
    getline(cin, student1.name);
    cout << "Age: ";
    cin >> student1.age;
    cout << "Total Marks: ";
    cin >> student1.totalMarks;
    cin.ignore();  // To clear the newline left by cin

    // Input data for the second student
    cout << "\nEnter details for Student 2:" << endl;
    cout << "Name: ";
    getline(cin, student2.name);
    cout << "Age: ";
    cin >> student2.age;
    cout << "Total Marks: ";
    cin >> student2.totalMarks;

    // Display the information for both students
    cout << "\nStudent 1 Details:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Total Marks: " << student1.totalMarks << endl;

    cout << "\nStudent 2 Details:" << endl;
    cout << "Name: " << student2.name << endl;
    cout << "Age: " << student2.age << endl;
    cout << "Total Marks: " << student2.totalMarks << endl;

    // Calculate and display the average marks
    double averageMarks = (student1.totalMarks + student2.totalMarks) / 2.0;
    cout << "\nAverage Marks of the two students: " << averageMarks << endl;

    return 0;
}



//Function to check a number 
int main() {
    int number;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive or negative
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    // Check if the number is odd or even
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}

// Function to calculate the factorial of a number

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Input the number
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}


//Function to print personal information 
int main() {
    string name = "John Doe";
    string dob = "01/01/1995";  

    string mobileNumber = "+2349076767890";  

    // Print 
    cout << "Personal Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Mobile Number: " << mobileNumber << endl;

    return 0;
}
};
