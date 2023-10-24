#include <iostream>
using namespace std;

int sumD(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int N;
    cout;
    cin >> N;

    if (N < 0) {
        cout << "Wrong" << endl;
        return 1;
    }

    int result = sumD(N);
    cout << result << endl;

    return 0;
}
