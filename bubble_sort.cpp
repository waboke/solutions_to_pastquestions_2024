#include <iostream>
using namespace std;

struct Sorter {
    int arr[5];

    void bubbleSort() {
        for (int i = 0; i < 5 - 1; i++) {
            for (int j = 0; j < 5 - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    void displayArray() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Sorter sorter;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> sorter.arr[i];
    }

    sorter.bubbleSort();
    cout << "Sorted array: ";
    sorter.displayArray();

    return 0;
}