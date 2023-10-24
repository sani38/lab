#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    if (N < 0 || N > 30) {
        cout << "Wrong" << endl;
        return 1;
    }

    long long result = 1;
    for (int i = 0; i < N; i++) {
        result *= 2;
    }

    cout << result << endl;

    return 0;
}
