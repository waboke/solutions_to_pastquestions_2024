#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    float totalMarks;
};


class U22CS1060
{
    public:
    // Question 2
    // 2a
    void checkPrime() {
        int num;
        bool isPrime;

        cout<<"Input a number: ";
        cin>>num;

        isPrime = (num == 1)? 0: 1;

        for (int i = 2; i < num; i++) {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            cout<<num<<" is a prime number \n\n";
        } else
        {
            cout<<num<<" is not a prime number \n\n";
        }
    }
    // 2b
    void sumOfArrayElements() {
        // Resolved Problem: for some reason, I kept having the sum variable have a significantly large value at this point which messed up the output
        int noOfElements;
        cout<<"Input the number of elements to be stored in the array : ";
        cin>>noOfElements;

        int arr[noOfElements];
        int sum = 0;

        cout<<"Input "<<noOfElements<<" elements in the array :"<<endl;

        for (int i = 0; i < noOfElements; i++)
        {
            cout<<"element - "<<i<<" : ";
            cin>>arr[i];
            sum += arr[i];
        }

        cout<<"Sum of all elements stored in the array is : "<<sum<<"\n\n";

    }

    // Question 3
    // 3a
    void bubbleSort() {
        int noOfElements;
        cout<<"Input the number of elements to be stored in the array : ";
        cin>>noOfElements;

        int arr[noOfElements];

        cout<<"Input "<<noOfElements<<" elements in the array :"<<endl;

        for (int i = 0; i < noOfElements; i++)
        {
            cout<<"element - "<<i<<" : ";
            cin>>arr[i];
        }

        for (int i = 0; i < noOfElements; i++)
        {
            for (int j = 0; j < noOfElements - i - 1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
                
            }
        }

        cout<<"\nAfter sorting the array are \n";


        for (int i = 0; i < noOfElements; i++)
        {
            cout<<arr[i]<<endl;            
        }
        cout<<"\n";
    }
    // 3b
    void sumAndAverageOfTenNumbers() {
        //Reolved Problem: How to get a floating point result if sum/10 is a floating point result?
        int num, sum = 0;
        float average;
        cout<<"Input the 10 numbers : \n";

        for (int i = 1; i <= 10; i++)
        {
            cout<<"Number-"<<i<<" :";
            cin>>num;
            // Resolved Problem: Same sum variable issue here. Countered by init. sum to 0
            sum += num;
        }

        //Turned the sum to float to give a more accurate result for average should incase it is supposed to give a decimal value
        average = float(sum)/10;
        
        cout<<"\nThe sum of 10 no is : "<<sum<<"\n";
        cout<<"The Average is : "<<average<<"\n \n";
        

    }
    
    // Question 4
    // 4a
    void computeLengthOfGivenString(string given) {
        int length;

        int i = 0;
        while (given[i] != '\0')
        {
            i++;
        }

        length = i;

        cout<<"The length of the string \'"<<given<<"\' is "<<length<<"\n\n";
        
    }
    // 4b
    int positionUsingLinearSearch(int arr[], int key, int length) {
        //Resolved problem: The problem here was in using the sizeof function in c++. It didn't work because it was returning the size of the array pointer instead of the actual array
        int position = -1;

        for (int i = 0; i < length; i++)
        {
            if (arr[i] == key)
            {
                position = i+1;
                break;
            }
            
        }

        return position;
        
    }

    // Question 5
    // 5a
    int addTwoNumbersUsingPointers() {
        int numOne, numTwo;

        cout<<"Input the first number : ";
        cin>>numOne;    
        cout<<"Input the second number : ";
        cin>>numTwo;    

        int* p_numOne = &numOne;
        int* p_numTwo = &numTwo;

        int result = *p_numOne + *p_numTwo;

        return result;

    }
    // 5b
    string checkIfNumberIsPalindrome() {
        int num;
        string numInText;
        bool isPalindrome = true;

        cout<<"Input a number: ";
        cin>>num;
        numInText = to_string(num);
        int length = size(numInText);

        for (int i = 0; i < length/2; i++)
        {
            if (numInText[i] != numInText[length-1-i])
            {
                isPalindrome = false;
                break;
            }
            
        }
        
        cout<<num;

        if (isPalindrome)
        {
            return " is a palindrome number \n\n";
        } else {
            return " is not a palindrome number \n\n";
        }
        
    }

    // Question 6
    // 6a
    void studentStructure() {
    // Resolved Problem: Efficiency. The code was made more efficient using an array of structs
        cout<<"You are to input data for two students. Their information will be displayed to you alongside the average of their total marks \n";

        int numOfStudents = 2;
        Student students[numOfStudents];
        float totalMarksSum = 0;

        // Input data for each student
        for (int i = 0; i < numOfStudents; i++) {
            cout<<"Student "<<i + 1<<"\n";
            cout<<"Name: ";
            cin>>students[i].name;

            cout<<"Age: ";
            cin>>students[i].age;

            cout<<"Total marks: ";
            cin>>students[i].totalMarks;
            totalMarksSum += students[i].totalMarks;
            cout<<endl;
        }

        // Display student information
        cout<<"Student  Name    Age     Total marks\n";
        for (int i = 0; i < numOfStudents; i++) {
            cout<<"  "<<i + 1<<":    "<<students[i].name<<" "<<students[i].age <<" "<<students[i].totalMarks<<endl;
        }

        // Find average and display it
        float avg = totalMarksSum / numOfStudents;
        cout<<"\nThe average of their total marks is: "<<avg<<"\n\n";
    }
    // 6b
    void checkSignAndTypeOfANumber() {
        int num;

        cout<<"Input a number (Integer): ";
        cin>>num;

        if (num == 0) {
            cout << "Number is zero\n";
        } else {
            string sign = (num > 0)? "positive":"negative";
            string type = (num%2 == 0)? "even":"odd";
            cout<<"Number is "<<sign<<"-"<<type<<"\n\n";
        }

    }
    
};

int main() {

    U22CS1060 answers;

    // Question 2
    // 2a
    cout<<"A program to determine whether a number is prime or not"<<endl;
    answers.checkPrime();

    // 2b
    cout<<"A program to find the sum of all the elements in an array supplied by the user"<<endl;
    answers.sumOfArrayElements();

    // Question 3
    // 3a
    cout<<"A program to sort the elements in a user defined array using bubble sort algorithm"<<endl;
    answers.bubbleSort();

    // 3b
    cout<<"A program to read 10 numbers from the user, find their sum and average then output them to the user"<<endl;
    answers.sumAndAverageOfTenNumbers();

    // Question 4
    // 4a
    cout<<"A program to find the length of a given string using function"<<endl;
    cout<<"Input a string to compute the length of: ";
    string givenString;
    cin>>givenString;
    answers.computeLengthOfGivenString(givenString);

    // 4b
    cout<<"Program to find the position of an element within the array {23,60,90,50,20,55,100,10} using linear search \n";
    int arr[] = {23,60,90,50,20,55,100,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    // Code block to ask for user input for interactivity
    int element;
    cout<<"Element : ";
    cin>>element;
    // ...............
    int position = answers.positionUsingLinearSearch(arr, element, size);
    cout<<"Position: "<<position<<"\n\n";

    // Question 5
    // 5a
    cout<<"A program to add two numbers using pointers"<<endl;
    int result = answers.addTwoNumbersUsingPointers();
    cout<<"The sum of the entered numbers is : "<<result<<"\n\n";

    // 5b
    cout<<"A program to check whether a number is a palindrome or not"<<endl;
    cout<<answers.checkIfNumberIsPalindrome();
    

    // Question 6
    // 6a
    cout<<"A program to input the data for two students, display their info, and find the average of their total marks"<<endl;
    answers.studentStructure();

    // 6b
    cout<<"A program to find the sign and type (Odd or Even) of a given number"<<endl;
    answers.checkSignAndTypeOfANumber();

    // The code below is there to stop the program from exiting until the user presses any key
    cout << "\nPress the enter key to exit...\n";
    cin.ignore(); // Clears the input buffer in case of leftover inputs thus letting line 333 work
    cin.get(); 

    return 0;
}

