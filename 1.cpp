#include <iostream>
using namespace std;

void findCommonElements(int A[], int B[], int M, int N, int*& result, int& resultSize) {
    resultSize = 0;

    // Проходим по элементам массива A
    for (int i = 0; i < M; ++i) {
        // Проверяем, есть ли элемент массива A в массиве B
        bool isCommon = false;
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                isCommon = true;
                break;
            }
        }

        // Если элемент присутствует и не дублируется, добавляем его в результат
        if (isCommon) {
            bool alreadyAdded = false;
            for (int l = 0; l < resultSize; ++l) {
                if (A[i] == result[l]) {
                    alreadyAdded = true;
                    break;
                }
            }

            if (!alreadyAdded) {
                // Увеличиваем размер результата и выделяем дополнительную память
                int* tempResult = new int[resultSize + 1];
                for (int l = 0; l < resultSize; ++l) {
                    tempResult[l] = result[l];
                }
                tempResult[resultSize] = A[i];
                ++resultSize;

                // Освобождаем старую память и обновляем указатель
                delete[] result;
                result = tempResult;
            }
        }
    }
}

int main() {
    setlocale(0, "rus");
    int M, N;

    cout << "Введите размер массива A: ";
    cin >> M;

    int* A = new int[M];
    cout << "Введите элементы массива A:\n";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "Введите размер массива B: ";
    cin >> N;

    int* B = new int[N];
    cout << "Введите элементы массива B:\n";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int* result = nullptr;  // Указатель на результат
    int resultSize = 0;     // Размер результата

    // Находим общие элементы и записываем их в третий массив
    findCommonElements(A, B, M, N, result, resultSize);

    cout << "Общие элементы массивов A и B:\n";
    for (int i = 0; i < resultSize; ++i) {
        cout << result[i] << " ";
    }

    // Освобождаем память, выделенную под динамические массивы
    delete[] A;
    delete[] B;
    delete[] result;

    return 0;
}
