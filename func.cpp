#include <iostream>
#include<cmath>
#include "func.h"
void calc(double a, double b, double c) {
    if (c == 1) {
        std::cout << a << " ���� " << b << " ����� " << a + b;
    }
    else if (c == 2) {
        std::cout << a << " ����� " << b << " ����� " << a - b;
    }
    else if (c == 3) {
        std::cout << a << " �������� " << b << " ����� " << a * b;
    }
    else if (c == 4) {
        std::cout << a << " ��������� " << b << " ����� " << a / b;
    }
    else if (c == 5) {
        std::cout << a << " � ������� " << b << " ����� " << pow(a, b);
    }
}