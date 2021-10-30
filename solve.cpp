#include <iostream>

void Move(size_t n, size_t x, size_t y) {
    if (!n) {
        return;
    }
    Move(n - 1, x, 6 - x - y);
    std::cout << "Move disc " << n << " from rod " << x << " to rod " << y << "\n";
    Move(n - 1, 6 - x - y, y);
}

void SolveHanoi(size_t disc_count) {
    Move(disc_count, 1, 3);
}

int main() {
    int n;
    std::cout << "Input height of tower: ";
    std::cin >> n;
    std::cout << "\n";
    SolveHanoi(n);
    return 0;
}
