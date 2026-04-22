#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int num1, num2, suma, resta;

    p("Ingrese un valor: ");
    s("%d", &num1);
    p("Ingrese otro valor: ");
    s("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;

    p("Suma: %d + %d = %d", num1, num2, suma);
    p("\nResta: %d - %d = %d", num1, num2, resta);

    return 0;
}