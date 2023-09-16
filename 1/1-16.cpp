#include <iostream>
int main() {
    int i, sum = 0;
    std::cout << "input nums: ";
    while (std::cin >> i) {
        sum += i;
    }
    std::cout << "sum is " << sum << std::endl;
    return 0;
}
