#include <iostream>
using namespace std;

void right(int array[], int N) {
    if (N <= 1)
        return;  

    int lastElement = array[N - 1];  
    for (int i = N - 1; i > 0; --i) {
        array[i] = array[i - 1];  
    }
    array[0] = lastElement;
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

    right(array, N);

    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
