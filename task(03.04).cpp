#include <iostream>
using namespace std;

int main() {
    setlocale(0, "Russian");

    const char* shortdays[] = {
        "пн",
        "вт",
        "ср",
        "чт",
        "пт",
        "сб",
        "вс"
    };

    const char* longdays[] = {
        "понедельник",
        "вторник",
        "среда",
        "четверг",
        "пятница",
        "суббота",
        "воскресенье"
    };

    int number;
    char format;

    cout << "Введите число от 1 до 7: ";
    cin >> number;

    if (number < 1 || number > 7) {
        cout << "Ошибка: введите число в диапазоне от 1 до 7." << endl;
        return 1;
    }

    cout << "Выберите формат (k - короткий, d - длинный): ";
    cin >> format;


    if (format == 'k') {
        cout << "День недели: " << shortdays[number - 1] << endl;
    } else if (format == 'd') {
        cout << "День недели: " << longdays[number - 1] << endl;
    } else {
        cout << "Ошибка: неверный формат. Используйте 'k' для короткого и 'd' для длинного." << endl;
    }

    return 0;
}
