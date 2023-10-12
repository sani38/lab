#include <iostream>
using namespace std;

void swapAdjacentElements(int array[], int N) {
    for (int i = 0; i < N - 1; i += 2) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

int main() {
    int N;
    cout << "������� ���������� ��������� � �������: ";
    cin >> N;

    if (N < 1 || N > 35) {
        cout << "������������ ����. N ������ ���� � �������� �� 1 �� 35." << endl;
        return 1;
    }

    int array[10];
    cout << "������� �������� ������� ����� ������: ";
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    swapAdjacentElements(array, N);

    cout << "������ ����� ������������ �������� ���������: ";
    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
