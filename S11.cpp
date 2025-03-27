#include <iostream>
using namespace std;

int main() {
    int num = -1;

    while (num < 100) {
        num++;
        if (num % 3 == 0 ) {
            cout << num << endl;
        }
    }

    return 0;
}

