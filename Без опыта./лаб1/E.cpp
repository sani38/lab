#include <iostream>
using namespace std;
int main() {
    int v, t, MKAD = 109;
    cout << "������� �������� (� ��/�): ";
    cin >> v;
    cout << "������� ����� (� �����): ";
    cin >> t;
    int m = (v * t) % MKAD;
    cout << "���� ����������� �� �������: " << m << endl;

    return 0;
}
