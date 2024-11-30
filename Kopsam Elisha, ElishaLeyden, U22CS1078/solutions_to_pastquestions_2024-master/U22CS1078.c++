#include <iostream>
#include <string>

// CHECK IF ITS A PRIME NUMBER
class IsPrime{
    public:
    int main(){
    int num, i, isPrime = 1;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        std::cout<<num<< "is a prime number";
    else
        std::cout<<num<<  "is not a prime number.";

    return 0;
    }

};

// SUM OF ARRAY 
class SumArray{
    public:
    int main(){
    int n, i, sum = 0;

    std::cout<<"Enter the number of elements in the array:";
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter" <<n<< "elements:";
    for (i = 0; i < n; i++) {
        std::cout<<"Element-: " << i + 1<< ":";
        std::cin>>arr[i];
        sum += arr[i];
    }

    std::cout<<"Sum of all elements in the array is:"<<sum<<std::endl;

    return 0;
}
};

//Bubble sort
class Bubblesort{
    public:
    int main() {
    int n, i, j, temp;

    std::cout<<"Enter the number of elements to be stored in the array: ";
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter"<<n<< "elements in the array:";
    for (i = 0; i < n; i++) {
        std::cout<<"Element-: "<<i + 1<<";";
        std::cin>>arr[i];
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

    std::cout<<"After sorting, the array is:";
    for (i = 0; i < n; i++) {
        std::cout<<arr[i]<<std::endl;
    }

    return 0;
}

};
//AVERAGE OF 10 NUMBERS
class Averageof10numbers{
    public:
    int main() {
    int numbers[10], i, sum = 0;
    float average;

    std::cout << "Enter 10 numbers:\n";
    for (i = 0; i < 10; i++) {
        std::cout << "Number-" << i + 1 << ": ";
        std::cin >> numbers[i];
        sum += numbers[i];
    }

    average = static_cast<float>(sum) / 10.0f;

    std::cout << "The sum of the 10 numbers is: " << sum << std::endl;
    std::cout << "The average is: " << average << std::endl;

    return 0;
}
};

//LENGTH OF STRING
class LengthofString{
   public: 
   int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(str, MAX_LENGTH);

    int length = stringLength(str);
    std::cout << "The length of the string \"" << str << "\" is: " << length << std::endl;

    return 0;
}

};

//linear search
class LinearSearch{
    public:
    int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, i, target;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        std::cout << "Element-" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "Enter the target value to find: ";
    std::cin >> target;

    int position = linearSearch(arr, n, target);
    if (position != -1)
        std::cout << "The target value " << target << " is found at position: " << position + 1 << std::endl;
    else
        std::cout << "The target value " << target << " is not found in the array." << std::endl;

    return 0;
}
};

//addnumbers
class AddNumbers{
    public:
    int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    std::cout << "Input the first number: ";
    std::cin >> num1;

    std::cout << "Input the second number: ";
    std::cin >> num2;

    result = addNumbers(num1, num2);

    std::cout << "The sum of the entered numbers is: " << result << std::endl;

    return 0;
}

};

//Palindrome
class IsPalindrome{
    public:
    bool isPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    std::cout << "Input a number: ";
    std::cin >> num;

    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome number." << std::endl;
    } else {
        std::cout << num << " is not a palindrome number." << std::endl;
    }

    return 0;
}

};

//STUDENTS
class Students{
    public:
    struct Student {
    std::string name;
    int age;
    float total_marks;
};

int main() {
    Student s1, s2;
    float average;

    // Input data for two students
    std::cout << "Enter details for student 1:\n";
    std::cout << "Name: ";
    std::cin >> s1.name;
    std::cout << "Age: ";
    std::cin >> s1.age;
    std::cout << "Total Marks: ";
    std::cin >> s1.total_marks;

    std::cout << "\nEnter details for student 2:\n";
    std::cout << "Name: ";
    std::cin >> s2.name;
    std::cout << "Age: ";
    std::cin >> s2.age;
    std::cout << "Total Marks: ";
    std::cin >> s2.total_marks;

    // Display information
    std::cout << "\nStudent 1: Name = " << s1.name << ", Age = " << s1.age << ", Total Marks = " << s1.total_marks << std::endl;
    std::cout << "Student 2: Name = " << s2.name << ", Age = " << s2.age << ", Total Marks = " << s2.total_marks << std::endl;

    // Calculate average marks
    average = (s1.total_marks + s2.total_marks) / 2.0f;
    std::cout << "\nThe average of total marks is: " << average << std::endl;

    return 0;
}
};

//WHAT IS THE INTEGER
class Integer{
    public:
    int main() {
    int num;
    std::cout << "Input a number (integer): ";
    std::cin >> num;

    if (num == 0) {
        std::cout << "The number is Zero." << std::endl;
    } else {
        std::string sign = (num > 0) ? "positive" : "negative";
        std::string parity = (num % 2 == 0) ? "even" : "odd";

        std::cout << "Number is " << sign << "-" << parity << "." << std::endl;
    }

    return 0;
}


};

//Factorial
class Factorial{
    public:
    long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    std::cout << "Input the number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Error! Factorial of a negative number doesn't exist." << std::endl;
    } else {
        std::cout << "The factorial of " << num << " is: " << factorial(num) << std::endl;
    }

    return 0;
}
};

//struct
class Struct{
    public:
    int main() {
    std::cout << "Name: Alexandra Abramov\n";
    std::cout << "DOB: July 14, 1975\n";
    std::cout << "Mobile: 99-999999999\n";
    return 0;
}
};

