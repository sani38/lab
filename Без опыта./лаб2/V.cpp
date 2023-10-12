#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0) {
        double x1 = (-b + std::sqrt(D)) / (2 * a);
        double x2 = (-b - std::sqrt(D)) / (2 * a);
        cout << "Два корня: " << x1 << " и " << x2 << endl;
    }
    else if (D == 0) {
        double x = -b / (2 * a);
        cout << "Один корень: " << x << endl;
    }
    else {
        cout << "Нет действительных корней" << endl;
    }

    return 0;
}
