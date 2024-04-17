#include <stdio.h>

int main() 
{
    int num1, num2, suma;

    printf("Ingrese un valor: ");
    scanf("%d", &num1);
    printf("Ingrese otro valor: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("%d + %d = %d", num1, num2, suma);

    return 0;
}