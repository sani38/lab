#include <iostream>
using namespace std;
int main() {
    int N, K;
    cout << "¬ведите количество школьников: ";
    cin >> N;
    cout << "¬ведите количество €блок: ";
    cin >> K;
    int r = K % N;
    cout << " оличество €блок, оставшихс€ в корзине: " << r << endl;
    return 0;
}
