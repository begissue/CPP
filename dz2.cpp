#include <iostream>

using namespace std;

int main()
{
    int x, t;

    // ��������� ���� ���� �����
    cout << "enter first number (x): ";
    cin >> x;
    cout << "enter second number (t): ";
    cin >> t;

    // �������� �� ������� �� 0
    if (t == 0) {
        cout << "Division by zero is impossible!" << endl;
        return 1; // ��������� ��������� � �������
    }

    // �������� �������
    int division = x / t; // ������� ������
    cout << "result x / t: " << division << endl;

    // �������� �������
    int remainder = x % t; // ������� �� �������
    if (remainder != 0) {
        cout << " remainder: " << remainder << endl;
    } else {
        cout << "no remainder" << endl;
    }

    return 0;
}
