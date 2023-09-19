#include <iostream>
using namespace std;

void findUniqueElements(int A[], int B[], int M, int N, int*& result, int& resultSize) {
    resultSize = 0;

    for (int i = 0; i < M; ++i) {
        bool isUnique = true;
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            bool alreadyAdded = false;
            for (int l = 0; l < resultSize; ++l) {
                if (A[i] == result[l]) {
                    alreadyAdded = true;
                    break;
                }
            }

            if (!alreadyAdded) {
                int* tempResult = new int[resultSize + 1];
                for (int l = 0; l < resultSize; ++l) {
                    tempResult[l] = result[l];
                }
                tempResult[resultSize] = A[i];
                ++resultSize;

                delete[] result;
                result = tempResult;
            }
        }
    }
}

int main() {
    setlocale(0, "rus");
    int M, N;

    cout << "������� ������ ������� A: ";
    cin >> M;

    int* A = new int[M];
    cout << "������� �������� ������� A:\n";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "������� ������ ������� B: ";
    cin >> N;

    int* B = new int[N];
    cout << "������� �������� ������� B:\n";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int* result = nullptr;  
    int resultSize = 0;     

    findUniqueElements(A, B, M, N, result, resultSize);

    cout << "�������� ������� A, �� ������������ � ������ B:\n";
    for (int i = 0; i < resultSize; ++i) {
        cout << result[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] result;

    return 0;
}
