#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    printf("A soma de %d com %d e %d\n", num1, num2, num1 + num2);
    
    return 0;
}