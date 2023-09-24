/*
    v0.2.1 di Luu
     5 4 5
*/
#include <stdio.h>
#include <stdlib.h>

int sum(int array_nums[], int quant);

char main(int argc, char* argv[])
{
    int quant, i, res, temp_num;
    int tot = 0;

    if (argc > 1)
    {
        // Somando todos os valores passados como argumento.
        for (i = 1; i < argc; i++)
        {
            // Convertendo os valores de argv para int.
            temp_num = atoi(argv[i]);

            // Verificando se é um valor inteiro válido.
            if (temp_num == 0 && argv[i][0] != 0)
            {
                printf("Voce informou valores inteiros invalidos.");
                return 1;
            }

            tot += temp_num;
        }
        printf("%d", tot);

        return 0;
    }

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