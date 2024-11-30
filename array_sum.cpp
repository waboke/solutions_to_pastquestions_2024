#include <iostream>
using namespace std;

struct Array {
    int elements[10];

    int calculateSum() {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += elements[i];
        }
        return sum;
    }
};

int main() {
    Array arr;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr.elements[i];
    }

    cout << "Sum of elements: " << arr.calculateSum() << endl;
    return 0;
}