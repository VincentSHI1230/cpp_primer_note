// 1_22 <inpf >optf
#include "Sales_item.h"
#include <iostream>
int main()
{
    Sales_item sum, book;
    std::cin >> sum;
    while (std::cin >> book) {
        sum += book;
    }
    std::cout << sum << std::endl;
    return 0;
}
