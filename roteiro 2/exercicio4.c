#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em C que lê um número inteiro, calcula e exibe
na tela os valores correspondentes a 3%, 30% e 130% do valor informado.*/

int numeroLido;
float calculo1;
float calculo2;
float calculo3;

int main(){
    printf("Digite o numero desejado:\n");
    scanf("%d", &numeroLido);

    calculo1 = numeroLido * 0.03;
    calculo2 = numeroLido * 0.3;
    calculo3 = numeroLido * 1.3;

    printf("3 por cento do valor informado: %.2f\n", calculo1);
    printf("30 por cento do valor informado: %.2f\n", calculo2);
    printf("130 por cento do valor informado: %.2f\n", calculo3);
    getch();
    return 0;
}
