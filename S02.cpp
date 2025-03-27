#include <iostream>

using namespace std;

int main()
{
    int x, t;

    // Çàïðîñèòü ââîä äâóõ ÷èñåë
    cout << "enter first number (x): ";
    cin >> x;
    cout << "enter second number (t): ";
    cin >> t;

    // Ïðîâåðêà íà äåëåíèå íà 0
    if (t == 0) {
        cout << "Division by zero is impossible!" << endl;
        return 1; // Çàâåðøèòü ïðîãðàììó ñ îøèáêîé
    }

    // Îïåðàòîð äåëåíèÿ
    int division = x / t; // Äåëåíèå íàöåëî
    cout << "result x / t: " << division << endl;

    // Îïåðàòîð îñòàòêà
    int remainder = x % t; // Îñòàòîê îò äåëåíèÿ
    if (remainder != 0) {
        cout << " remainder: " << remainder << endl;
    } else {
        cout << "no remainder" << endl;
    }

    return 0;
}
