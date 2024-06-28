#include <iostream>

int main() {
    int c1, b1;
    std::cin >> c1 >> b1;
    int hours = 2 * c1;
    int firelessCnt = c1;
    while (firelessCnt >= b1) {
        hours += (firelessCnt / b1) * 4;
        firelessCnt = firelessCnt % b1 + 2 * (firelessCnt / b1);
    }
    std::cout << hours << "\n";
}