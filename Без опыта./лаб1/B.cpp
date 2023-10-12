#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "¬ведите целое число: ";
    cin >> number;
    cout << "The next number for the number " << number << " is " << number + 1 << "." << endl;
    cout << "The previous number for the number " << number << " is " << number - 1 << "." << endl;

    return 0;
}
