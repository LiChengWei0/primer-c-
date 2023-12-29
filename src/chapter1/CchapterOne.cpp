#include <iostream>

int main() {
    // 1.3
    std::cout << "hello world" << std::endl;
    // 1.4
    int x, y;
    std::cin >> x >> y;
    std::cout << "x * y = " << x * y << std::endl;
    // 1.9
    int sum = 50;
    while(sum <= 100){
        sum += sum++;
    }
    // 1.10
    int index = 10;
    while(index >= 0){
        std::cout << index-- << std::endl;
    }
    return 0;
}