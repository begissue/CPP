#include <iostream>
#include <cmath>
using namespace std;

double Area(double A, int N) {
    if (N < 3) {
       cerr << "Число сторон должно быть 3 или больше." << endl;
        return 0;
    }
    double S = (N * A * A) / (4 * tan(M_PI / N));
    return S;
}

int main(){
    setlocale(0, "Russian");
    int N;
    double A;
    cout << "Ââåäèòå äëèíó ñòîðîíû (A): ";
    cin >> A;
    cout << "Ââåäèòå ÷èñëî ñòîðîí (N): ";
    cin >> N;
    
    double S = Area(A, N);
    cout << "Площадь = " << S << endl;
    
    return 0;
}
