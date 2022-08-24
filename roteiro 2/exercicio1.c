#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em C que leia um número e exiba na tela: o número lido, seu antecessor
e seu sucessor. Use mensagens que deixe claro para o usuário o que está sendo exibido.*/

int numeroLido;
int antecessor;
int sucessor;

int main(){
    printf("Digite o numero desejado:\n");
    scanf("%d", &numeroLido);
    antecessor = numeroLido - 1;
    sucessor = numeroLido + 1;

    printf("O numero lido foi %d\n", numeroLido);
    printf("O numero antecessor: %d\n", antecessor);
    printf("O numero sucessor: %d\n", sucessor);
    getch();
    return 0;
}
