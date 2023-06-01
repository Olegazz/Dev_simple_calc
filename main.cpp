#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Choose operator (+, -, *, /): ";
    cin >> op;

    cout << "Add two numbers: " << endl;
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2;
            break;

        case '/':
            if (num2 == 0)
                cout << "Error";
            else
                cout << num1 << " / " << num2 << " = " << num1/num2;
            break;

        default:
            // Неправильный оператор
            cout << "Error.";
            break;
    }

    return 0;
}
