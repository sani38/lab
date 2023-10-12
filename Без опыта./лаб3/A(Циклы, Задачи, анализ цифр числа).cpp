#include <iostream>
using namespace std;

int SumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    if (N < 0) {
        cout << "Некорректный ввод. N должно быть неотрицательным." << endl;
        return 1;
    }

    int result = SumOfDigits(N);
    cout << "Сумма цифр числа N равна " << result << endl;

    return 0;
}
