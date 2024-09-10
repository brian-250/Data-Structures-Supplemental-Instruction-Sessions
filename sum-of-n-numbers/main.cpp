#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i++) {
        m = m + i;
    }
    std::cout << m;
    return 0;
}