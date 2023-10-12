#include <iostream>
using namespace std;

void reverseArray(int array[], int N) {
    int start = 0;  
    int end = N - 1;  

    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
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

    reverseArray(array, N);

    cout << "������ ����� ������������ � �������� �������: ";
    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
