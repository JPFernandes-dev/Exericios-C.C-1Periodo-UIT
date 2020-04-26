/*
    Elaborar um programa para ler a nota de 18 alunos de uma disciplina e armazenar em um vetor. Calcular e imprimir a média e o número de alunos que tiveram nota superior à média. Em todas as etapas do problema utilizar uma estrutura em laço para facilitar as tarefas
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    float num[18], media;
    int i, al_media;
    // Recebe e soma os valores
    for(i=0;i<18;i++){
        printf("Digite a nota do %do aluno: ", i+1);
        scanf("%f", &num[i]);

        media += num[i];
    }
    // Divide a média
    media /= 18;
    // Verifica quem foi acima da média
    for(i=0;i<18;i++){
        if(num[i] > media){
           al_media++;
        }
    }

    printf("\nA media foi: %.2f e %d alunos foram acima da media", media, al_media);

    printf("\n\n");
    system("pause");
    return 0;
}
