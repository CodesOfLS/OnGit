#
# v0.2.1 di Luu
#  5 4 5
#
import sys

if len(sys.argv) > 1:
    tot = 0
    try:
        # Convertendo cada argumento para int.
        lista_nums_int = list(map(lambda x: int(x), sys.argv[1:]))
    except ValueError:
        print('Você informou inteiros inválidos.')
        sys.exit(1)
    else:
        print(sum(lista_nums_int))
        sys.exit(0)

cont = 0
numeros = list()
while True:
    # Atribuindo valores do usuário a lista de números.
    try:
        temp_num = int(input(f'Digite o valor do indice {cont} (-1 sair): '))
    except ValueError:
        print('Não é um número inteiro válido.')
        continue
    else:
        if temp_num == -1:
            break
        numeros.append(temp_num)
    
    cont += 1

# Exibindo resultado da soma da lista de números informados.
print(sum(numeros))
