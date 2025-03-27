#include <iostream>
using namespace std;

int main() {
    setlocale (0, "Russian");
    char Names[][10] = {
        "íîëü",
        "îäèí",
        "äâà",
        "òðè",
        "÷åòûðå",
        "ïÿòü",
        "øåñòü",
        "ñåìü",
        "âîñåìü",
        "äåâÿòü"
    };

    int number;

    cout << "Ââåäèòå ÷èñëî îò 0 äî 9: ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << "Íàçâàíèå öèôðû: " << Names[number] << endl;
    } else {
        cout << "Îøèáêà: ââåäèòå ÷èñëî â äèàïàçîíå îò 0 äî 9." << endl;
    }

    return 0;
}
