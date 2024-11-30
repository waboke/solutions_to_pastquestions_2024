#include <iostream>
using namespace std;

struct Number {
    int value;

    bool isPrime() {
        if (value <= 1) return false;
        for (int i = 2; i <= value / 2; i++) {
            if (value % i == 0) return false;
        }
        return true;
    }
};

int main() {
    Number num;
    cout << "Enter a number: ";
    cin >> num.value;

    if (num.isPrime())
        cout << num.value << " is a prime number." << endl;
    else
        cout << num.value << " is not a prime number." << endl;

    return 0;
}