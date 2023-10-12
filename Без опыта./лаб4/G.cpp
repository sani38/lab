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
    cout << "Введите количество элементов в массиве: ";
    cin >> N;

    if (N < 1 || N > 35) {
        cout << "Некорректный ввод. N должно быть в пределах от 1 до 35." << endl;
        return 1;
    }

    int array[10];
    cout << "Введите элементы массива через пробел: ";
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    reverseArray(array, N);

    cout << "Массив после перестановки в обратном порядке: ";
    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
