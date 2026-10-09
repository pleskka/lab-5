
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

#define M_PI 3.14159265358979323846

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double gr;
    double rad;
    double result;

    printf("Угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180;
    result = sin(rad);
    printf("Синус угла %.2f градусов = %.6f\n", gr, result);

    return 0;
}
