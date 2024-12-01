#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// 2a) write a program to determine whether a program is a prime or not?
//2b) write a program to find the sum of all numbers in an array
class Q2{
    public:

    //Question 2a
    void PrimNum(){
            int num;
            cout << "Enter a number to check if it's prime: ";
            cin >> num;
            int count = 0;
            if (num <= 1) {
                cout << num << " is not a prime number" << endl;
            }
            else {
                for (int i = 1; i <= num; i++) {
                    if (num % i == 0) {
                        count++;
                    }
                }
                if (count == 2) {
                    cout << num << " is a prime number" << endl;
                }
                else {
                    cout << num << " is not a prime number" << endl;
                }
            }
        }
    
    

    //question 2b
    void SumArr(){
        int Arr[3];
        int sum = 0;
        cout<<"input three numbers"<<endl;

        for(int i=0; i<3; i++){
            cin>>Arr[i];
            sum += Arr[i];
        }
        cout<<"sum of elements stored in the array is: "<< sum <<endl;
    }
       
};

//3b)write program to sort a list of element using bubble sort algorithm
//3b) write a program to read 10 numbers from the keyboard and find thier sum and average.
class Q3{
    public:
    //Question (3a)
    void BubbleSort(){
        int n;
        cout << "Enter the number of elements to be stored in the array: ";
        cin >> n;
        int arr[n];
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        cout << "After sorting, the array is:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << endl;
        }
    }

    // question  (3b)
    int AddAverage(){
        int num[10];
        int sum=0;
        float average;
        cout<<"Input 10 numbers"<<endl;
        for(int i=0; i<10; i++){
            cin >> num[i];
            sum += num[i];
        }
        average= sum/10;
        cout<<"Sum of numbers is: "<< sum <<endl;
        cout<<"Average of numbers is: "<< average<< endl;
    }
};

//4a) write a program to compute the length of a string function 
//4b) write a program to find the position of a target  value within an array using linear search.your program should have argument abd return type.
class Q4{
    public:
    int stringlen(){
        char str[50];
        cout << "Enter a string: ";
        cin.ignore();
        cin.getline(str, 50);
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        cout << "The length of the string \"" << str << "\" is: " << length << endl;
    }

    //Question (4b)
    void Linearsearch(){
         int n, target;
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        int arr[n];
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
        cout << "Enter the target value to find: ";
        cin >> target;
        int position = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                position = i + 1;
                break;
            }
        }
        if (position != -1)
            cout << "The target value " << target << " is found at position: " << position << endl;
        else
            cout << "The target value " << target << " is not found in the array." << endl;
    }

};

//5a) write a program to add two numbers using pointers. your program should be a function with no argument but with return type
//5b) write a program to check whether a number is a palindrome or not.program should be a function with no argument and with return type.
class Q5{
    public:

    //Question (5a)
    int AddPtr(){
        int a, b ;
        cout<<"input the first number"<<endl;
        cin>>a;
        cout<<"input second number"<<endl;
        cin>>b;
        int* p= &a;
        int* q= &b;
        cout<<"the sum of entered numbers is: "<< *p +*q <<endl;
        return *p +*q;
    }

    //Question (5b)
    int isPalindrome(){
        int num, original, remainder;
        int reversed = 0;
        cout << "input a number: ";
        cin >> num;

        original = num;
        
        // Reverse the number
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        if(original == reversed){
            cout<<num<<" is a palindrome";
        }
        else{
            cout<< num <<"is not a palindrome";
        }
        return num;
    }
};


//6a) create a structure called "student" with members: name,age, and total marks.input data for two students , display information andaverage total marks.
//6b) write a program to find the odd, even, positive, and negative from a given number (integer)
class Q6{
    public:
    void Studentdata(){
        struct Student {
            string name;
            int age;
            float totalMarks;
        };
        Student s1, s2;
        cout << "Enter details for student 1:\n";
        cout << "Name: ";
        cin >> s1.name;
        cout << "Age: ";
        cin >> s1.age;
        cout << "Total Marks: ";
        cin >> s1.totalMarks;

        cout << "Enter details for student 2:\n";
        cout << "Name: ";
        cin >> s2.name;
        cout << "Age: ";
        cin >> s2.age;
        cout << "Total Marks: ";
        cin >> s2.totalMarks;

        float average = (s1.totalMarks + s2.totalMarks) / 2.0f;
        cout << "The average of total marks is: " << average << endl;
    }


    //Question (6b)
    void integerType(){
        int num;
        string sign;
        string parity;
        cout << "Input an integer: ";
        cin >> num;
        if (num == 0) {
            cout << "The number is Zero." << std::endl;
        } 
        else {
            sign = (num > 0) ? "positive" : "negative";
            parity = (num % 2 == 0) ? "even" : "odd";
        }
        cout << "Number is " << sign <<endl;
        cout << "Number is "<< parity <<endl;
    }
};

//7a) write a c++ program to calculate the factorial of a given number using recursive function
//7b) write a c++ program to print your name, date of birth and mobile number
class Q7{
    public:

    //Question (7a)
    int factorial(){
         int n;
        cout << "Enter a number to find its factorial: ";
        cin >> n;
        if (n < 0) {
            cout << "Error! Factorial of a negative number doesn't exist." << endl;
        }
        else {
            long long fact = 1;
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
            cout << "The factorial of " << n << " is: " << fact << endl;
        }

    }

    //Question (7b)
    void information(){
    
        string name;
        int dob;
        string mobileNumber;

        
        cout << "Name: "<< endl;
        cin>>name;
        cout << "Date of Birth: " << endl;
        cin>>dob;
        cout << "Mobile Number: " << endl;
        cin>>mobileNumber;
    }
};



int main(){
    //Q2-class  ans-object   PrimNum() is answer for (2a), SumArr is the answer for (2b)
    Q2 ans;
    ans.PrimNum();
    ans.SumArr();

    //Q3-class  Bubblesort() function for answer (3a), AddAverage() is the for (3b)
    Q3 ansr;
    ansr.BubbleSort();
    ansr.AddAverage();

    //Q4-class  ans-object  stringlen() function for answer (4a), Linearsearch() is the for (4b)
    Q4 answr;
    answr.stringlen();
    answr.Linearsearch();

    //Q5-class  AddPtr() answer for (5a)  isPalindrome() function answer foor (5b)
    Q5 answer;
    answer.AddPtr();
    answer.isPalindrome();

    //Q6- class  answers-object    Studentdata()-answer for (6a)     integerType()-answer for(6b)
    Q6 answers;
    answers.Studentdata();
    answers.integerType();

    //Q7 -class  ansrr-object factorial()-answer for (7a)    information()-answer for (7b)
    Q7 ansrr;
    ansrr.factorial();
    ansrr.information();
    return 0;
}