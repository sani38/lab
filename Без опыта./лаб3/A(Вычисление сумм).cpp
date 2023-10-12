#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¬ведите натуральное число n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    cout << "—умма квадратов от 1 до " << n << " равна " << sum << endl;

    return 0;
}
