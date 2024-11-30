#include <iostream>
#include <string>
using namespace std;

// Define the Student structure
struct Student {
    string name;
    int age;
    float totalMarks;

    // Function to display student information
    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student student1, student2;
    float average;

    // Input data for the first student
    cout << "Enter details for Student 1:" << endl;
    cout << "Name: ";
    getline(cin, student1.name);
    cout << "Age: ";
    cin >> student1.age;
    cout << "Total Marks: ";
    cin >> student1.totalMarks;
    cin.ignore(); // To handle input buffer for getline()

    // Input data for the second student
    cout << "\nEnter details for Student 2:" << endl;
    cout << "Name: ";
    cin.ignore(); // Ensure the buffer is cleared before getline
    getline(cin, student2.name);
    cout << "Age: ";
    cin >> student2.age;
    cout << "Total Marks: ";
    cin >> student2.totalMarks;

    // Calculate the average of total marks
    average = (student1.totalMarks + student2.totalMarks) / 2;

    // Display student information
    cout << "\nStudent 1 Information:" << endl;
    student1.displayStudentInfo();

    cout << "\nStudent 2 Information:" << endl;
    student2.displayStudentInfo();

    // Display average total marks
    cout << "\nAverage Total Marks: " << average << endl;

    return 0;
}