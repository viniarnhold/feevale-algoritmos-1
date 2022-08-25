#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Proponha um programa em C que leia um número inteiro positivo
ne em seguida exiba n linhas do chamado Triângulo de Floyd,
conforme exemplificado abaixo:
n = 3
1
23
456*/

int n, m;

int main(){
    printf("Digite a quantidade de linhas:\n");
    scanf("%d", &n);
    while(n <= 0){
      printf("Numero invalido:\n");
      printf("Digite a quantidade de linhas:\n");
      scanf("%d", &n);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            m++;
            printf("%d ", m);
        }
        printf("\n");
    }

    getch();
    return 0;
}
