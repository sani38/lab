#include <iostream>
using namespace std;

void PrintBinaryReverse(int n) {
    while (n > 0) {
        int bit = n % 2;
        cout << bit;
        n /= 2;
    }
}

int main() {
    int N;
    cout << "������� ����� N: ";
    cin >> N;

    if (N < 0) {
        cout << "������������ ����. N ������ ���� ���������������." << endl;
        return 1;
    }

    cout << "������������� ����� " << N << " � �������� ���� � �������� �������: ";
    PrintBinaryReverse(N);
    cout << endl;

    return 0;
}
