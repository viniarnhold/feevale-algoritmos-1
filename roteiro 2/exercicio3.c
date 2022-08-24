#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em C que peça ao usuário que digite 2 números,
obtenha esses números e exiba a soma, o produto e a diferença.*/

int numeroLido1;
int numeroLido2;
int soma;
int produto;
int diferenca;

int main(){
    printf("Digite o primeiro numero:\n");
    scanf("%d", &numeroLido1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &numeroLido2);

    soma = numeroLido1 + numeroLido2;
    produto = numeroLido1 * numeroLido2;
    diferenca = numeroLido1 - numeroLido2;

    printf("Soma dos numeros: %d\n", soma);
    printf("Produto dos numeros: %d\n", produto);
    printf("Diferenca dos numeros: %d\n", diferenca);
    getch();
    return 0;
}
