#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale (0, "Russian");
    char Names[][10] = {
        "����",
        "����",
        "���",
        "���",
        "������",
        "����",
        "�����",
        "����",
        "������",
        "������"
    };

    int number;

    cout << "������� ����� �� 0 �� 9: ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << "�������� �����: " << Names[number] << endl;
    } else {
        cout << "������: ������� ����� � ��������� �� 0 �� 9." << endl;
    }

    return 0;
}
