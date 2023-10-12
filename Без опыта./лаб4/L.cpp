#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите количество учеников: ";
    cin >> N;

    if (N < 1 || N > 100) {
        cout << "Некорректный ввод. N должно быть в пределах от 1 до 100." << endl;
        return 1;
    }

    int heights[10];
    cout << "Введите росты учеников через пробел (в порядке невозрастания): ";
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    int peteHeight;
    cout << "Введите рост Пети: ";
    cin >> peteHeight;

    int position = N;
    for (int i = N - 1; i >= 0; --i) {
        if (peteHeight >= heights[i]) {
            position = i;
            break;
        }
    }

    while (position < N && peteHeight == heights[position]) {
        ++position;
    }

    cout << "Петя должен встать на место " << position + 1 << " в шеренге." << endl;

    return 0;
}
