#include <iostream>
#include <cstring> // For string operations
using namespace std;

// Define the Student structure
struct Student {
    char name[50];
    int age;
    float totalMarks;
};

// Function to input data for a student
void inputStudentData(Student* student) {
    cout << "Enter name: ";
    cin.ignore(); // Ignore newline left in the input buffer
    cin.getline(student->name, 50);
    cout << "Enter age: ";
    cin >> student->age;
    cout << "Enter total marks: ";
    cin >> student->totalMarks;
}

// Function to display student information
void displayStudentData(const Student* student) {
    cout << "Name: " << student->name << endl;
    cout << "Age: " << student->age << endl;
    cout << "Total Marks: " << student->totalMarks << endl;
}

// Function to calculate average marks of two students
float calculateAverageMarks(const Student* student1, const Student* student2) {
    return (student1->totalMarks + student2->totalMarks) / 2.0;
}

int main() {
    Student student1, student2;

    cout << "Enter data for Student 1:" << endl;
    inputStudentData(&student1);

    cout << "\nEnter data for Student 2:" << endl;
    inputStudentData(&student2);

    cout << "\nStudent 1 Details:" << endl;
    displayStudentData(&student1);

    cout << "\nStudent 2 Details:" << endl;
    displayStudentData(&student2);

    float averageMarks = calculateAverageMarks(&student1, &student2);
    cout << "\nThe average marks of the two students are: " << averageMarks << endl;

    return 0;
}
