#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "¬ведите номер года: ";
    cin >> year;

    bool l = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (l) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
