#include <iostream>
using namespace std;

// Function to compute the length of a string
int stringLength(const char* str) {
    int length = 0;
    while (*(str + length) != '\0') { // Traverse until null terminator
        length++;
    }
    return length;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a string with spaces

    int length = stringLength(str);
    cout << "The length of the string is: " << length << endl;

    return 0;
}
