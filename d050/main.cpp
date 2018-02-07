#include <iostream>
int main() {
    int h;
    std::cin >> h;
    std::cout << h-15+ ((h-15>=0) ? 0:24);
    return 0;
}