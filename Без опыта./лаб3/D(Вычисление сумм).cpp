#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int combinations(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    cout << "Введите значения n и k (n, k <= 10): ";
    cin >> n >> k;

    if (n < 0 || k < 0 || n > 10 || k > 10) {
        cout << "Некорректный ввод. n и k должны быть неотрицательными и не превышать 10." << endl;
        return 1;
    }

    int result = combinations(n, k);
    cout << "Значение C_" << n << "^" << k << " = " << result << endl;

    return 0;
}
