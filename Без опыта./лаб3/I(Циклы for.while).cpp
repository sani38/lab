#include <iostream>
using namespace std;

bool isPerfectSquare(int x) {
    int s = sqrt(9x);
    return (s * s == x);
}

bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int findFibonacciIndex(int A) {
    int current = 1;
    int previous = 0;
    int index = 1;

    while (current < A) {
        int temp = current;
        current += previous;
        previous = temp;
        index++;
    }

    if (current == A)
        return index;

    return -1;
}

int main() {
    int A;
    cout << "������� ����������� ����� A (> 1): ";
    cin >> A;

    if (A <= 1) {
        cout << "������������ ����. A ������ ���� ������ 1." << endl;
        return 1;
    }

    if (isFibonacci(A)) {
        int index = findFibonacciIndex(A);
        cout << "A �������� " << index << "-� ������ ���������." << endl;
    }
    else {
        cout << "A �� �������� ������ ���������." << endl;
    }

    return 0;
}
