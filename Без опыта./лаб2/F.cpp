#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout;
    cin >> a >> b >> c;

    int max_number = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << max_number << endl;

    return 0;
}
