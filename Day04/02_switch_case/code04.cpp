#include <iostream>
using namespace std;

int main() {
    int a, b = 0, c = 0, d = 0, e = 0, f = 0;
    cout << "Enter amount: ";
    cin >> a;

    int n = 1;

    switch (n) {
        case 1:
            b = a / 100;
            a = a % 100;
            cout << "Number of hundred notes: " << b << endl;

        case 2:
            c = a / 50;
            a = a % 50;
            cout << "Number of fifty notes: " << c << endl;

        case 3:
            d = a / 20;
            a = a % 20;
            cout << "Number of twenty notes: " << d << endl;

        case 4:
            e = a / 10;
            a = a % 10;
            cout << "Number of ten notes: " << e << endl;

        case 5:
            f = a;
            cout << "Number of one coins: " << f << endl;
            break;

        default:
            cout << "Invalid case" << endl;
    }

    return 0;
}
