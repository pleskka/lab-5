//вариант 18
#include <stdio.h>
#include <locale.h>
#include <math.h>

double dz(double x, double y);

int main() {
    setlocale(LC_ALL, "Ru");

    printf("Домашнее задание\n");

    double res1 = dz(100.0, -0.5);
    printf("Контроль 1 -> F(100, -0.5) = %.6f (ожидается: 0.069295)\n", res1);

    double res2 = dz(3.7e-5, 5.0);
    printf("Контроль 2 -> F(3.7*10-5, 5) = %.6f (ожидается: -0.047015)\n", res2);

    return 0;
}

double dz(double x, double y)
{
    double a = 7.1e-9;

    double numenator = cos(pow(x, 3) + 6.0) - sin(y - a);
    double denominator = log(pow(x, 4)) - 2.0 * pow(sin(x), 5);

    return numenator / denominator;
}
