#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "������� ���������� ��������: ";
    cin >> N;

    if (N < 1 || N > 100) {
        cout << "������������ ����. N ������ ���� � �������� �� 1 �� 100." << endl;
        return 1;
    }

    int heights[10];
    cout << "������� ����� �������� ����� ������ (� ������� �������������): ";
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    int peteHeight;
    cout << "������� ���� ����: ";
    cin >> peteHeight;

    int position = N;
    for (int i = N - 1; i >= 0; --i) {
        if (peteHeight >= heights[i]) {
            position = i;
            break;
        }
    }

    while (position < N && peteHeight == heights[position]) {
        ++position;
    }

    cout << "���� ������ ������ �� ����� " << position + 1 << " � �������." << endl;

    return 0;
}
