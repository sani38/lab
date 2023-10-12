#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¬ведите количество элементов в массиве: ";
    cin >> N;

    if (N < 1 || N > 100) {
        cout << "Ќекорректный ввод. N должно быть в пределах от 1 до 100." << endl;
        return 1;
    }

    int array[10];
    cout << "¬ведите элементы массива через пробел: ";
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    cout << "Ёлементы массива с чЄтными номерами: ";
    for (int i = 0; i < N; i += 2) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
