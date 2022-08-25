#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Uma escola de idiomas tem como critério de aprovação em um módulo que a
média do aluno seja maior ou igual a 7,0 e que seu número de faltas não ultrapasse
a 25% das aulas. A média é calculada a partir da média aritmética das duas melhores
notas de três notas recebidas durante o módulo. Assim, faça um programa em C que
calcule e exiba a porcentagem de alunos:-aprovados,-reprovados por nota,-reprovados
por falta, a partir da leitura dos seguintes dados: quantidade de alunos no módulo,
quantidade de aulas do módulo, as três notas de cada aluno, a quantidade de faltas
de cada aluno. Lembre-se de garantir que os dados lidos estejam adequados ao problema.*/

float nota1, nota2, nota3;
float maiorNota1, maiorNota2, media;
float falta;
float porcAprov, porcReprovNota, porcReprovFalta;
float qtdFaltas;
float qtdAulas;
float qtdAlunos;
float qtdAprovados;
float qtdReprovadosNota;
float qtdReprovadosFalta;

int main() {
    qtdAprovados = 0;
    qtdReprovadosNota = 0;
    qtdReprovadosFalta = 0;

    printf("Digite a quantidade de alunos no modulo:\n");
    scanf("%f", &qtdAlunos);
    while (qtdAlunos <= 0) {
        printf("Numero invalido:\n");
        printf("Digite a quantidade de alunos no modulo:\n");
        scanf("%f", &qtdAlunos);
    }
    printf("Digite a quantidade de aulas no modulo:\n");
    scanf("%f", &qtdAulas);
    while (qtdAulas <= 0) {
        printf("Numero invalido:\n");
        printf("Digite a quantidade de aulas no modulo:\n");
        scanf("%f", &qtdAulas);
    }

    for (int i = 1; i <= qtdAlunos; i++) {
        printf("----------------DADOS ALUNO %d-------------------\n", i);
        printf("Digite a primeira nota do aluno %d: ", i);
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno %d: ", i);
        scanf("%f", &nota2);
        printf("Digite a terceira nota do aluno %d: ", i);
        scanf("%f", &nota3);
        printf("Digite a quantidade de faltas do aluno %d: ", i);
        scanf("%f", &qtdFaltas);

        if (nota1 >= nota2 || nota1 >= nota3) {
            maiorNota1 = nota1;
            if (nota2 >= nota3){
                maiorNota2 = nota2;
            } else {
                maiorNota2 = nota3;
            }
        } else if (nota2 >= nota1 || nota2 >= nota3) {
            maiorNota1 = nota2;
            if (nota1 >= nota3) {
                maiorNota2 = nota1;
            } else {
                maiorNota2 = nota3;
            }
        } else if (nota3 >= nota2 || nota1 >= nota1) {
            maiorNota1 = nota3;
            if (nota1 >= nota2) {
                maiorNota2 = nota1;
            } else {
                maiorNota2 = nota2;
            }
        }
        media = (maiorNota1 + maiorNota2)/2;
        falta = qtdFaltas / qtdAulas;

        if(media >= 7 && falta <= 0.25){
            qtdAprovados++;
        } else if(falta <= 0.25){
            qtdReprovadosNota++;
        } else {
            qtdReprovadosFalta++;
        }
    }

    porcAprov = (qtdAprovados/qtdAlunos)*100;
    porcReprovNota = (qtdReprovadosNota/qtdAlunos)*100;
    porcReprovFalta = (qtdReprovadosFalta/qtdAlunos)*100;

    printf("-----------------DADOS TURMA--------------------\n");
    printf("Aprovados: %.2f%%\n", porcAprov);
    printf("Reprovados por nota: %.2f%%\n", porcReprovNota);
    printf("Reprovados por falta: %.2f%%\n", porcReprovFalta);

    getch();
    return 0;
}
