// 1-22 <inpf >optf
#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item sum, book;
    std::cin >> sum;
    while (std::cin >> book) {
        sum += book;
    }
    std::cout << sum << std::endl;
    return 0;
}
