#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Proponha um programa em C que lê uma variável n,
inteira e maior que zero, que representa o número
de linhas da figura que segue o padrão a seguir:*/

int n;

int main(){
    printf("Digite a quantidade de linhas:\n");
    scanf("%d", &n);
    while(n <= 0){
      printf("Número inválido:\n");
      printf("Digite a quantidade de linhas:\n");
      scanf("%d", &n);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i;j ++){
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}
