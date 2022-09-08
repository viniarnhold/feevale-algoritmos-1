/*Desenvolva um programa em C em que o usuário informa 12
números inteiros, os quais devem ser armazenados em uma matriz.
Com os dados armazenados em memória, seu programa deve exibir a
matriz, e o menor elemento de cada linha, e o maior elemento de cada coluna.*/


#include <stdio.h>

int main(){

    int matriz[4][3], menorNumLn, maiorNumClmn;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            while(matriz[i][j] < 0){
                printf("Valor invalido.\nDigite o valor da linha %d e coluna %d: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }
    for(int i = 0; i < 4; i++){
        menorNumLn = matriz[i][0];
        for(int j = 0; j < 3; j++){
            if(menorNumLn > matriz[i][j]){
                menorNumLn = matriz[i][j];
            }
        }
        printf("Menor numero da linha %d: %d\n", i, menorNumLn);
    }
    for(int j = 0; j < 3; j++){
        maiorNumClmn = matriz[0][j];
        for(int i = 0; i < 4; i++){
            if(matriz[i][j] > maiorNumClmn){
                maiorNumClmn = matriz[i][j];
            }
        }
        printf("Maior numero da coluna %d: %d\n", j, maiorNumClmn);
    }

    getch();
    return 0;
}
