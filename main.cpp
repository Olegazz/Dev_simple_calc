#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Введите оператор (+, -, *, /): ";
    cin >> op;

    cout << "Введите два числа: " << endl;
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
                cout << "Ошибка! Деление на ноль.";
            else
                cout << num1 << " / " << num2 << " = " << num1/num2;
            break;

        default:
            // Неправильный оператор
            cout << "Ошибка! Вы ввели неправильный оператор.";
            break;
    }

    return 0;
}
