#include <iostream>
#include <cstring> // For string length
using namespace std;

class Assignment {
public:
    // Function declarations
    bool isPrime(int num);
    int sumArray(int arr[], int size);
    void bubbleSort(int arr[], int size);
    void readAndCompute();
    int stringLength(const char str[]);
    int linearSearch(int arr[], int size, int target);
    void addWithPointers(int a, int b, int* result);
    bool isPalindrome(int num);
    void processStudents();
    bool isOddEvenPositiveNegative(int num);
    int factorial(int num);
    void displayPersonalInfo();

    // Entry point
    void run();
};

int main() {
    Assignment assignment;
    assignment.run();
    return 0;
}

void Assignment::run() {
    int arr[10], n, result, choice;
    char str[100];

    // Prime number check
    cout << "\n1. Prime Number Check\nEnter a number: ";
    cin >> n;
    cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;

    // Sum of array elements
    cout << "\n2. Sum of Array Elements\nEnter 5 numbers: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];
    cout << "Sum: " << sumArray(arr, 5) << endl;

    // Bubble sort
    cout << "\n3. Bubble Sort\nEnter 5 numbers: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];
    bubbleSort(arr, 5);
    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    // Sum and Average
    cout << "\n4. Read 10 Numbers, Compute Sum and Average\n";
    readAndCompute();

    // String length
    cout << "\n5. String Length\nEnter a string: ";
    cin >> str;
    cout << "Length: " << stringLength(str) << endl;

    // Linear search
    cout << "\n6. Linear Search\nEnter 5 numbers: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];
    cout << "Enter target: ";
    cin >> n;
    result = linearSearch(arr, 5, n);
    if (result == -1) cout << "Not found\n";
    else cout << "Found at position: " << result + 1 << endl;

    // Add with pointers
    cout << "\n7. Add Two Numbers Using Pointers\nEnter two numbers: ";
    int a, b;
    cin >> a >> b;
    addWithPointers(a, b, &result);
    cout << "Sum: " << result << endl;

    // Palindrome check
    cout << "\n8. Palindrome Check\nEnter a number: ";
    cin >> n;
    cout << (isPalindrome(n) ? "Palindrome" : "Not Palindrome") << endl;

    // Student structure
    cout << "\n9. Student Information\n";
    processStudents();

    // Odd/Even, Positive/Negative
    cout << "\n10. Odd, Even, Positive, Negative\nEnter a number: ";
    cin >> n;
    isOddEvenPositiveNegative(n);

    // Factorial
    cout << "\n11. Factorial Using Recursion\nEnter a number: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;

    // Personal Information
    cout << "\n12. Personal Information\n";
    displayPersonalInfo();
}

// Prime number check
bool Assignment::isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

// Sum of array
int Assignment::sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

// Bubble sort
void Assignment::bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Read numbers and compute sum and average
void Assignment::readAndCompute() {
    int arr[10], sum = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum: " << sum << ", Average: " << (sum / 10.0) << endl;
}

// String length
int Assignment::stringLength(const char str[]) {
    return strlen(str);
}

// Linear search
int Assignment::linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (arr[i] == target) return i;
    return -1;
}

// Add with pointers
void Assignment::addWithPointers(int a, int b, int* result) {
    *result = a + b;
}

// Palindrome check
bool Assignment::isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

// Process student structure
void Assignment::processStudents() {
    struct Student {
        string name;
        int age;
        int totalMarks;
    };

    Student students[2];
    for (int i = 0; i < 2; i++) {
        cout << "Enter details for student " << i + 1 << " (Name, Age, Marks): ";
        cin >> students[i].name >> students[i].age >> students[i].totalMarks;
    }
    double avg = (students[0].totalMarks + students[1].totalMarks) / 2.0;
    for (int i = 0; i < 2; i++)
        cout << "Student " << i + 1 << ": " << students[i].name << ", " 
             << students[i].age << ", " << students[i].totalMarks << endl;
    cout << "Average Marks: " << avg << endl;
}

// Odd/Even, Positive/Negative
bool Assignment::isOddEvenPositiveNegative(int num) {
    if (num == 0) {
        cout << "Zero\n";
        return true;
    }
    if (num > 0) cout << "Positive ";
    else cout << "Negative ";
    if (num % 2 == 0) cout << "Even\n";
    else cout << "Odd\n";
    return true;
}

// Factorial using recursion
int Assignment::factorial(int num) {
    if (num <= 1) return 1;
    return num * factorial(num - 1);
}

// Display personal information
void Assignment::displayPersonalInfo() {
    string name = " zisan boman";
    string dob = "23/11/1998";
    string mobile = "1234567890";
    cout << "Name: " << name << "\nDate of Birth: " << dob << "\nMobile: " << mobile << endl;
}
