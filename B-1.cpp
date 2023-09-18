#include <iostream>
#include <cmath>

int main() {
    double circumference;
    std::cout << "Введите длину окружности: ";
    std::cin >> circumference;

    const double pi = 3.14159265359; // Пи (можно воспользоваться библиотечной константой M_PI)

    double radius = circumference / (2 * pi);

    double area = pi * std::pow(radius, 2);

    std::cout << "Площадь круга: " << area << std::endl;

    return 0;
}
