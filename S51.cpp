#include <iostream>
#include <string>
using namespace std;


void reverse(const string& str) {
    for (int i = str.length() - 1; i >= 0; --i) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    setlocale(0, "Russian");
    string input;

    cout << "������� ������: ";
    getline(cin, input);

    cout << "��������� ������: ";
    reverse(input);

    return 0;
}

