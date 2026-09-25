// Лабораторна робота номер 2 частина 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
//---- Оголошуються змінні -----
    double x, y;
//---- Виведення данних --------
    printf("Enter x:"); // Виводить підказку для користувача
    scanf("%lf", &x); // Зчитує введено число та зберігає його у змінну x
    if( x>= 0 && x < 1)
    y = 1.0 / (1.0 + cos(x));
    else if ( x >= 1 && x < 2 )
    y = exp(x+2);
    else if ( x >= 4 && x < 8 )
    y = pow(2,x)+2*x-4;
    else
    y = 0.0;
    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);
    return 0;

}
