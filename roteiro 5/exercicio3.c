#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Faça um programa que receba do usuário um vetor X de 10 posições.
Em seguida deverão ser impressos o maior e o menor elemento desse vetor.*/

int x[10];
int maiorNum, menorNum;

int main(){
    for(int i = 0; i < 10; i++){
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &x[i]);
    }
    for(int i = 0; i < 10; i++){
        menorNum = x[0];
        if(x[i] < menorNum){
            menorNum = x[i];
        }
    }
    for(int i = 0; i < 10; i++){
        maiorNum = x[0];
        if(x[i] > menorNum){
            maiorNum = x[i];
        }
    }

    printf("Maior numero: %d\n", maiorNum);
    printf("Menor numero: %d", menorNum);

    getch();
    return 0;
}


