#include <iostream>

using namespace std;

int main()
{
    int x, t;

    // Запросить ввод двух чисел
    cout << "enter first number (x): ";
    cin >> x;
    cout << "enter second number (t): ";
    cin >> t;

    // Проверка на деление на 0
    if (t == 0) {
        cout << "Division by zero is impossible!" << endl;
        return 1; // Завершить программу с ошибкой
    }

    // Оператор деления
    int division = x / t; // Деление нацело
    cout << "result x / t: " << division << endl;

    // Оператор остатка
    int remainder = x % t; // Остаток от деления
    if (remainder != 0) {
        cout << " remainder: " << remainder << endl;
    } else {
        cout << "no remainder" << endl;
    }

    return 0;
}
