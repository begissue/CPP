#include <iostream>
using namespace std;

int main() {
    setlocale(0, "Russian");

    const char* shortdays[] = {
        "��",
        "��",
        "��",
        "��",
        "��",
        "��",
        "��"
    };

    const char* longdays[] = {
        "�����������",
        "�������",
        "�����",
        "�������",
        "�������",
        "�������",
        "�����������"
    };

    int number;
    char format;

    cout << "������� ����� �� 1 �� 7: ";
    cin >> number;

    if (number < 1 || number > 7) {
        cout << "������: ������� ����� � ��������� �� 1 �� 7." << endl;
        return 1;
    }

    cout << "�������� ������ (k - ��������, d - �������): ";
    cin >> format;


    if (format == 'k') {
        cout << "���� ������: " << shortdays[number - 1] << endl;
    } else if (format == 'd') {
        cout << "���� ������: " << longdays[number - 1] << endl;
    } else {
        cout << "������: �������� ������. ����������� 'k' ��� ��������� � 'd' ��� ��������." << endl;
    }

    return 0;
}
