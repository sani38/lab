#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "������� ����� N: ";
    cin >> N;

    if (N < 1) {
        cout << "������������ ����. N ������ ���� ����������� ������." << endl;
        return 1;
    }

    int p = 1;
    while (p <= N) {
        cout << p << " ";
        p *= 2;
    }

    cout << endl;

    return 0;
}
