#include <iostream>

using namespace std;

double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    cout << squared_sum(12, 6) << "\n";   // 324
    cout << squared_sum(12, -6) << "\n";  // 36
    cout << squared_sum(-0.5, -8) << "\n";  // 72.25
    cout << squared_sum(12.9, 2.2) << "\n"; // 228.01

    return 0;
}
