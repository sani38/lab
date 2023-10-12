#include <iostream>
using namespace std;

int main() {
    int rookRow, rookCol, otherRow, otherCol;
    cout << "¬ведите координаты ладьи (р€д и колонка): ";
    cin >> rookRow >> rookCol;

    cout << "¬ведите координаты другой фигуры (р€д и колонка): ";
    cin >> otherRow >> otherCol;

    bool canCapture = (rookRow == otherRow) || (rookCol == otherCol);

    if (canCapture) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
