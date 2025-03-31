#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    int N;
    double A;
    cout << "Введите длину стороны (A): ";
    cin >> A;
    cout << "Введите число сторон (N): ";
    cin >> N;
    if (N<3)
    {
        cout<<"Неправильно введены значения N";
    }
    else
    {
        cout<<(N * A * A) / (4 * tan(M_PI / N));
    }
    return 0;
}
