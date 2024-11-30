#include <iostream>
using namespace std;

struct Calculator {
    int numbers[10];

    void calculateSumAndAverage() {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += numbers[i];
        }
        cout << "Sum: " << sum << endl;
        cout << "Average: " << static_cast<double>(sum) / 10 << endl;
    }
};

int main() {
    Calculator calc;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> calc.numbers[i];
    }

    calc.calculateSumAndAverage();
    return 0;
}