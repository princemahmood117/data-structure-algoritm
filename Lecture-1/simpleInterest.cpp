#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double p, r, t, i, total;

    cout << "Enter Principal: ";
    cin >> p;

    cout << "Enter Rate (%): ";
    cin >> r;

    cout << "Enter Time (Years): ";
    cin >> t;

    i = (p * r * t) / 100;
    total = p + i;

    cout << "Interest is: " << i << endl;
    cout << fixed << setprecision(2);
    cout << "Total after Interest is: " << total << endl;

    return 0;
}