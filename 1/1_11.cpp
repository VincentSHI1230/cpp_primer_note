#include <iostream>
int main() {
    int a, b, c;
    std::cout << "input 2 nums: ";
    std::cin >> a >> b;
    if (a >= b) {
        c = a;
    } else {
        c = b;
        b = a;
    }
    while (b <= c) {
        std::cout << b << ' ';
        b++;
    }
    std::cout << std::endl;
    return 0;
}
