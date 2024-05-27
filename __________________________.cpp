#include <iostream>
#include <cmath>
#include <Windows.h> 

using namespace std;

double add(double a, double b) 
{
    return a + b;
}

double subtract(double a, double b) 
{
    return a - b;
}
double multiply(double a, double b) 
{
    return a * b;
}
double divide(double a, double b)
{
    if (b == 0) {
        std::cout << "Ошибка: Деление на ноль" << "\n";
        return 0;
    }
    return a / b;
}

double modulo(double a, double b) 
{
    if (b == 0) {
        std::cout << "Ошибка: Деление на ноль" << "\n";
        return 0;
    }
    return fmod(a, b);
}

double squareRoot(double a) 
{
    if (a < 0) {
        std::cout << "Ошибка: Невозможно извлечь корень из отрицательного числа" << "\n";
        return 0;
    }
    return sqrt(a);
}

double MakeDecision(double a, double b, char operation)
{
    if (operation == '+') 
    {
        return add(a, b);
    }
    else if (operation == '-') 
    {
        return subtract(a, b);
    }
    else if (operation == '*')
    {
        return multiply(a, b);
    }
    else if (operation == '/')
    {
        return divide(a, b);
    }
    else if (operation == '%') 
    {
        return modulo(a, b);
    }
    else if (operation == 's') 
    { 
        return squareRoot(a);
    }
    else 
    {
        std::cout << "Неверная операция" << "\n";
        return 0;
    }
}

int main() 

{
    setlocale(LC_ALL, "ru");
    double num1, num2, result;
    char operation;

    std::cout << "Введите первое число: ";
    cin >> num1;

    std::cout << "Введите второе число: ";
    cin >> num2;

    std::cout << "Выберите операцию (+, -, *, /, %, sqrt): ";
    cin >> operation;

    result = MakeDecision(num1, num2, operation);

    std::cout << "Результат: " << result << "\n";

    return 0;
}
