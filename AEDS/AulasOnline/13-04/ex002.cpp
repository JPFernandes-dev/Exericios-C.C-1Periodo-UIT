/*
    Faça umprograma para receber dois vetores de 10 valores e efetuar a soma de seus elementos.
*/


#include<stdlib.h>
#include<stdio.h>

int main () {
    int vetorA[10], vetorB[10], i=0;

    //Recebe vetor A.
    for(i=0;i<10;i++) {
        printf("Digite %io do vetor A: ", i+1);
        scanf("%i", &vetorA[i]);
    }

    //Recebe Vetor B.
    printf("\n");
    
    for(i=0;i<10;i++) {
        printf("Digite %io do vetor B: ", i+1);
        scanf("%i", &vetorB[i]);
    }

    // Soma o vetor A com o B.
    for(i=0;i<10;i++) {
        printf("\n%i + %i = %i", vetorA[i], vetorB[i], vetorA[i]+vetorB[i]);
    }


    printf("\n\n");
    system("pause");
    return 0;
}