#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Proponha um algoritmo em C para calcular a nota de um
candidato em um concurso. Para isso, você deve ler as três
notas do candidato entre 0 e 10. Em seguida, calcule a nota
final dele no concurso, a qual corresponde à média ponderada,
considerando que a primeira nota tem peso 2, a segunda tem peso
3 e a terceira tem peso 5. Exibir uma mensagem dizendo qual a
média do aluno e se ele foi aprovado ou reprovado. A média para aprovação é 7.*/

float nota1;
float nota2;
float nota3;
float media;

int main(){
    printf("Insira a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Insira a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Insira a terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5)/10;

    printf("Media %.2f\n", media);
    if(media >= 7){
        printf("Aluno aprovado!");
    } else {
        printf("Aluno reprovado!");
    }

    getch();
    return 0;
}
