//вариант 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x;
    double p = 3;
    double a, b, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);
    b = p * x * x + sqrt(a);
    a = sqrt(p * x);
    y = pow(log(b * b), 3) + a * x;
    printf("При x = %.1f значение y = %.4f\n", x, y);

    return 0;
}
