#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int* removePrimes(int* arr, int size, int& newSize) {
    // ������� ���������� ������� ����� � �������
    int primeCount = 0;
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i]))
            ++primeCount;
    }

    // ������� ����� ������ ��� ������� �����
    newSize = size - primeCount;
    int* newArr = new int[newSize];
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i]))
            newArr[index++] = arr[i];
    }

    return newArr;
}

int main() {
    setlocale(0, "rus");
    int size;
    cout << "������� ������ �������: ";
    cin >> size;

    int* arr = new int[size];

    cout << "������� �������� �������:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int newSize;
    int* newArr = removePrimes(arr, size, newSize);

    cout << "����� ������ ��� ������� �����:\n";
    for (int i = 0; i < newSize; ++i) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] newArr;

    return 0;
}
