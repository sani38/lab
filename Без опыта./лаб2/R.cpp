#include <iostream>
using namespace std;

int main() {
    int k, m, n;

    cout << "¬ведите количество котлет, врем€ на одну сторону (в минутах) и общее количество котлет: ";
    cin >> k >> m >> n;

    int total_time = n * 2 * m;

    int min_time = (total_time + k - 1) / k;

    cout << "ћинимальное общее врем€ дл€ обжаривани€ всех котлет: " << min_time << " минут" << endl;

    return 0;
}
