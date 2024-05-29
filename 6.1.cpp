#include <iostream>
#include<cmath>
#include "func.h"



int main() {
    setlocale(LC_ALL, "ru");
     double a;
     double b;
     double c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):";
    std::cin >> c;
    calc(a, b, c);

    return 0;

}