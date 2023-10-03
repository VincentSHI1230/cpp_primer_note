// 1_23 <inpf >optf
#include "Sales_item.h"
#include <iostream>
int main()
{
    Sales_item sum, book;
    if (std::cin >> sum) {
        while (std::cin >> book) {
            if (sum.isbn() == book.isbn()) {
                sum += book;
            } else {
                std::cout << sum << std::endl;
                sum = book;
            }
        }
        std::cout << sum << std::endl;
    } else {
        std::cerr << "No Data" << std::endl;
    }
    return 0;
}
