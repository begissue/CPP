#include <iostream>
using namespace std;

void print(int num) {
    cout << num << endl;
}

void print(float num) {
    cout << num << endl;
}

void print(char ch) {
    cout << ch << endl;
}

void print(int num1, int num2) {
    cout << num1 << ", " << num2 << endl;
}

int main() {
    print(88);
    print(0.25f);
    print('A');
    print(41, 42);
    return 0;
}
