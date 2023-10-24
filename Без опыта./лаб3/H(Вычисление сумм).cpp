#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout;
    cin >> N;

    if (N < 0 || N > 30) {
        cout << "Wrong" << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 0; i <= N; ++i) {
        sum += pow(2, i);
    }

    cout << sum << endl;

    return 0;
}
