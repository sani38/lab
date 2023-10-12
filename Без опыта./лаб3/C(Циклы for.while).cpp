#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    if (N < 1) {
        cout << "Некорректный ввод. N должно быть натуральным числом." << endl;
        return 1;
    }

    int p = 1;
    while (p <= N) {
        cout << p << " ";
        p *= 2;
    }

    cout << endl;

    return 0;
}
