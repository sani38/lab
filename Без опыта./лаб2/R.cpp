#include <iostream>
using namespace std;

int main() {
    int k, m, n;

    cout << "������� ���������� ������, ����� �� ���� ������� (� �������) � ����� ���������� ������: ";
    cin >> k >> m >> n;

    int total_time = n * 2 * m;

    int min_time = (total_time + k - 1) / k;

    cout << "����������� ����� ����� ��� ����������� ���� ������: " << min_time << " �����" << endl;

    return 0;
}
