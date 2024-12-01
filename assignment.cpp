#include <iostream>
#include <vector>
using namespace std;

int main()
{
    class QuestionClass
    {
    private:
        /* data */
    public:
        // QuestionClass(/* args */);
        // ~QuestionClass();
        void question2A()
        {
            int number;

            cout << "Enter an integer: ";
            cin >> number;

            bool result;

            if (number == 1)
            {
                result = false;
            }

            for (size_t i = 2; i < number - 1; i++)
            {
                if (number % i == 0)
                {
                    result = false;
                }
            }
            if (result)
            {
                cout << "The number is  a prime";
            }
            else
            {
                cout << "The number is NOT a prime";
            }
        };
        void question2B()
        {
            int arr[] = {1, 2, 3};
            int arrLen = sizeof(arr) / sizeof(arr[0]);
            int sum = 0;
            for (size_t i = 0; i < arrLen; i++)
            {
                sum += arr[i];
            }

            cout << sum << endl;
        }
        void question3A()
        {
            vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
            int n = sizeof(arr) / sizeof(arr[0]);

            cout << "Original array: ";
            for (int num : arr)
            {
                cout << num << " ";
            }
            cout << endl;

            // Bubble sort logic
            bool swapped;

            for (int i = 0; i < n - 1; ++i)
            {
                swapped = false;

                for (int j = 0; j < n - i - 1; ++j)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        swap(arr[j], arr[j + 1]);
                        swapped = true;
                    }
                }

                if (!swapped)
                {
                    break;
                }
            }

            // Print the sorted array
            cout << "Sorted array: ";
            for (int num : arr)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        void question3B()
        {
            int num;
            int total = 0;
            for (size_t i = 0; i < 10; i++)
            {
                cout << "Enter " << 10 - i << " numbers: ";
                cin >> num;
                total += num;
            }
            cout << "the total = " << total << endl;
        }
        void question4A()
        {
            string str = "Learn C Programming";
            int strLen = str.length();
            cout << "The length of " << str << " is " << strLen << endl;
        }
        void question4B()
        {
            vector<int> arr = {23, 60, 90, 50, 20, 55, 100, 10};
            int arrLen = arr.size();
            int target = 50;
            for (size_t i = 0; i < arrLen; i++)
            {
                if (arr[i] == target)
                {
                    cout << i << endl;
                }
            }
        }
        void question5A()
        {
            int num1 = 5;
            int num2 = 6;
            int *ptr1 = &num1;
            int *ptr2 = &num2;
            int sum = *ptr1 + *ptr2;
            cout << "sum of the entered numbers is: " << sum << endl;
        }
        void question5B()
        {

            int number, original, reversed = 0;

            number = 121;

            if (number < 0)
            {
                cout << "Negative numbers are not considered palindromes." << endl;
            }

            original = number; // Store the original number

            // Reverse the number
            while (number > 0)
            {
                int digit = number % 10;          // Extract the last digit
                reversed = reversed * 10 + digit; // Append digit to reversed number
                number /= 10;                     // Remove the last digit
            }

            // Check if the original number and reversed number are the same
            if (original == reversed)
            {
                cout << original << " is a palindrome." << endl;
            }
            else
            {
                cout << original << " is not a palindrome." << endl;
            }
        }
        void question6A()
        {
            struct Student
            {
                string name;
                int age;
                int totalMarks;
            };
            // Initialize two students
            Student student1 = {"Alice", 20, 79};
            Student student2 = {"Bob", 22, 96};
            int average = (student1.totalMarks + student2.totalMarks) / 2;

            // Print details of the students
            cout
                << "Student 1: " << student1.name << ", Age: " << student1.age << endl;
            cout << "Student 2: " << student2.name << ", Age: " << student2.age << endl;
            cout << "Average of total marks is: " << average << endl;
        }
        void question6B()
        {
            int num;
            cout << "enter number: ";
            cin >> num;
            if (num > 0)
            {
                if (num % 2 == 0)
                {
                    cout << " number is positive-even";
                }
                else
                {
                    cout << "number is positive odd";
                }
            }
            else if (num < 0)
            {
                if (num % 2 == 0)
                {
                    cout << " number is negative-even";
                }
                else
                {
                    cout << "number is negative-odd";
                }
            }
        }
        void question7A()
        {
            int number;

            cout << "Enter a number to calculate its factorial: ";
            cin >> number;

            if (number < 0)
            {
                cout << "Factorial is not defined for negative numbers." << endl;
            }
            else
            {
                // Inline recursive lambda for factorial calculation
                auto factorial = [](int n, auto &factorialRef) -> int
                {
                    if (n <= 1)
                        return 1;                                 // Base case
                    return n * factorialRef(n - 1, factorialRef); // Recursive call
                };

                cout << "Factorial of " << number << " is " << factorial(number, factorial) << endl;
            }
        }
        void question7B()
        {
            string name;
            string DOB;
            string mobileNo;
            cout << "enter name: ";
            cin >> name;
            cout << "enter DOB: ";
            cin >> DOB;
            cout << "enter Phone number: ";
            cin >> mobileNo;
            cout << "NAME: " << name << endl;
            cout << "DOB: " << DOB << endl;
            cout << "Phone number: " << mobileNo << endl;
        }
    };

    QuestionClass obj;
    obj.question2A();
    obj.question2B();
    obj.question3A();
    obj.question3B();
    obj.question4A();
    obj.question4B();
    obj.question5A();
    obj.question5B();
    obj.question6A();
    obj.question6B();
    obj.question7A();
    obj.question7B();
    return 0;
}