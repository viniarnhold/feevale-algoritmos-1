#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em C que a partir de 2 inteiros informados pelo usuário,
identifique qual o maior valor entre eles e o exibe seguido das palavras “valor maior“.
Caso os números sejam iguais, exiba a mensagem “valores iguais”*/

int numero1;
int numero2;

int main(){
    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);

    if(numero1 == numero2){
        printf("Valores iguais!");
    } else {
        if(numero1 > numero2){
            printf("Maior valor: %d - Primeiro numero", numero1);
        } else{
            printf("Maior valor: %d - Segundo numero", numero2);
        }
    }
    getch();
    return 0;
}
