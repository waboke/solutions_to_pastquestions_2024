#include <iostream>
#include <string>
using namespace std;

struct StringUtility {
    string str;

    int calculateLength() {
        return str.length();
    }
};

int main() {
    StringUtility util;
    cout << "Enter a string: ";
    getline(cin, util.str);

    cout << "Length of the string: " << util.calculateLength() << endl;
    return 0;
}