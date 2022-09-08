/*Crie uma matriz de dimensões 3x3 a partir de números
inteiros positivos lidos pelo usuário. Seu programa deve
controlar que essa leitura para aceitar apenas valores
válidos. Em seguida, exiba os elementos da diagonal principal
e os elementos da diagonal secundária.*/

#include <stdio.h>

int main(){

    int matriz[3][3], j;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            while(matriz[i][j] < 0){
                printf("Valor invalido.\nDigite o valor da linha %d e coluna %d: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }
    printf("Diagonal principal: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\nDiagonal secundaria: ");
    j = 2;
    for(int i = 0; i < 3 ; i++){
        printf("%d ", matriz[i][j-i]);
    }


    getch();
    return 0;
}
