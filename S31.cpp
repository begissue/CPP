#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale (0, "Russian");
    char Names[][10] = {
        "ноль",
        "один",
        "два",
        "три",
        "четыре",
        "пять",
        "шесть",
        "семь",
        "восемь",
        "девять"
    };

    int number;

    cout << "Введите число от 0 до 9: ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << "Название цифры: " << Names[number] << endl;
    } else {
        cout << "Ошибка: введите число в диапазоне от 0 до 9." << endl;
    }

    return 0;
}
