#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int knightRow, knightCol, otherRow, otherCol;

    cout << "¬ведите координаты кон€ (р€д и колонка): ";
    cin >> knightRow >> knightCol;

    cout << "¬ведите координаты другой фигуры (р€д и колонка): ";
    cin >> otherRow >> otherCol;

    int rowDiff = abs(knightRow - otherRow);
    int colDiff = abs(knightCol - otherCol);
    bool canCapture = (rowDiff == 2 && colDiff == 1) || (rowDiff == 1 && colDiff == 2);

    if (canCapture) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
