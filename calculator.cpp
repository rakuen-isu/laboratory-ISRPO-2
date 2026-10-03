#include <iostream>
#include "funcs.h"

// Файл реализации получающий на вход два числа и оператор в формате - число оператор число
// и выводящий результат арифметического выражение

int main(){
    int a = 0;
    int b = 0;
    char opp;
    std::cout << "Input two numbers & operator in format: number operator number" << '\n';
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
            std::cout << "Error: unknown operator";
            break;
    }
    std::cout << '\n';
    return 0;
}

