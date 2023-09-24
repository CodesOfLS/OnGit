/*
    v0.0.4 di Luu
     5 4 5
*/
#include <stdio.h>

int sum(int array_nums[], int quant);

int main()
{
    int quant, i, res;

    printf("Quantidade de numeros a serem somados: ");
    scanf("%d", &quant);

    // Criando array com a quantidade de números especificada pelo usuário.
    int numeros[quant];

    // Atribuindo números a cada posição do array.
    for (i = 0; i < quant; i++)
    {
        printf("Digite o valor do indice %d: ", i);
        scanf("%d", &numeros[i]);
    }

    res = sum(numeros, quant);

    printf("A soma de todos os valores e: %d\n", res);
    
    return 0;
}

int sum(int array_nums[], int quant)
{
    int i;
    int tot = 0;

    // Somando todos os valores do array.
    for (i = 0; i < quant; i++)
    {
        tot += array_nums[i];
    }

    return tot;
}