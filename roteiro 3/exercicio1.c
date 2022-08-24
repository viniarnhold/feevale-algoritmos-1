#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Proponha um algoritmo em C que peça ao usuário que digite 2 números,
obtenha esses dois valores, calcule e exiba: a soma, o produto, a diferença e a divisão.*/

int operacaoEscolhida;
float numero1;
float numero2;
float soma;
float produto;
float diferenca;
float divisao;

int main(){
    printf("Digite o primeiro numero:\n");
    scanf("%f", &numero1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &numero2);
    printf("Digite a operacao desejada:\n");
    printf("1 - SOMA\n2 - MULTIPLICACAO\n3 - DIFERENCA\n4 - DIVISAO\n");
    scanf("%d", &operacaoEscolhida);

    switch(operacaoEscolhida){
    case 1:
        printf("Soma: %.2f\n", numero1 + numero2);
        break;
    case 2:
        printf("Produto: %.2f\n", numero1 * numero2);
        break;
    case 3:
        printf("Diferenca: %.2f\n", numero1 - numero2);
        break;
    case 4:
        if(numero2 == 0){
            printf("Impossivel dividir por zero");
        } else{
            printf("Divisao: %.2f\n", numero1 / numero2);
        }
        break;
    default:
        printf("Operacao invalida!");
    }
    getch();
    return 0;
}
