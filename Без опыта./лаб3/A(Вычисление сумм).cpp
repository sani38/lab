#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "������� ����������� ����� n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    cout << "����� ��������� �� 1 �� " << n << " ����� " << sum << endl;

    return 0;
}
