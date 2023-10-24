#include <iostream>
using namespace std;

void reverse(int array[], int N) {
    int start = 0;  
    int end = N - 1;  

    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
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

    reverse(array, N);

    
    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
