#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int R, C, r, c;

    cout;
    cin >> R >> C;

    cout;
    cin >> r >> c;

    int d = abs(R - r);
    int f = abs(C - c);
    bool t = (d == 2 && f == 1) || (d == 1 && f == 2);

    if (t) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
