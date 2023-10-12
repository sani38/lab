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
    cout << "Введите число N: ";
    cin >> N;

    if (N < 0) {
        cout << "Некорректный ввод. N должно быть неотрицательным." << endl;
        return 1;
    }

    cout << "Представление числа " << N << " в двоичном виде в обратном порядке: ";
    PrintBinaryReverse(N);
    cout << endl;

    return 0;
}
