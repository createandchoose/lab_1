#include <iostream>
#include <cmath>

int findSixthDigit(int number) {
    int sixthDigit = 0;
    int numDigits = (int)log10(number) + 1;
    
    if (numDigits >= 6) {
        int position = numDigits - 6;
        
        int divisor = pow(10, position); 
        sixthDigit = (number / divisor) % 10; 
    }
    
    return sixthDigit;
}

int main() {
    int number;
    std::cout << "Введите семи- или восьмизначное число: ";
    std::cin >> number;
    
    int sixthDigit = findSixthDigit(number);
    std::cout << "Шестая цифра с конца: " << sixthDigit << std::endl;
    
    return 0;
}