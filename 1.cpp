//1.
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int M, N;
    cout << "Vvedite razmer massiva A: ";
    cin >> M;
    cout << "Vvedite razmer massiva B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Vvedite elementy massiva A:\n";
    for (int i = 0; i < M; ++i)
        cin >> A[i];

    cout << "Vvedite elementy massiva B:\n";
    for (int i = 0; i < N; ++i)
        cin >> B[i];

    unordered_set<int> commonElements;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                commonElements.insert(A[i]);
                break;
            }
        }
    }

    int commonSize = commonElements.size();
    int* result = new int[commonSize];

    int index = 0;
    for (int element : commonElements) {
        result[index] = element;
        index++;
    }

    cout << "Obshie elementy massivov bez povtoreniy:\n";
    for (int i = 0; i < commonSize; ++i)
        cout << result[i] << " ";

    // Î÷èùàåì äèíàìè÷åñêè âûäåëåííóþ ïàìÿòü
    delete[] A;
    delete[] B;
    delete[] result;

    return 0;
}


/*2
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    setlocale(0, "rus");
    int M, N;
    cout << "Введите размер массива A: ";
    cin >> M;
    cout << "Введите размер массива B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Введите элементы массива A:\n";
    for (int i = 0; i < M; ++i)
        cin >> A[i];

    cout << "Введите элементы массива B:\n";
    for (int i = 0; i < N; ++i)
        cin >> B[i];

    unordered_set<int> elementsA(A, A + M);
    unordered_set<int> elementsB(B, B + N);
    unordered_set<int> resultElements;

    for (int i = 0; i < M; ++i) {
        if (elementsB.find(A[i]) == elementsB.end()) {
            resultElements.insert(A[i]);
        }
    }

    int resultSize = resultElements.size();
    int* result = new int[resultSize];

    int index = 0;
    for (int element : resultElements) {
        result[index] = element;
        index++;
    }

    cout << "Элементы массива A, которые не включаются в массив B:\n";
    for (int i = 0; i < resultSize; ++i)
        std::cout << result[i] << " ";

    // Очищаем динамически выделенную память
    delete[] A;
    delete[] B;
    delete[] result;

    return 0;
}
*/




/*3
#include <iostream>
#include <unordered_set>

using namespace std;

int* createThirdArray(int* A, int M, int* B, int N, int& thirdArraySize) {
    unordered_set<int> commonElements(A, A + M);
    unordered_set<int> uniqueElements;

    for (int i = 0; i < N; ++i) {
        if (commonElements.find(B[i]) == commonElements.end()) {
            uniqueElements.insert(B[i]);
        }
    }

    thirdArraySize = uniqueElements.size();
    int* thirdArray = new int[thirdArraySize];
    int index = 0;

    for (int element : uniqueElements) {
        thirdArray[index] = element;
        ++index;
    }

    return thirdArray;
}

int main() {
    setlocale(0, "rus");
    int M, N;

    cout << "Введите размер массива A: ";
    cin >> M;
    int* A = new int[M];
    cout << "Введите элементы массива A: ";
    for (int i = 0; i < M; ++i)
        cin >> A[i];

    cout << "Введите размер массива B: ";
    cin >> N;
    int* B = new int[N];
    cout << "Введите элементы массива B: ";
    for (int i = 0; i < N; ++i)
        cin >> B[i];

    int thirdArraySize = 0;
    int* thirdArray = createThirdArray(A, M, B, N, thirdArraySize);

    cout << "Третий массив без общих элементов: ";
    for (int i = 0; i < thirdArraySize; ++i)
        cout << thirdArray[i] << " ";

    // Освобождаем выделенную память
    delete[] A;
    delete[] B;
    delete[] thirdArray;

    return 0;
}
*/





/*7
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    if (num == 2)
        return true;

    int maxDivisor = static_cast<int>(sqrt(num)) + 1;
    for (int i = 2; i < maxDivisor; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int* removePrimes(int* arr, int& size) {
    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i]))
            newSize++;
    }

    int* newArr = new int[newSize];
    int newIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            newArr[newIndex] = arr[i];
            newIndex++;
        }
    }

    size = newSize;  // Обновляем размер массива
    return newArr;
}

int main() {
    setlocale(0, "rus");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* myArray = new int[size];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i)
        cin >> myArray[i];

    int* newArray = removePrimes(myArray, size);

    cout << "Массив после удаления простых чисел:\n";
    for (int i = 0; i < size; ++i) {
        cout << newArray[i] << " ";
    }
    cout << "\n";

    // Очищаем выделенную память
    delete[] newArray;
    delete[] myArray;

    return 0;
} */



/* 8
#include <iostream>
using namespace std;

void distributeElements(int* arr, int size, int*& positiveArr, int& positiveCount,
    int*& negativeArr, int& negativeCount, int*& zeroArr, int& zeroCount) {
    // Инициализируем счетчики
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    // Подсчитываем количество положительных, отрицательных и нулевых элементов
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            ++positiveCount;
        else if (arr[i] < 0)
            ++negativeCount;
        else
            ++zeroCount;
    }

    // Выделяем память для динамических массивов
    positiveArr = new int[positiveCount];
    negativeArr = new int[negativeCount];
    zeroArr = new int[zeroCount];

    // Заполняем динамические массивы
    int positiveIndex = 0;
    int negativeIndex = 0;
    int zeroIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            positiveArr[positiveIndex++] = arr[i];
        else if (arr[i] < 0)
            negativeArr[negativeIndex++] = arr[i];
        else
            zeroArr[zeroIndex++] = arr[i];
    }
}

int main() {
    setlocale(0, "rus");
    int arr[] = { 3, -2, 0, 5, -1, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* positiveArr;
    int positiveCount;
    int* negativeArr;
    int negativeCount;
    int* zeroArr;
    int zeroCount;

    distributeElements(arr, size, positiveArr, positiveCount, negativeArr, negativeCount, zeroArr, zeroCount);

    // Выводим результаты
    cout << "Положительные элементы: ";
    for (int i = 0; i < positiveCount; ++i)
        cout << positiveArr[i] << " ";
    cout << endl;

    cout << "Отрицательные элементы: ";
    for (int i = 0; i < negativeCount; ++i)
        cout << negativeArr[i] << " ";
    cout << endl;

    cout << "Нулевые элементы: ";
    for (int i = 0; i < zeroCount; ++i)
        cout << zeroArr[i] << " ";
    cout << endl;

    // Освобождаем выделенную память
    delete[] positiveArr;
    delete[] negativeArr;
    delete[] zeroArr;

    return 0;
}
*/

/* 8
#include <iostream>
using namespace std;

void distributeElements(int* arr, int size, int*& positiveArr, int& positiveCount,
    int*& negativeArr, int& negativeCount, int*& zeroArr, int& zeroCount) {
    // Инициализируем счетчики
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    // Подсчитываем количество положительных, отрицательных и нулевых элементов
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            ++positiveCount;
        else if (arr[i] < 0)
            ++negativeCount;
        else
            ++zeroCount;
    }

    // Выделяем память для динамических массивов
    positiveArr = new int[positiveCount];
    negativeArr = new int[negativeCount];
    zeroArr = new int[zeroCount];

    // Заполняем динамические массивы
    int positiveIndex = 0;
    int negativeIndex = 0;
    int zeroIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            positiveArr[positiveIndex++] = arr[i];
        else if (arr[i] < 0)
            negativeArr[negativeIndex++] = arr[i];
        else
            zeroArr[zeroIndex++] = arr[i];
    }
}

int main() {
    setlocale(0, "rus");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i)
        cin >> arr[i];

    int* positiveArr;
    int positiveCount;
    int* negativeArr;
    int negativeCount;
    int* zeroArr;
    int zeroCount;

    distributeElements(arr, size, positiveArr, positiveCount, negativeArr, negativeCount, zeroArr, zeroCount);

    // Выводим результаты
    cout << "Положительные элементы: ";
    for (int i = 0; i < positiveCount; ++i)
        cout << positiveArr[i] << " ";
    cout << endl;

    cout << "Отрицательные элементы: ";
    for (int i = 0; i < negativeCount; ++i)
        cout << negativeArr[i] << " ";
    cout << endl;

    cout << "Нулевые элементы: ";
    for (int i = 0; i < zeroCount; ++i)
        cout << zeroArr[i] << " ";
    cout << endl;

    // Освобождаем выделенную память
    delete[] arr;
    delete[] positiveArr;
    delete[] negativeArr;
    delete[] zeroArr;

    return 0;
}
*/
