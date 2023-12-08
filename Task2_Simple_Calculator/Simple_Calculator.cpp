#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;
    string op;
    int result;

    cout << "Enter a number:";
    cin >> num1;

    cout << "Enter an operator(+, -, *, /):";
    cin >> op;

    cout << "Enter a number:";
    cin >> num2;

    if (op == "+") {
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result;
    }
    else if (op == "-") {
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result;
    }
    else if (op == "*") {
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result;
    }
    else if (op == "/") {
        if (num2 == 0) {
            cout << "Cannot divide by zero!";
        }
        else {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result;
        }
    }
    else {
        cout << "Please enter an operator(+, -, * /)";
    }

    return 0;
}
