#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Введите трехзначное число: ";
    cin >> number;
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;
    int sum = hundreds + tens + units;
    cout << "Сумма цифр трехзначного числа " << number << " равна " << sum << endl;
    return 0;
}
