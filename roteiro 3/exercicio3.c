#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em C que leia 3 números inteiros diferentes,
e depois apresente a soma, o produto, o menor e o maior desses números.

*/

int numero1;
int numero2;
int numero3;

int main(){
    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &numero3);

    printf("Soma: %d\n", numero1 + numero2 + numero3);
    printf("Produto: %d\n", numero1 * numero2 * numero3);

    //Maior numero
    if(numero1 > numero2 && numero1 > numero3){
        printf("Maior numero: %d - Primeiro numero\n", numero1);
    }
    if(numero2 > numero1 && numero2 > numero3){
        printf("Maior numero: %d - Segundo numero\n", numero2);
    }
    if(numero3 > numero1 && numero3 > numero2){
        printf("Maior numero: %d - Terceiro numero\n", numero3);
    }

    //Menor numero
    if(numero1 < numero2 && numero1 < numero3){
        printf("Menor numero: %d - Primeiro numero\n", numero1);
    }
    if(numero2 < numero1 && numero2 < numero3){
        printf("Menor numero: %d - Segundo numero\n", numero2);
    }
    if(numero3 < numero1 && numero3 < numero2){
        printf("Menor numero: %d - Terceiro numero\n", numero3);
    }
    getch();
    return 0;
}
