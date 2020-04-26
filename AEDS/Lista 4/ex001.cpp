/*
    Elaborar um programa em C para receber e armazenar 50 números reais em um vetor. Identificar e imprimir o maior e o menor número e as respectivas posições no vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int num[50], maior = 0, i;
    // Recebe e verifica qual maior valor
    for(i=0;i<50;i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &num[i]);

        if(num[i]>maior){
            maior = num[i];
        }
    }

    printf("\nO maior numero \202: %d", maior);

    printf("\n\n");
    system("pause");
    return 0;
}