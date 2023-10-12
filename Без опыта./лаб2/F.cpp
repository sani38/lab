#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;

    int max_number = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "Наибольшее число: " << max_number << endl;

    return 0;
}
