#include <iostream>
using namespace std;
int main() {
    int v, t, MKAD = 109;
    cout << "Введите скорость (в км/ч): ";
    cin >> v;
    cout << "Введите время (в часах): ";
    cin >> t;
    int m = (v * t) % MKAD;
    cout << "Вася остановится на отметке: " << m << endl;

    return 0;
}
