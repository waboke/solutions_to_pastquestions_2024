# include <iostream>
# include <string>
using namespace std;

class Assignment {
public:
    //Q2(a) Protram to determine whether a given number is prime or not.
    bool isPrime(int num){
        if (num <= 1){
            return false; // 0 and 1 are not prime numbers.
        }

        for (int i = 2; i * i <= num; i++){
            if (num % i == 0){
                return false;
            }
        }
        return true;
    }
        // Function to test the prime number.
    void testPrime(){
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (isPrime(num)){
            cout << num << " is a prime number." << endl;
        }
        else {
            cout << num << " is not a prime number." << endl;
        }
    }

    //Q2(b) Program to find the sum of all elements of the array
    int sumArray(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++){
            sum = sum + arr[i];
        }
        return sum;
    }
        // Function to test the array
    void testSumArray(){
        int size = 3;

        int arr[size];
        
        for (int i = 0; i < size; i++){
            cin >> arr[i];
        }

        int sum = sumArray(arr, size);
        cout << "The sum of all ements stored in the array is: " << sum << endl;

    }

    //Q3(a) Program to sort a list of elements using bubble sort algorithm.
    void bubbleSort(int arr[], int n){
        for (int i = 0; i < n-1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if (arr[j] > arr[j + 1]) {
                    // swap arr[j] and arr[j + 1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
        // Function to test the bubble sort algorithm
    void testBubbleSort() {
        int n;
        // Input size of the array
        cout <<"Enter the size of the array"<<endl;
        cin >> n;
        
        int arr[n];

        // Input array elements
        cout << "Enter " << n << " elements:"<< endl;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // sort the array
        bubbleSort(arr, n);

        // print sorted array
        cout << "Sorted array: ";
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    //Q3(b) program to find the sum and average of 10 numbers.
    void sumAvg(){
        const int size = 10;
        int numbers[size];
        int sum = 0;

        cout << "Enter " << size << " numbers:"<< endl;
        for (int i = 0; i < size; i++){
            cin >> numbers[i];
            sum = sum + numbers[i];
        }
        
        double average = sum / static_cast<double>(size);

        cout << "Sum: "<< sum << endl;
        cout << "Average: "<< average << endl;
    }

    //Q4(a) Program to find the length of a string
    int stringLength(const string& str) {
        int length = 0;
        for (char c : str) {
            length++;
        }
        return length;
    }
        // Test string length program
    void testStringLength() {
        string input;
        cout << "Enter a string: ";
        getline(cin, input);

        int length = stringLength(input);
        cout << "The length of the string is: " << length << endl;
    }

    //Q4(b) Program to perform linear search
    int linearSearch(const int arr[], int n, int target) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i; // Return the position (index) if found
            }
        }
        return -1; // Return -1 if not found
    }
        // Function to test linear search program
    void testLinearSearch() {
        int n, target;
        cout << "Enter the size of the array: ";
        cin >> n;

        int arr[n];
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "Enter the target value: ";
        cin >> target;

        int position = linearSearch(arr, n, target);

        if (position != -1) {
            cout << "Target found at index: " << position << endl;
        } else {
            cout << "Target not found in the array." << endl;
        }
    }

    //Q5(a) Program to add two numbers using pointers
    int addNumbers() {
        int num1, num2;

        // Input numbers
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        // Pointers pointing to the variables
        int* ptr1 = &num1;
        int* ptr2 = &num2;

        // Adding values using pointers
        int sum = *ptr1 + *ptr2;

        return sum; // Return the result
    }
        // Function to test Pointer addition of two numbers.
    void testPointer(){
        int result = addNumbers();
        cout << "The sum of the two numbers is: " << result << endl;

    }

    //Q5(b) Program to check if a number is a palindrome
    bool isPalindrome() {
        int num, reversed = 0, original, remainder;

        // Input the number
        cout << "Enter a number: ";
        cin >> num;

        original = num; // Store the original number

        // Reverse the number
        while (num != 0) {
            remainder = num % 10;          // Get the last digit
            reversed = reversed * 10 + remainder; // Append the digit to reversed
            num /= 10;                     // Remove the last digit
        }

        // Check if the reversed number equals the original
        return (reversed == original);
    }
        // Function to test Palindrome.
    void testPalindrome(){
        // Call the function and check the result
        if (isPalindrome()) {
            cout << "The number is a palindrome." << endl;
        } else {
            cout << "The number is not a palindrome." << endl;
        }
    }

    //Q6(a) Structure to input student data.
    struct Student {
        string name;
        int age;
        int totalMarks;
    };

        // Function to input student data
    void inputStudentData(Student& s) {
        cout << "Enter name: ";
        cin.ignore(); // To ignore leftover newline characters
        getline(cin, s.name);
        cout << "Enter age: ";
        cin >> s.age;
        cout << "Enter total marks: ";
        cin >> s.totalMarks;
    }

        // Function to display student data
    void displayStudentData(const Student& s) {
        cout << "\nStudent Information:" << endl;
        cout << "Name: " << s.name << endl;
        cout << "Age: " << s.age << endl;
        cout << "Total Marks: " << s.totalMarks << endl;
    }

        // Function to calculate their average marks
    float calculateAverageMarks(const Student& s1, const Student& s2) {
        return (s1.totalMarks + s2.totalMarks) / 2.0;
    }

        // Function to test Student Structure.
    void testStudent(){
        Assignment::Student student1, student2;

        // Input data for two students
        cout << "Enter details for Student 1:" << endl;
        inputStudentData(student1);

        cout << "\nEnter details for Student 2:" << endl;
        inputStudentData(student2);

        // Display data for the students
        cout << "\nDisplaying Information of Students:" << endl;
        displayStudentData(student1);
        displayStudentData(student2);

        // Calculate and display the average of total marks
        float averageMarks = calculateAverageMarks(student1, student2);
        cout << "\nThe average of total marks is: " << averageMarks << endl;
        }


    //Q6(b) Program to check the number and display the result status
    string checkNumber(int num) {
        if (num == 0) {
            return "Zero";
        } else if (num > 0) {
            if (num % 2 == 0) {
                return "Number is Positive Even";
            } else {
                return "Number is Positive Odd";
            }
        } else {
            if (num % 2 == 0) {
                return "Number is Negative Even";
            } else {
                return "Number is Negative Odd";
            }
        }
    }
        // Function to test checkNumber status.
    void testcheckNumber(){
        int num;

        // Input the number
        cout << "Enter a number: ";
        cin >> num;

        // Display the result
        cout << checkNumber(num) << endl;

    }

    // Q7(a) Recursive function to calculate factorial
    int factorial(int n) {
        if (n <= 1) {
            return 1; // Base case: factorial of 0 or 1 is 1
        }
        return n * factorial(n - 1); // Recursive case
    }
        // Function to test Recursive function.
    void testRecusion(){
        int num;

        // Input the number
        cin >> num;

        if (num < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
        } else {
            // Calculate and display the factorial
            cout << "The factorial of " << num << " is: " << factorial(num) << endl;
        }
    }


    // Q7(b). Define the structure to hold personal details
    struct Details {
        string name;
        string dateOfBirth;
        string mobileNumber;
    };

    // Method to input details
    void inputDetails(Details& details) {
        cout << "Enter your name: ";
        getline(cin, details.name);
        cout << "Enter your date of birth (dd-mm-yyyy): ";
        getline(cin, details.dateOfBirth);
        cout << "Enter your mobile number: ";
        getline(cin, details.mobileNumber);
    }

    // Method to display details
    void displayDetails(const Details& details) {
        cout << "\nPersonal Details:" << endl;
        cout << "Name: " << details.name << endl;
        cout << "Date of Birth: " << details.dateOfBirth << endl;
        cout << "Mobile Number: " << details.mobileNumber << endl;
    }

    // Method to test Personal Details
    void testPersonalDetails(){
        Assignment::Details myDetails;
        // Input and display personal detatils.
        inputDetails(myDetails);
        displayDetails(myDetails);
    }

};

int main(){
    Assignment call;

    // //Test programs
    cout << "CSC 202 PAST QUESTIONS IMPLEMENTATION IN C++" << endl;

    cout << "\nQ2(a) Test whether your number is prime or not." << endl;
    call.testPrime();

    cout << "\nQ2(b) Enter 3 elements to find their sum." << endl;
    call.testSumArray();

    cout << "\nQ3(a) Bubble sort algorithm to sort an array." << endl;
    call.testBubbleSort();

    cout << "\nQ3(b) Find the sum and average of 10 numbers." << endl;
    call.sumAvg();

    cout << "Q4(a) String length checker." << endl;
    call.testStringLength();

    cout << "\nQ4(b) Linear search algorithm to search an array." << endl;
    call.testLinearSearch();

    cout << "\nQ5(a)Addition of two numbers with pointer." << endl;
    call.testPointer();

    cout << "\nQ5(b) Check whether your number is palindrome or not." << endl;
    call.testPalindrome();
    
    cout << "\nQ6(a) Records of two students." << endl;
    call.testStudent();

    cout << "\nQ6(b) check the status of your number." << endl;
    call.testcheckNumber();

    cout << "\nQ7(a) Enter a number to find it Factorial." << endl;
    call.testRecusion();

    cout << "\nQ7(b) Enter your Details" << endl;
    call.testPersonalDetails();

    
    
    return 0;
}