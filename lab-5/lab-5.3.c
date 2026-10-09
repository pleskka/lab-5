
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int A, B, C;
    int uslovie_a, uslovie_b;
    printf("Введите целые значения A, B и C: \n");
    scanf("%d %d %d", &A, &B, &C)
    uslovie_a = (A % 2 == 0) != (B % 2 == 0);
    uslovie_b = (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0);
    printf("\nа) Условие выполнено (1 - да, 0 - нет): %d\n",
        uslovie_a);
    printf("б) Условие выполнено (1 - да, 0 - нет): %d\n",
        uslovie_b);
    return 0;
}
