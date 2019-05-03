#include <iostream>

int main() {

    auto b = 18'446'744'073'709'551'615;
    std::cout << std::dec << b << " + 1 = " 
              << b + 1 << std::endl;
    std::cout << sizeof(b) << std::endl;
    return 0;
}
