#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define D 2.54
#define M 2.32

int task();
int task2();
int task3();

int main()
{
    setlocale(LC_CTYPE, ".UTF-8");

    task();
    task2();
    task3();

    return 0;
}

int task()
{
    int n1, n2;
    puts("Введите число:");
    scanf_s("%d", &n1);
    printf("Введено число %d\n", n1);

    scanf_s("%d", &n2);
    printf("Введено число %d\n", n2);

    printf("%d %d %d %d %d\n\n\n", n1 + n2, n1 - n2, n1 * n2, n1 / n2, n2 % n1);
    return 0;
}

int task2()
{
    int dym;
    double result; 

    puts("Введите число для расчета:");
    scanf_s("%d", &dym);
    result = D * dym;
    printf("%d дюймов = %.10f сантиметров\n", dym, result);
    printf("%d испанских дюймов = %.10f сантиметров\n", dym, M * dym);
    printf("%d старолитовских дюймов = %.10f сантиметров\n\n\n", dym, dym); 
    return 0;
}

int task3()
{
    int a, b;
    puts("Введите первое число:");
    scanf_s("%d", &a);
    puts("Введите второе число:");
    scanf_s("%d", &b);
    puts("--------------------------------------------");
    printf("| %11s | %11s | %11s |\n", "a * b", "a + b", "a - b");
    puts("--------------------------------------------");
    printf("| %11d | %11d | %11d |\n", a * b, a + b, a - b);
    puts("--------------------------------------------");

    return 0;
}