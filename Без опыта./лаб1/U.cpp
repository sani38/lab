#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int result = (m % n == 0 || n % m == 0);

    cout << result << endl;

    return 0;
}
