#include <iostream>
#include <string>
using namespace std;

class Utility {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

    // Function to find the sum of all elements in an array
    int arraySum(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }

    // Function to sort an array using bubble sort
    void bubbleSort(int arr[], int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // Function to display the elements of an array
    void displayArray(int arr[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Function to calculate the sum and average of an array
    void calculateSumAndAverage(int arr[], int size, int &sum, float &average) {
        sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        average = static_cast<float>(sum) / size;
    }

    // Function to find the length of a string
    int stringLength(const string &str) {
        return str.length();
    }

    // Function to find the position of a target value in an array using linear search
    int findPosition(int arr[], int size, int target) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == target) {
                return i + 1; // Position is 1-based index
            }
        }
        return -1; // Return -1 if the target is not found
    }
};

int main() {
    Utility util;
    int choice;

    cout << "Choose a task to perform:\n";
    cout << "1. Check if a number is prime\n";
    cout << "2. Find the sum of all elements in an array\n";
    cout << "3. Sort an array using bubble sort\n";
    cout << "4. Calculate the sum and average of an array\n";
    cout << "5. Find the length of a string\n";
    cout << "6. Find the position of a target value in an array\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int number;
            cout << "Enter a number: ";
            cin >> number;
            if (util.isPrime(number)) {
                cout << number << " is a prime number." << endl;
            } else {
                cout << number << " is not a prime number." << endl;
            }
            break;
        }
        case 2: {
            int size;
            cout << "Enter the number of elements in the array: ";
            cin >> size;

            int arr[size];
            for (int i = 0; i < size; ++i) {
                cout << "element - " << i << ": ";
                cin >> arr[i];
            }

            int sum = util.arraySum(arr, size);
            cout << "The sum of all elements in the array is: " << sum << endl;
            break;
        }
        case 3: {
            int size;
            cout << "Enter the number of elements in the array: ";
            cin >> size;

            int arr[size];
            for (int i = 0; i < size; ++i) {
                cout << "element - " << i << ": ";
                cin >> arr[i];
            }

            util.bubbleSort(arr, size);
            cout << "Array after sorting: ";
            util.displayArray(arr, size);
            break;
        }
        case 4: {
            const int size = 10;
            int arr[size];
            cout << "Enter 10 numbers: " << endl;
            for (int i = 0; i < size; ++i) {
                cout << "Number-" << i + 1 << ": ";
                cin >> arr[i];
            }

            int sum;
            float average;
            util.calculateSumAndAverage(arr, size, sum, average);

            cout << "The sum of the numbers is: " << sum << endl;
            cout << "The average is: " << average << endl;
            break;
        }
        case 5: {
            string input;
            cout << "Enter a string: ";
            cin.ignore(); // Clear the input buffer
            getline(cin, input);

            int length = util.stringLength(input);
            cout << "The length of the string \"" << input << "\" is: " << length << endl;
            break;
        }
        case 6: {
            int size, target;
            cout << "Enter the number of elements in the array: ";
            cin >> size;

            int arr[size];
            for (int i = 0; i < size; ++i) {
                cout << "element - " << i << ": ";
                cin >> arr[i];
            }

            cout << "Enter the target value to find: ";
            cin >> target;

            int position = util.findPosition(arr, size, target);
            if (position != -1) {
                cout << "The target value " << target << " is at position: " << position << endl;
            } else {
                cout << "The target value " << target << " is not in the array." << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
