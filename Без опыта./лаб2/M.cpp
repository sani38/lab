#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int p = k / 4;
    if (p * 4 == k && k % 4 == 0) {
        cout << "YES" ;
    }
    else {
        cout << "NO";
    }

    return 0;
}
