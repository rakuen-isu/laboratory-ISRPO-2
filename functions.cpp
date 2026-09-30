#include "funcs.h"
#include <iostream>
// Список функций, поддерживаемых калькулятором

// Сумма - проводит сложение двух чисел a и b
int sum(int a, int b){
    return a + b;
}

// Вычитание - проводит вычитание числа b из числа a
int sub(int a, int b){
    return a - b;
}

// Произведение - умножает числа a и b
int op(int a, int b){
    return a * b;
}

// Деление - делит число a на число b
int di(int a, int b){
    if (b == 0) {
        std::cout << "Ошибка: деление на ноль" << '\n';
        return 0;
    }
    return a / b;
}

// Остаток от деления - возвращает остаток от деления числа a на число b
int mod(int a, int b){
    if (b == 0) {
        std::cout << "Ошибка: деление на ноль" << '\n';
        return 0;
    }
    return a % b;
}

