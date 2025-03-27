#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale (0, "Russian");
    ifstream inputFile("output");

    if (!inputFile) {
        cerr << "Ошибка: не удалось открыть файл 'output'." << endl;
        return 1;
    }

    int number;
    int index = 1;

    while (inputFile >> number) {
        cout << index << ". " << number << endl;
        index++;
    }

    inputFile.close();

    return 0;
}
