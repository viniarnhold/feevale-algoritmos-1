#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em C que lê um número, calcula e exiba na tela
o seu quadrado, o seu dobro, o seu triplo e sua metade.*/

float numeroLido;
float quadrado;
float dobro;
float triplo;
float metade;

int main(){
    printf("Digite o numero desejado:\n");
    scanf("%f", &numeroLido);

    quadrado = numeroLido * numeroLido;
    dobro = numeroLido * 2;
    triplo = numeroLido * 3;
    metade = numeroLido / 2;

    printf("Quadrado: %.2f\n", quadrado);
    printf("Dobro: %.2f\n", dobro);
    printf("Triplo: %.2f\n", triplo);
    printf("Metade: %.2f\n", metade);
    getch();
    return 0;
}
