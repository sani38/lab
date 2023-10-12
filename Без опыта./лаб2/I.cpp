#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int queenRow, queenCol, otherRow, otherCol;

    cout << "������� ���������� ����� (��� � �������): ";
    cin >> queenRow >> queenCol;

    cout << "������� ���������� ������ ������ (��� � �������): ";
    cin >> otherRow >> otherCol;

    bool canCapture = (queenRow == otherRow) || (queenCol == otherCol) || (abs(queenRow - otherRow) == abs(queenCol - otherCol));

    // ������� ���������
    if (canCapture) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
