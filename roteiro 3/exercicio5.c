#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*FECHAR
Elabore um algoritmo em C que, uma vez que o usuário informe a idade
de um atleta, o programa o classifique em uma das modalidades a seguir dos jogos da primavera:
Infantil A = 6 a 8 anos
Infantil B = 9 a 12 anos
Juvenil A = 13 a 14 anos
Juvenil B = 15 a 18 anos
Pessoas com menos de 6 anos ou maiores de 18 anos não podem participar da competição.*/

int idade;

int main(){
    printf("Insira a idade do atleta:\n");
    scanf("%d", &idade);

    if(idade < 6 || idade >= 18){
        printf("A idade do atleta nao o permite participar da competicao\n");
    }
    if(idade <= 8){
        printf("CATEGORIA: Infantil A\n");
    } else if(idade <= 12){
        printf("CATEGORIA: Infantil B\n");
    } else if(idade <= 14){
        printf("CATEGORIA: Juvenil A\n");
    } else if(idade < 18){
        printf("CATEGORIA: Juvenil B\n");
    }

    getch();
    return 0;
}
