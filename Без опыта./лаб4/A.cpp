#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "������� ���������� ��������� � �������: ";
    cin >> N;

    if (N < 1 || N > 100) {
        cout << "������������ ����. N ������ ���� � �������� �� 1 �� 100." << endl;
        return 1;
    }

    int array[10];
    cout << "������� �������� ������� ����� ������: ";
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    cout << "�������� ������� � ������� ��������: ";
    for (int i = 0; i < N; i += 2) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
