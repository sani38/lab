#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    if (N < 0) {
        cout << "Некорректный ввод. N должно быть неотрицательным." << endl;
        return 1;
    }

    int i = 1;
    while (i * i <= N) {
        cout << i * i << " ";
        i++;
    }

    cout << endl;

    return 0;
}
