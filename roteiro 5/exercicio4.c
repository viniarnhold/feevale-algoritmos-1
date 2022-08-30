#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Faça um programa que preencha um vetor de 10 números
reais. Em seguida, calcule e mostre na tela a quantidade
de números negativos e a soma dos números positivos desse vetor.
*/

float numeros[10];
float somaPositivos;
int qtdNegativos;

int main(){
    for(int i = 0; i < 10; i++){
        printf("Digite o numero da posicao %d: ", i);
        scanf("%f", &numeros[i]);
    }
    somaPositivos = 0;
    for(int i = 0; i < 10; i++){
        if(numeros[i] < 0){
            qtdNegativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", qtdNegativos);
    printf("Soma dos numeros positivos: %.2f", somaPositivos);

    getch();
    return 0;
}
