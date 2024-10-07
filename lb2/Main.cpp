#include <iostream>
using namespace std;

void findMax() {
    cout << "task 1" << endl;
    int a, b;
    cout << "Enter two nums(through a space): ";
    cin >> a >> b;
    int maxNum = (a > b) ? a : b;
    cout << "The largest num is: " << maxNum << endl;
}

//task2
void determineSign() {
    cout << "task 2" << endl;
    int number;
    cout << "Enter a num: ";
    cin >> number;
    if (number > 0) {
        cout << "The num is positive." << endl;
    }
    else if (number < 0) {
        cout << "The num is negative." << endl;
    }
    else {
        cout << "The num is zero." << endl;
    }
}

//task3
void swapValues() {
    cout << "task 3" << endl;
    int a, b;
    cout << "Enter two nums to swap(through a space): ";
    cin >> a >> b;
    int* pA = &a;
    int* pB = &b;

    int temp = *pA;
    *pA = *pB;
    *pB = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}

//task4
void calculator() {
    cout << "task 4" << endl;
    double num1, num2;
    char operation;
    cout << "Enter first num: ";
    cin >> num1;
    cout << "Enter second num: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    double* pNum1 = &num1;
    double* pNum2 = &num2;
    double result;

    switch (operation) {
    case '+':
        result = *pNum1 + *pNum2;
        break;
    case '-':
        result = *pNum1 - *pNum2;
        break;
    case '*':
        result = *pNum1 * *pNum2;
        break;
    case '/':
        if (*pNum2 != 0) {
            result = *pNum1 / *pNum2;
        }
        else {
            cout << "Error. Division by zero" << endl;
            return;
        }
        break;
    default:
        cout << "Invalid operation" << endl;
        return;
    }
    cout << "Result: " << result << endl;
}

//task5
void sumArray() {
    cout << "task 5" << endl;
    const int size = 5;
    int arr[size];
    cout << "Enter 5 nums for the array(through a space): ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int* pArr = arr;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(pArr + i);
    }

    cout << "Sum of array elements: " << sum << endl;
}

int main() {
    findMax();
    determineSign();
    swapValues();
    calculator();
    sumArray();

    return 0;
}
