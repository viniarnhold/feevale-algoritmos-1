/*Faça um programa em C que leia dois vetores, denominados A e B, de 5 elementos cada um, respeitando as seguintes regras:

- Vetor A deve conter apenas valores pares;
- Vetor B deve conter apenas valores ímpares.

A partir dos dois vetores, crie uma matriz que:

a) Na primeira linha armazene o vetor A
b) Na segunda linha armazene o vetor B
c) Na terceira linha, contenha para cada coluna a soma dos elementos da primeira e da segunda linha correspondentes à mesma coluna.

Por fim, exiba a matriz resultante organizada em linhas e colunas.*/


#include <stdio.h>

int main(){

    int vetora[5], vetorb[5];
    int matriz[3][5];

    for(int i = 0; i < 5; i++){
        printf("Digite um numero par para a posicao %d do vetor A: ", i);
        scanf("%d", &vetora[i]);
        while(vetora[i] % 2 != 0){
            printf("Valor invalido.\nDigite um numero par para a posicao %d do vetor A: ", i);
            scanf("%d", &vetora[i]);
        }
    }
    for(int i = 0; i < 5; i++){
        printf("Digite um numero impar para a posicao %d do vetor B: ", i);
        scanf("%d", &vetorb[i]);
        while(vetorb[i] % 2 == 0){
            printf("Valor invalido.\nDigite um numero impar para a posicao %d do vetor B: ", i);
            scanf("%d", &vetorb[i]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(i == 0){
                matriz[i][j] = vetora[j];
            }
            if(i == 1){
                matriz[i][j] = vetorb[j];
            }
            if(i == 2){
                matriz[i][j] = vetora[j] + vetorb[j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
