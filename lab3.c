#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

#define D 2.54
#define M 2.32166
#define L 2.7076

int task(void);
int task2(void);
int task3(void);
double calculate_density(int population, double area);

int main(void)
{
    setlocale(LC_CTYPE, ".UTF8");
    task();
    task2();
    task3();
    printf("\n--- Вариант 27. Расчет плотности населения ---\n");
    int population;
    double area;
    double density;
    printf("Введите число жителей: ");
    scanf("%d", &population);
    printf("Введите площадь территории (кв. км): ");
    scanf("%lf", &area);
    density = calculate_density(population, area);
    printf("Плотность населения: %.2f чел./кв. км\n", density);

    return 0;
}

int task(void)
{
    int n1, n2;
    printf("--- Задание №1 ---\n");
    puts("Введите число:");
    scanf("%d", &n1);
    printf("Введено число %d\n", n1);
    scanf("%d", &n2);
    printf("Введено число %d\n", n2);
    printf("Сумма: %d, Разность: %d, Произведение: %d, Частное: %.2f, Остаток: %d\n\n",
        n1 + n2, n1 - n2, n1 * n2, (double)n1 / n2, n1 % n2);
    return 0;
}

int task2(void)
{
    printf("--- Задание №2 ---\n");
    int dym;
    double result;
    puts("Введите число для расчета:");
    scanf("%d", &dym);
    result = D * dym;
    printf("%d дюймов = %.2f см\n", dym, result);
    printf("%d испанских дюймов = %.5f см\n", dym, dym * M);
    printf("%d старолитовских дюймов = %.4f см\n\n", dym, dym * L);


    return 0;
}

int task3(void)
{
    printf("--- Задание №3 ---\n");
    double a, b;
    puts("Введите первое число:");
    scanf("%lf", &a);
    puts("Введите второе число:");
    scanf("%lf", &b);
    puts("___________________|_______a * b_______|_______a + b_______|_______a - b_______|");
    printf("| %16s | %17.2f | %17.2f | %17.2f |\n", "Результаты:", a * b, a + b, a - b);
    puts("--------------------------------------------------------------------------------");
    return 0;
}

double calculate_density(int population, double area)
{
    double result;
    result = population / area;


    return result;
}
