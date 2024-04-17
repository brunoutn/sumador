#include <stdio.h>

int main() 
{
    int num1, num2, num3, suma;

    printf("Ingrese un valor: ");
    scanf("%d", &num1);
    printf("Ingrese otro valor: ");
    scanf("%d", &num2);
    printf("Ingrese otro valor: ");
    scanf("%d", &num3);

    suma = num1 + num2 + num3;

    printf("%d + %d + %d = %d", num1, num2, num3, suma);

    return 0;
}