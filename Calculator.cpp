#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;
    char calculateMore;

    do {
        cout << "Simple Calculator" << endl;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;
        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Error! Invalid operator." << endl;
                break;
        }

        cout << "Do you want to calculate more? (y/n): ";
        cin >> calculateMore;
    } while (calculateMore == 'y' || calculateMore == 'Y');

    cout << "Goodbye!" << endl;

    return 0;
}

