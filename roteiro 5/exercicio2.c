#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Escreva um programa que leia do teclado um vetor de 10 posições.
Escreva na telaquantos valores pares foram armazenados nesse vetor.*/

int numeros[10];
int qtdPares;

int main(){
    for(int i = 0; i < 10; i++){
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }
    for(int i = 0; i < 10; i++){
        if(numeros[i] % 2 == 0){
            qtdPares++;
        }
    }

    printf("Quantidade de numeros pares digitados: %d", qtdPares);

    getch();
    return 0;
}

