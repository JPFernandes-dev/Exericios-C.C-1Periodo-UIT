/*
    Faça um programa para receber 10 números inteiros em um vetor A e 10 números em um vetor B. Grave os dados digitados em um vetor C de 20 posições. Sendo as 10 primeiras posições valores do vetor a e os 10 últimos valores do vetor B. Ao final liste os dados do vetor C.
*/

#include<stdlib.h>
#include<stdio.h>

int main () {
    int vetorA[10], vetorB[10], vetorC[20], i;

    for (i=0;i<10;i++){  //Recebe os 10 valores do vetor A
        printf("Digite o %io numero do vetor A: ", i+1);
        scanf("%i", &vetorA[i]);
        vetorC[i]= vetorA[i]; //Grava cada vetorA[i] no vetor C
    }

    printf("\n");

    for (i=0;i<10;i++){ // Recebe os 10 valores do vetor B
        printf("Digite o %io numero do vetor B: ", i+1);
        scanf("%i", &vetorB[i]);
        vetorC[i+10] = vetorB[i]; // Grava cada vetorB[i] no C com + 10 casas para não substituir a do vetorA
    }

    printf("Vetor C:\n");
    for (i=0;i<20;i++){ //Mostra o vetor C
        printf("%io: %i\n", i+1, vetorC[i]);
    }

    system("pause");
    return 0;
}