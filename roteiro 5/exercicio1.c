#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Fa�a um programa que leia um vetor de oito posi��es.
Em seguida, leia tamb�m doisvalores X e Y quaisquer
correspondentes as duas posi��es no vetor. Seu programa
dever� exibir a soma dos valores encontrados nas respectivas posi��es X e Y.*/

int numeros[8];
int x, y;

int main(){
    for(int i = 0; i < 8; i++){
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }
    printf("Escolha a posicao do numero x a ser somado: ");
    scanf("%d", &x);
    while(x < 0 || x >= 8) {
        printf("Posicao invalida. Escolha a posicao do numero x a ser somado: ");
        scanf("%d", &x);
    }
    printf("Escolha a posicao do numero y a ser somado: ");
    scanf("%d", &y);
    while(y < 0 || y >= 8) {
        printf("Posicao invalida. Escolha a posicao do numero y a ser somado: ");
        scanf("%d", &y);
    }
    printf("O resultado da soma entre x e y e: %d", numeros[x] + numeros[y]);

    getch();
    return 0;
}
