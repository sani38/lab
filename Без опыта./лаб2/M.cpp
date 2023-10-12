#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "¬ведите количество фишек (k): ";
    cin >> k;
    int p = k / 4;
    if (p * 4 == k && k % 4 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
