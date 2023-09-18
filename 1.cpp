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

    // Очищаем динамически выделенную память
    delete[] A;
    delete[] B;
    delete[] result;

    return 0;
}