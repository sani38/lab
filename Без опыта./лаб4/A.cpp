#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 100) {
        cout << "Wrong" << endl;
        return 1;
    }

    int array[100];
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < N; i += 2) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
