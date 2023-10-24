#include <iostream>

int main() {
    int k, m, n;
    std::cin >> k >> m >> n;

    int full_cycles = n / k;

    if (n % k != 0) {
        full_cycles++;
    }

    int total_time = full_cycles * m * 2; 

    std::cout << total_time << std::endl;

    return 0;
}
