#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    int N;
    double A;
    cout << "������� ����� ������� (A): ";
    cin >> A;
    cout << "������� ����� ������ (N): ";
    cin >> N;
    if (N<3)
    {
        cout<<"����������� ������� �������� N";
    }
    else
    {
        cout<<(N * A * A) / (4 * tan(M_PI / N));
    }
    return 0;
}
