// 1_23 <inpf >optf
#include "Sales_item.h"
#include <iostream>
int main()
{
    int sum = 1;
    Sales_item book, now;
    if (std::cin >> now) {
        while (std::cin >> book) {
            if (book.isbn() == now.isbn()) {
                sum += 1;
            } else {
                std::cout << now.isbn() << ' ' << sum << std::endl;
                now = book;
                sum = 1;
            }
        }
        std::cout << now.isbn() << ' ' << sum << std::endl;
    } else {
        std::cerr << "No Data" << std::endl;
    }
    return 0;
}
