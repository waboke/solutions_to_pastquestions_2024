#include <iostream>
#include <cstring>
using namespace std;

class AssignmentSolutions {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int computeSum(const int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) sum += arr[i];
        return sum;
    }

    void bubbleSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    pair<int, double> computeSumAndAverage(const int arr[], int n) {
        int sum = computeSum(arr, n);
        double avg = sum / static_cast<double>(n);
        return {sum, avg};
    }

    int stringLength(const char* str) {
        return strlen(str);
    }

    int linearSearch(const int arr[], int n, int target) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) return i;
        }
        return -1;
    }

    int addWithPointers(const int* a, const int* b) {
        return *a + *b;
    }

    bool isPalindrome(int num) {
        int original = num, reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return original == reversed;
    }

    struct Student {
        string name;
        int age;
        double totalMarks;
    };

    void handleStudents() {
        Student students[2];
        for (int i = 0; i < 2; i++) {
            cout << "Enter details for student " << i + 1 << ":\n";
            cout << "Name: ";
            cin >> ws; // eat up any leading whitespace
            getline(cin, students[i].name);
            cout << "Age: ";
            cin >> students[i].age;
            cout << "Total Marks: ";
            cin >> students[i].totalMarks;
        }
        double avgMarks = (students[0].totalMarks + students[1].totalMarks) / 2.0;
        cout << "\nStudent Details:\n";
        for (int i = 0; i < 2; i++) {
            cout << "Name: " << students[i].name << ", Age: " << students[i].age
                 << ", Total Marks: " << students[i].totalMarks << endl;
        }
        cout << "Average Marks: " << avgMarks << endl;
    }

    string numberProperties(int num) {
        string result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";
        result += (num % 2 == 0) ? " and Even." : " and Odd.";
        return result;
    }
};

int main() {
    AssignmentSolutions solution;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Check Prime\n";
        cout << "2. Compute Sum of Array\n";
        cout << "3. Bubble Sort Array\n";
        cout << "4. Compute Sum and Average of 10 Numbers\n";
        cout << "5. Compute String Length\n";
        cout << "6. Perform Linear Search\n";
        cout << "7. Add Two Numbers Using Pointers\n";
        cout << "8. Check Palindrome\n";
        cout << "9. Handle Student Records\n";
        cout << "10. Check Number Properties\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << (solution.isPrime(num) ? "Prime" : "Not Prime") << endl;
            break;
        }
        case 2: {
            int n;
            cout << "Enter number of elements: ";
            cin >> n;
            int* arr = new int[n];
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
            cout << "Sum: " << solution.computeSum(arr, n) << endl;
            delete[] arr;
            break;
        }
        case 3: {
            int n;
            cout << "Enter number of elements: ";
            cin >> n;
            int* arr = new int[n];
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
            solution.bubbleSort(arr, n);
            cout << "Sorted array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
            delete[] arr;
            break;
        }
        case 4: {
            int arr[10];
            cout << "Enter 10 numbers: ";
            for (int i = 0; i < 10; i++) cin >> arr[i];
            auto [sum, avg] = solution.computeSumAndAverage(arr, 10);
            cout << "Sum: " << sum << ", Average: " << avg << endl;
            break;
        }
        case 5: {
            char str[100];
            cout << "Enter a string: ";
            cin.ignore();
            cin.getline(str, 100);
            cout << "Length: " << solution.stringLength(str) << endl;
            break;
        }
        case 6: {
            int n, target;
            cout << "Enter number of elements: ";
            cin >> n;
            int* arr = new int[n];
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
            cout << "Enter target: ";
            cin >> target;
            int pos = solution.linearSearch(arr, n, target);
            cout << (pos != -1 ? "Found at index " + to_string(pos) : "Not Found") << endl;
            delete[] arr;
            break;
        }
        case 7: {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum: " << solution.addWithPointers(&a, &b) << endl;
            break;
        }
        case 8: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << (solution.isPalindrome(num) ? "Palindrome" : "Not Palindrome") << endl;
            break;
        }
        case 9: {
            solution.handleStudents();
            break;
        }
        case 10: {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << solution.numberProperties(num) << endl;
            break;
        }
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
