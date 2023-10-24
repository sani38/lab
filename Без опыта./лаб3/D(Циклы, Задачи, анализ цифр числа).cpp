#include <iostream>
using namespace std;

void Binary(int n) {
    while (n > 0) {
        int bit = n % 2;
        cout << bit;
        n /= 2;
    }
}

int main() {
    int N;
    cout;
    cin >> N;

    if (N < 0) {
        cout << "Wrong" << endl;
        return 1;
    }

    cout;
    Binary(N);
    cout << endl;

    return 0;
}
