#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;

    int p = (v * t) % 109;

    if (p < 0) {
        p += 109;
    }

    cout << p << endl;

    return 0;
}
