#include <iostream>

int main() {
    double A, B, C;

    std::cout << "Введите длину одной из сторон первого прямоугольника (A): ";
    std::cin >> A;

    std::cout << "Введите длину другой стороны первого прямоугольника (B): ";
    std::cin >> B;

    std::cout << "Введите длину одной из сторон второго прямоугольника (C): ";
    std::cin >> C;

    // Вычисляем длину второй стороны (D)
    double D = (A * B * 6) / C;

    std::cout << "Длина второй стороны второго прямоугольника (D): " << D << std::endl;

    return 0;
}
