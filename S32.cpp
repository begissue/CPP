#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale (0, "Russian");
    const int Max_length = 100;
    char inputString[Max_length];

    cout << "Введите строку: ";
    cin.getline(inputString, Max_length);

    size_t length = strlen(inputString);

    char* point = inputString;

    for (size_t i = 0; i < length; ++i) {
        if (point[i] >= 'a' && point[i] <= 'z') {
            point[i] = (point[i] == 'z') ? 'a' : point[i] + 1;
        }
    }
    cout << "Измененная строка: " << inputString << endl;

    return 0;
}
