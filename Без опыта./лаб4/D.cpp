#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите количество элементов в массиве: ";
    cin >> N;

    if (N < 1 || N > 10000) {
        cout << "Некорректный ввод. N должно быть в пределах от 1 до 10000." << endl;
        return 1;
    }

    int array[10];
    cout << "Введите элементы массива через пробел: ";
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    int count = 0;  

    for (int i = 1; i < N; ++i) {
        if (array[i] > array[i - 1]) {
            count++;
        }
    }

    cout << "Количество элементов массива, больших предыдущего: " << count << endl;

    return 0;
}
