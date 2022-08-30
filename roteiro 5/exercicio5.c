#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Faça um programa que receba do usuário dois arrays,
A e B, com 10 números inteiros cada. Crie um novo array
C, correspondente a A – B, mostre na tela os dados do array C.*/

int a[10], b[10], c[10];

int main(){
    for(int i = 0; i < 10; i++){
        printf("Array A. Digite o numero da posicao %d: ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Array B. Digite o numero da posicao %d: ", i);
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < 10; i++){
        c[i] = a[i] - b[i];
    }
    printf("------ VALORES ARRAY C ------\n");
    for(int i = 0; i < 10; i++){
        printf("Posicao %d: %d\n", i, c[i]);
    }

    getch();
    return 0;
}
