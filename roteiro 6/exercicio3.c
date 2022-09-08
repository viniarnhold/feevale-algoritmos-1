/*Proponha um programa em C que lê uma matriz A, com 2 linhas e 2 colunas.
A matriz A deve aceitar apenas números positivos. O programa também deve
ter uma matriz B com as mesmas dimensões de A, por sua vez, inicializada
como valor 2 em todas as posições. A partir das duas matrizes, crie a matriz R,
correspondente ao resto da divisão inteira dos elementos correspondentes nas matrizes
A e B, e a exiba no formato de matriz.*/


#include <stdio.h>

int main(){

    int matza[2][2], matzb[2][2], matzr[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%d", &matza[i][j]);
            while(matza[i][j] < 0){
                printf("Valor invalido.\nDigite o valor da linha %d e coluna %d: ", i, j);
                scanf("%d", &matza[i][j]);
            }
        }
    }
    printf("\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matzb[i][j] = 2;
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matzr[i][j] = matza[i][j] / matzb[i][j];
            printf("%d ", matzr[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
