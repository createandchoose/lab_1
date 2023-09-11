#include <iostream>

int main() {
    double x, y;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение y: ";
    std::cin >> y;

    double x2 = x * x;
    double y2 = y * y;
    
    double result = 5 * x2 * y2 - 3 * x * y2 - 17 * x2 * y - 2 * y2 + 5 * x * y + 2 * x2 - 4 * x + 11 * y + 7;

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
