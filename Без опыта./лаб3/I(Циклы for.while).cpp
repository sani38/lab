#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    if (N < 0) {
        cout << "Wrong" << endl;
        return 1;
    }

    double sum = 1.0;
    double factorial = 1.0;
    int i = 1;

    while (i <= N) {
        factorial *= i;
        sum += 1.0 / factorial;
        i++;
    }

    cout.precision(5);
    cout << sum << endl;

    return 0;
}
