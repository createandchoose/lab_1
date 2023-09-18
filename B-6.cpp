#include <iostream>
#include <cmath>

int main() {
    double side;
    std::cout << "Введите длину стороны равностороннего треугольника: ";
    std::cin >> side;

    double area = (sqrt(3) / 4) * pow(side, 2);
    double height = (sqrt(3) / 2) * side;
    double inradius = side / (2 * sqrt(3));
    double circumradius = side / sqrt(3);

    std::cout << "Площадь треугольника: " << area << std::endl;
    std::cout << "Высота треугольника: " << height << std::endl;
    std::cout << "Радиус вписанной окружности: " << inradius << std::endl;
    std::cout << "Радиус описанной окружности: " << circumradius << std::endl;

    return 0;
}