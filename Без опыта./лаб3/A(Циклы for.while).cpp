#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout;
    cin >> N;

    int sum = 0;
    int i = 1;
    while (i <= N) {
        sum += i * i;
        i++;
    }
    cout << sum << endl;

    return 0;
}