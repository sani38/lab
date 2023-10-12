#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int queenRow, queenCol, otherRow, otherCol;

    cout << "Введите координаты ферзя (ряд и колонка): ";
    cin >> queenRow >> queenCol;

    cout << "Введите координаты другой фигуры (ряд и колонка): ";
    cin >> otherRow >> otherCol;

    bool canCapture = (queenRow == otherRow) || (queenCol == otherCol) || (abs(queenRow - otherRow) == abs(queenCol - otherCol));

    // Выводим результат
    if (canCapture) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
