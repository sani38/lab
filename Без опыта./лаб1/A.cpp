#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b;
    cout << "¬ведите значение катета a: ";
    cin >> a;
    cout << "¬ведите значение катета b: ";
    cin >> b;
    double c = sqrt(a * a + b * b);
    cout << "√ипотенуза треугольника: " << c << endl;
    return 0;
}
