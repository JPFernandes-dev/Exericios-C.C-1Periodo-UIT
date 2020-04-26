/*
    Faça um programa para receber 10 numeros reais, ao final divida todos os valores pelo menor numero informado
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    float num[10], menor, resultado[10];
    int i;

    //Recebe os 10 valores
    for(i=0;i<10;i++){
        printf("Digite o %io numero: ", i+1);
        scanf("%f", &num[i]);

        // Insere o menor valor
        if(i == 0){
            menor = num[0];
        }

        // Verifica qual o menor valor do vetor
        if( num[i] < menor){
            menor = num[i];
        }
    }

    // Divide e mostra os valores
    for(i=0;i<10;i++){
        printf("\n%.2f dividido por %.2f = %.2f \t", num[i], menor, num[i]/menor);
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}