#include <iostream>
using namespace std;

struct Search {
    int arr[5];
    int target;

    int linearSearch() {
        for (int i = 0; i < 5; i++) {
            if (arr[i] == target) return i;
        }
        return -1;
    }
};

int main() {
    Search searcher;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> searcher.arr[i];
    }

    cout << "Enter the target value: ";
    cin >> searcher.target;

    int position = searcher.linearSearch();
    if (position != -1)
        cout << "Target found at index: " << position << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}