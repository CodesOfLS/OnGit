#include <stdio.h>

int sum(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
    
    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}