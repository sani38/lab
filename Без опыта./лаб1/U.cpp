#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "¬ведите два натуральных числа n и m: ";
    cin >> n >> m;
    int result = (n % m == 0 || m % n == 0) ? 1 : 0;
    cout << "–езультат: " << result << endl;

    return 0;
}
