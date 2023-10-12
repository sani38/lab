#include <iostream>
using namespace std;

int NumberOfZeroes(int n) {
    int count = 0;

    while (n != 0) {
        if (n % 10 == 0) {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    if (N < 0) {
        cout << "Некорректный ввод. N должно быть неотрицательным." << endl;
        return 1;
    }

    int result = NumberOfZeroes(N);
    cout << "Количество нулей среди всех цифр числа N: " << result << endl;

    return 0;
}
