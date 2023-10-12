#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout << "������� ����������� ����� N (�� ����������� 30): ";
    cin >> N;

    if (N < 0 || N > 30) {
        cout << "������������ ����. N ������ ���� ��������������� � �� ��������� 30." << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 0; i <= N; ++i) {
        sum += pow(2, i);
    }

    cout << "����� 1 + 2 + 2^2 + 2^3 + ... + 2^" << N << " ����� " << sum << endl;

    return 0;
}
