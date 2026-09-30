#include <iostream>
#include "funcs.h"

// Файл реализации получающий на вход два числа и операнд в формате - число операнд число
// и выводящий результат арифметического выражение

int main(){
    int a = 0;
    int b = 0;
    char opp;
    std::cout << "Введите числа и арифметическую операцию в формате число операнд число" << '\n';
    std::cin >> a >> opp >> b;
    switch (opp) {
        case '+':
            std::cout << sum(a, b);
            break;
        case '-':
            std::cout << sub(a, b);
            break;
        case '*':
            std::cout << op(a, b);
            break;
        case '/':
            std::cout << di(a, b);
            break;
        case '%':
            std::cout << mod(a, b);
            break;
        default:
            std::cout << "Ошибка: неверный оператор";
            break;
    }
    std::cout << '\n';
    return 0;
}

