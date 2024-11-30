#include <iostream>
using namespace std;

struct Adder {
    int a, b;

    int addNumbers() {
        int *ptr1 = &a;
        int *ptr2 = &b;
        return *ptr1 + *ptr2;
    }
};

int main() {
    Adder adder;
    cout << "Enter two numbers: ";
    cin >> adder.a >> adder.b;

    cout << "Sum: " << adder.addNumbers() << endl;
    return 0;
}