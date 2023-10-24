#include <iostream>
using namespace std;

int main() {
    int R, C, r, c;
    cout;
    cin >> R >> C;

    cout;
    cin >> r >> c;

    bool canCapture = (R == r) || (C == c);

    if (canCapture) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
