#include <iostream>
#include <cmath>

int main() {
    double circumference; // Длина окружности
    std::cout << "Введите длину окружности: ";
    std::cin >> circumference;

    const double pi = 3.14159265359; // Пи (можно воспользоваться библиотечной константой M_PI)

    // Вычисляем радиус круга
    double radius = circumference / (2 * pi);

    // Вычисляем площадь круга
    double area = pi * std::pow(radius, 2);

    // Выводим результат
    std::cout << "Площадь круга: " << area << std::endl;

    return 0;
}
