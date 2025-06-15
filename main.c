#include <stdio.h>
#include "teste.h"
#include "funcoes.h"


int main()
{
    printf("Soma de 2 e 2: %d\n", soma(2, 2));
    printf("Soma de 4 e 2: %d\n", subtrai(4, 2));
    printf("Resto da divisao de 4 por 2: %d\n", resto_divisao(4, 2));

    return 0;
}