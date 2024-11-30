#include <iostream>
using namespace std;

void checkNumber(int num) {
    if (num == 0) {
        cout << "The number is zero." << endl;
    } else if (num > 0) {
        if (num % 2 == 0) {
            cout << "The number is positive even." << endl;
        } else {
            cout << "The number is positive odd." << endl;
        }
    } else { // num < 0
        if (num % 2 == 0) {
            cout << "The number is negative even." << endl;
        } else {
            cout << "The number is negative odd." << endl;
        }
    }
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    checkNumber(num);

    return 0;
}