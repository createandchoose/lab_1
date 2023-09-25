#include <iostream>

int main() {
    int n;

    std::cout << "Введите семи- или восьмизначное число: ";
    std::cin >> n;

    int sixthDigit = 0;

    if (n >= 1000000 && n <= 99999999) {
        
        int lastSixDigits = (n % 1000000) / 1000;
   
        sixthDigit = lastSixDigits / 10;
    }
    else {
        std::cout << "Некорректное число! Введите семи- или восьмизначное число." << std::endl;
        return 0;
    }

    std::cout << "Шестая цифра с конца: " << sixthDigit << std::endl;

    return 0;
}