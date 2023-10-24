
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int heights[100];
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int petya;
    cin >> petya;

    int position = 1;
    for (int i = 0; i < N; i++) {
        if (heights[i] > petya) {
            position++;
        }
    }
    for (int i = 0; i < N; i++) {
        if (heights[i] == petya) {
            position++;
        }
    }

    cout << position << endl;

    return 0;
}