#include <iostream>
#include <string>
using namespace std;

// Question 2a: Prime Number Check
class PrimeChecker {
public:
    void checkPrime() {
        int num;
        bool isPrime = true;

        // Input the number
        cout << "Input a number: ";
        cin >> num;

        // A prime number is greater than 1
        if (num <= 1) {
            isPrime = false;
        } else {
            // Check divisors from 2 to sqrt(num)
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        // Output the result
        if (isPrime) {
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }
    }
};

// Question 2b: Sum of Array Elements
class ArraySum {
public:
    void calculateSum() {
        int n, sum = 0;

        // Input the number of elements
        cout << "Input the number of elements to be stored in the array: ";
        cin >> n;

        int* arr = new int[n]; // Declare the array 

        // Input array elements
        cout << "Input " << n << " elements in the array:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "element - " << i << ": ";
            cin >> arr[i];
            sum += arr[i]; // Add each element to the sum
        }

        // Output the sum
        cout << "Sum of all elements stored in the array is: " << sum << endl;
        delete[] arr; 
    }
};

// Question 3a: Bubble Sort
class BubbleSort {
public:
    void sortArray() {
        int n;

        // Input the number of elements
        cout << "Input the number of elements to be stored in the array: ";
        cin >> n;

        int* arr = new int[n]; // Declare the array 

        // Input the array elements
        cout << "Input " << n << " elements in the array:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "element-" << i << ": ";
            cin >> arr[i];
        }

        // Bubble Sort Algorithm
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap the elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Output the sorted array
        cout << "After sorting, the array is:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << endl;
        }
        delete[] arr; // Free allocated memory
    }
};

// Question 3b: Average of Numbers
class AverageCalculator {
public:
    void calculateAverage() {
        int numbers[10];
        int sum = 0;
        float average;

        cout << "Input the 10 numbers:" << endl;

        for (int i = 0; i < 10; i++) {
            cout << "Number-" << i + 1 << ": ";
            cin >> numbers[i];
            sum += numbers[i];
        }

        average = sum / 10.0; // Calculate the average

        cout << "The sum of 10 numbers is: " << sum << endl;
        cout << "The Average is: " << average << endl;
    }
};

// Question 4a: String Length
class StringLength {
public:
    void computeLength() {
        string inputString = "Learn C Programming";

        // Compute the length using the function
        int length = inputString.length(); // Using built-in length function

        // Output the result
        cout << "The length of the string '" << inputString << "' is " << length << endl;
    }
};

// Question 4b: Linear Search
class LinearSearch {
public:
    void search() {
        int arr[] = {10, 20, 30, 40, 50}; // Sample array
        int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
        int target;

        // Ask user for the target value
        cout << "Enter the target value to search: ";
        cin >> target;

        // Perform linear search
        int position = -1; // Initialize position as not found
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                position = i; // Return the index if the target is found
                break;
            }
        }

        // Output the result
        if (position != -1) {
            cout << "The target value " << target << " is found at index: " << position << endl;
        } else {
            cout << "The target value " << target << " is not found in the array." << endl;
        }
    }
};

// Question 5a: Add Numbers Using Pointers
class PointerAddition {
public:
    void addNumbers() {
        int num1, num2;
        int* ptr1 = &num1; // Pointer to the first number
        int* ptr2 = &num2; // Pointer to the second number

        // Input the two numbers
        cout << "Input the first number: ";
        cin >> *ptr1; // Store input in num1 using pointer
        cout << "Input the second number: ";
        cin >> *ptr2; // Store input in num2 using pointer

        // Output the result
        cout << "The sum of the entered numbers is: " << (*ptr1 + *ptr2) << endl;
    }
};

// Question 5b: Palindrome Check
class PalindromeChecker {
public:
    void checkPalindrome() {
        int number, reversedNumber = 0, originalNumber;

        // Input the number
        cout << "Input a number: ";
        cin >> number;

        originalNumber = number; // Store the original number for comparison

        // Reverse the number
        while (number > 0) {
            int digit = number % 10; // Get the last digit
            reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
            number /= 10; // Remove the last digit
        }

        // Check if the original number and reversed number are the same
        if (originalNumber == reversedNumber) {
            cout << "The number is a palindrome." << endl;
        } else {
            cout << "The number is not a palindrome." << endl;
        }
    }
};

// Question 6a: Student Data
class StudentData {
public:
    void manageStudents() {
        struct Student {
            string name;
            int age;
            float totalMarks;
        };

        Student students[2]; // Array to hold data for two students

        // Input data for two students
        for (int i = 0; i < 2; i++) {
            cout << "Enter details for student " << (i + 1) << ":" << endl;
            cout << "Enter name: ";
            cin >> students[i].name;
            cout << "Enter age: ";
            cin >> students[i].age;
            cout << "Enter total marks: ";
            cin >> students[i].totalMarks;
            cout << endl; // New line for better readability
        }

        // Display data for both students
        cout << "Student Information:" << endl;
        for (int i = 0; i < 2; i++) {
            cout << "Details for student " << (i + 1) << ":" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Total Marks: " << students[i].totalMarks << endl;
            cout << endl; // For new line
        }

        // Calculate the average of total marks
        float totalMarksSum = 0;
        for (int i = 0; i < 2; i++) {
            totalMarksSum += students[i].totalMarks;
        }
        float averageMarks = totalMarksSum / 2;

        // Display the average of total marks
        cout << "Average of total marks: " << averageMarks << endl;
    }
};

// Question 6b: Number Classification
class NumberClassification {
public:
    void classifyNumber() {
        int number;

        cout << "Input a number (integer): ";
        cin >> number;

        if (number == 0) {
            cout << "Zero" << endl;
        } else {
            if (number > 0) {
                // Positive number
                if (number % 2 == 0) {
                    cout << "Number is positive even" << endl;
                } else {
                    cout << "Number is positive odd" << endl;
                }
            } else {
                // Negative number
                if (number % 2 == 0) {
                    cout << "Number is negative even" << endl;
                } else {
                    cout << "Number is negative odd" << endl;
                }
            }
        }
    }

};

// Question 7a: Factorial Calculation
class FactorialCalculator {
public:
    int factorial(int n) {
        // Base case: factorial of 0 or 1 is 1
        if (n == 0 || n == 1) {
            return 1;
        }
        // Recursive case
        return n * factorial(n - 1);
    }

    void calculateFactorial() {
        int number;

        // Input the number from the user
        cout << "Input the number: ";
        cin >> number;

        // Calculate factorial
        int result = factorial(number);

        // Display the result
        cout << "The Factorial of " << number << " is: " << result << endl;
    }
};

// Question 7b: Personal Information
class PersonalInformation {
public:
    void displayInfo() {
        // Define personal information
        string name = "Issa Umar";
        string dob = "February 14, 1966";
        string mobile = "07040997654";

        // Print the information
        cout << "Name : " << name << endl;
        cout << "DOB : " << dob << endl;
        cout << "Mobile: " << mobile << endl;
    }
};

int main() {
    // Create objects for each question class
    PrimeChecker primeChecker;
    ArraySum arraySum;
    BubbleSort bubbleSort;
    AverageCalculator averageCalculator;
    StringLength stringLength;
    LinearSearch linearSearch;
    PointerAddition pointerAddition;
    PalindromeChecker palindromeChecker;
    StudentData studentData;
    NumberClassification numberClassification;
    FactorialCalculator factorialCalculator;
    PersonalInformation personalInfo;

    // Call methods for each question
    primeChecker.checkPrime();
    arraySum.calculateSum();
    bubbleSort.sortArray();
    averageCalculator.calculateAverage();
    stringLength.computeLength();
    linearSearch.search();
    pointerAddition.addNumbers();
    palindromeChecker.checkPalindrome();
    studentData.manageStudents();
    numberClassification.classifyNumber();
    factorialCalculator.calculateFactorial();
    personalInfo.displayInfo();

    return 0;
}