#include <iostream>
using namespace std;

int main() {
    int N;
    cout;
    cin >> N;

    if (N < 1 || N > 10000) {
        cout << "Wrong" << endl;
        return 1;
    }

    int array[10000];
    cout;
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    int count = 0;  

    for (int i = 1; i < N; ++i) {
        if (array[i] > array[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
