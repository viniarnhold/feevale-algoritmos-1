#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Proponha um programa em C que l� uma vari�vel n,
inteira e maior que zero, que representa o n�mero
de linhas da figura que segue o padr�o a seguir:*/

int n;

int main(){
    printf("Digite a quantidade de linhas:\n");
    scanf("%d", &n);
    while(n <= 0){
      printf("Numero invalido:\n");
      printf("Digite a quantidade de linhas:\n");
      scanf("%d", &n);
    }
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}
