// CalculatorFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Function Prototype
void AddNumbers();
void SubtractNumbers();
void MultiplyNumbers();
void DivideNumbers();

//main function strated
int main()
{
    AddNumbers();
    SubtractNumbers();
    MultiplyNumbers();
    DivideNumbers();
}//main function ended

void line() {
    cout << "\n*********************\n";
}

//function for adding numbers
void AddNumbers() {
    float number1, number2, result;
    cout << "Addition";
    line();
    cout << "\nEnter number 1: ";
    cin >> number1;
    cout << "\nEnter number 2: ";
    cin >> number2;
    result = number1 + number2;
    cout << "\nThe Sum of the two given numbers is: " << result << endl;
}
//functions for subtraction
void SubtractNumbers() {
    float number1, number2, result;
    cout << "Difference";
    line();
    cout << "\nEnter number 1: ";
    cin >> number1;
    cout << "\nEnter number 2: ";
    cin >> number2;
    result = number1 - number2;
    cout << "\nThe difference of the two given numbers is: " << result << endl;
}
void MultiplyNumbers() {
    double number1, number2, result;
    cout << "Multiplication";
    line();
    cout << "\nEnter number 1: ";
    cin >> number1;
    cout << "\nEnter number 2: ";
    cin >> number2;
    result = number1 * number2;
    cout << "\nThe Product of the two given numbers is: " << result << endl;
}
void DivideNumbers() {
    float number1, number2, result;
    cout << "Division";
    line();
    cout << "\nEnter number 1: ";
    cin >> number1;
    cout << "\nEnter number 2: ";
    cin >> number2;
    if (number2 != 0)
    {
        result = number1 / number2;
        cout << "\nThe division of the two given numbers is: " << result << endl;
    }
    else
    {
        cout << "\nSorry Number 2 is equal to zero. Division  overflow. Try a different number";
    }
}