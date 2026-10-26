#include <stdio.h>
#include <locale.h>
#include <math.h>  


void task1()
{
    int years;

    printf("Впишите год: ");
    scanf_s("%d", &years);

    if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
    {
        printf("Год %d високосный\n",years);
    }
    else
    {
        printf("Год %d не високосный\n", years);
    }
}

void task2() {
    double x;

    printf("Введите x\n");
    scanf("%lf", &x);

    printf("F(%.2f) = %.2f\n", x, (x <= 3) ? (-x * x + 3 * x + 9) : (x / (x * x + 1)));
}


void homework() 
{
    int num;

    printf("Введите трехзначное число: ");
    scanf("%d", &num);

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    int sovp = 0;

    if (units == tens) 
    {
    printf("число единиц и десятков равно\n");
    sovp++;
    }

    if (units == hundreds) 
    {
    printf("число единиц и сотен равно\n");
    sovp++;
    }

    if (tens == hundreds) 
    {
    printf("число десятков и сотен равно\n");
    sovp++;
    }

    if (sovp == 0) 
    {
    printf("Нет совпадающих разрядов.\n");
    }
}

void main() {

    setlocale(LC_ALL, "ru_RU.UTF-8");

    task1();
    task2();
    homework();
}