#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int R, C, r, c;

    cout;
    cin >> R >> C;

    cout;
    cin >> r >> c;

    bool t = (R == r) || (C == c) || (abs(R - r) == abs(C - c));

    if (t) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
