#include <iostream>
using namespace std;
int main() {
    int N, K;
    cout << "¬ведите количество школьников: ";
    cin >> N;
    cout << "¬ведите количество €блок: ";
    cin >> K;
    int apples = K / N;
    cout << " оличество €блок на каждого школьника: " << apples << endl;

    return 0;
}
