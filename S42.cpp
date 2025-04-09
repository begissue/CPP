#include <iostream>
using namespace std;

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    setlocale(0, "Russian");
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};

    sort(a, 10);

    cout << "Отсортированный массив по убыванию: ";
    for (int i = 0; i < 10; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
