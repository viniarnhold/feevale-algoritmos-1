#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em C que leia um número e imprima o seu quadrado no formato “Quadrado: valor”.*/

float numeroLido;
float quadrado;

int main(){
    printf("Digite um numero:\n");
    scanf("%f", &numeroLido);
    quadrado = numeroLido * numeroLido;

    printf("Quadrado: %.2f\n", quadrado);
    getch();
    return 0;
}
