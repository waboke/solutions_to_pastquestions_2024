#include <iostream>
using namespace std;

//Function to write a C++ program to determine whether a given number is prime or not
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }

    return true;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

//Function to find sum of elements in an array
int sum_of_array(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int result = sum_of_array(arr, size);

  cout << "Sum of array elements: " << result << endl;

  return 0;
}

//Function to use bubble sort algorithm to sort an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {15, 26, 42, 82, 35};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

//Function to find sum and average of 10 numbers
int main() {
    int numbers[10];
    int sum = 0;

    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / 10;

    cout << "Sum of numbers: " << sum << endl;
    cout << "Average of numbers: " << average << endl;

    return 0;
}

//Function to find length of a given string
int string_length(const std::string& str) {
  return str.length();
}

int main() {
  std::string my_string = "Hello, world!";
  int length = string_length(my_string);

  std::cout << "The length of '" << my_string << "' is: " << length << std::endl;

  return 0;
}

//Function to locate position of value in an array
#include <iostream>

int linear_search(int arr[], int size, int key) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == key) {
      return i; // Found the key at index i
    }
  }
  return -1; // Key not found in the array
}

int main() {
  int arr[] = {23, 60, 90, 50, 20, 55, 100, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 50;

  int position = linear_search(arr, size, key);

  if (position != -1) {
    std::cout << "Key " << key << " found at position " << position << std::endl;
  } else {
    std::cout << "Key " << key << " not found in the array" << std::endl;
  }

  return 0;
}

//Function to add two numbers using pointers
int add_numbers() {
  int num1, num2;

  // Get input from the user
  std::cout << "Enter the first number: ";
  std::cin >> num1;

  std::cout << "Enter the second number: ";
  std::cin >> num2;

  // Create pointers to the numbers
  int* ptr1 = &num1;
  int* ptr2 = &num2;

  // Calculate the sum using pointers
  int sum = *ptr1 + *ptr2;

  return sum;
}

int main() {
  int result = add_numbers();
  std::cout << "The sum is: " << result << std::endl;

  return 0;
}

//Function to check whether a number is a palindrome
#include <string>

bool is_palindrome() {
    std::string num_str;

    // Get input from the user
    std::cout << "Enter a number: ";
    std::cin >> num_str;

    // Reverse the string
    std::string reversed_str = num_str;
    std::reverse(reversed_str.begin(), reversed_str.end());

    // Compare original and reversed strings
    if (num_str == reversed_str) {
        return true; // It's a palindrome
    } else {
        return false; // It's not a palindrome
    }
}

int main() {
    if (is_palindrome()) {
        std::cout << "The number is a palindrome." << std::endl;
    } else {
        std::cout << "The number is not a palindrome." << std::endl;
    }

    return 0;
}

//Function to find factorial of a number
int factorial(int n) {
  // Base case: factorial of 0 is 1
  if (n == 0) {
    return 1;
  } else {
    // Recursive step: factorial of n is n * factorial(n-1)
    return n * factorial(n - 1);
  }
}

int main() {
  int num;

  std::cout << "Enter a non-negative integer: ";
  std::cin >> num;

  if (num < 0) {
    std::cout << "Factorial is not defined for negative numbers." << std::endl;
  } else {
    int result = factorial(num);
    std::cout << "Factorial of " << num << " is: " << result << std::endl;
  }

  return 0;
}

//Function to print name, DOB and number
#include <string>

void print_personal_info() {
  std::string name = "Your Name"; 
  std::string dob = "Your Date of Birth"; 
  std::string mobile_number = "Your Mobile Number"; 

  std::cout << "Name: " << name << std::endl;
  std::cout << "Date of Birth: " << dob << std::endl;
  std::cout << "Mobile Number: " << mobile_number << std::endl;
}

int main() {
  print_personal_info();
  return 0;
}











