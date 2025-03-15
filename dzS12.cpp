#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int sum = 0;

    while (num < 1000) {
        if (num % 7 == 0) {
            sum += num;
        }
        num += 4;
    }
    cout << "result " << sum << endl;

    return 0;
}


