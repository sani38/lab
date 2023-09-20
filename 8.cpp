#include <iostream>
using namespace std;

void distributeElements(int* staticArr, int size, int*& positiveArr, int& positiveSize,
    int*& negativeArr, int& negativeSize, int*& zeroArr, int& zeroSize) {
    positiveSize = 0;
    negativeSize = 0;
    zeroSize = 0;

    for (int i = 0; i < size; ++i) {
        if (staticArr[i] > 0)
            ++positiveSize;
        else if (staticArr[i] < 0)
            ++negativeSize;
        else
            ++zeroSize;
    }

    positiveArr = new int[positiveSize];
    negativeArr = new int[negativeSize];
    zeroArr = new int[zeroSize];

    int positiveIndex = 0;
    int negativeIndex = 0;
    int zeroIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (staticArr[i] > 0)
            positiveArr[positiveIndex++] = staticArr[i];
        else if (staticArr[i] < 0)
            negativeArr[negativeIndex++] = staticArr[i];
        else
            zeroArr[zeroIndex++] = staticArr[i];
    }
}

int main() {
    setlocale(0, "rus");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* staticArr = new int[size];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        cin >> staticArr[i];
    }

    int* positiveArr;
    int positiveSize;

    int* negativeArr;
    int negativeSize;

    int* zeroArr;
    int zeroSize;

    distributeElements(staticArr, size, positiveArr, positiveSize, negativeArr, negativeSize, zeroArr, zeroSize);

    cout << "Положительные элементы:\n";
    for (int i = 0; i < positiveSize; ++i) {
        cout << positiveArr[i] << " ";
    }
    cout << endl;

    cout << "Отрицательные элементы:\n";
    for (int i = 0; i < negativeSize; ++i) {
        cout << negativeArr[i] << " ";
    }
    cout << endl;

    cout << "Нулевые элементы:\n";
    for (int i = 0; i < zeroSize; ++i) {
        cout << zeroArr[i] << " ";
    }
    cout << endl;

    delete[] staticArr;
    delete[] positiveArr;
    delete[] negativeArr;
    delete[] zeroArr;

    return 0;
}
