#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int combinations(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    cout;
    cin >> n >> k;

    if (n < 0 || k < 0 || n > 10 || k > 10) {
        cout << "Wrong" << endl;
        return 1;
    }

    int result = combinations(n, k);
    cout << result << endl;

    return 0;
}
