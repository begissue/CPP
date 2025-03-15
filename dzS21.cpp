#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int A, B;

    cout << " enter A: ";
    cin >> A;
    cout << " enter B (B > A): ";
    cin >> B;

    if (B <= A) {
        cerr << "Error B > A." << endl;
        return 1;
    }

    ofstream outputFile("output");

    if (!outputFile) {
        cerr << "error" << endl;
        return 1;
    }

    for (int num = A; num <= B; num++) {
        outputFile << num * 3 << endl;
        cout << num * 3 << endl;
    }

    outputFile.close();

    cout << "Result in 'output'." << endl;

    return 0;

    }

