#include <iostream>

int main() {
    int p, t, k;
    
    std::cout << "Введите номер квартиры: ";
    std::cin >> p;
    
    std::cout << "Введите количество этажей в доме: ";
    std::cin >> t;
    
    std::cout << "Введите количество квартир на лестничной площадке: ";
    std::cin >> k;
    
    // Рассчитываем номер подъезда и этаж
    int entrance = (p - 1) / (k * t) + 1;
    int floor = ((p - 1) / k) % t + 1;
    
    std::cout << "Номер подъезда: " << entrance << std::endl;
    std::cout << "Этаж: " << floor << std::endl;
    
    return 0;
}
