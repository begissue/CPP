#include <iostream>

using namespace std;

int main()
{
    //создание переменных разных типов
    int a = 4;
    float b = 1.5f;
    double c = 2.5;
    char d = 1;

    int sum = a + d;
    cout <<"(int + char)="<< sum << endl;
    float difference = b - d;
    cout <<"(float - char)="<< difference << endl;
    double product = a * c;
    cout <<"(int * double)=" << product << endl;
    float division = b / d;
    cout <<"(float / char)=" << division << endl;

    return 0;
}
