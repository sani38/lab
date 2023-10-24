#include <iostream>
using namespace std;

void swap(int array[], int N) {
    for (int i = 0; i < N - 1; i += 2) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 35) {
        cout << "Wrong" << endl;
        return 1;
    }

    int array[35];
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    swap(array, N);

    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
