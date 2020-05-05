/*  
    Faça um programa para receber uma matriz 4x5. Ao final liste os números digitados e o total de cada linha
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int matriz[4][5], i, j, soma[4];

    for(i=0;i<4;i++){
        soma[i]=0;
        for(j=0;j<5;j++){
            printf("Digite o valor da %d linha %d coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            soma[i] += matriz[i][j];
        }
        printf("\n");
    }

    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<5;j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\tSomatorio linha %d: %d", i+1, soma[i]);
    }


/*
    printf("\n\nSomatorio de cada linha: ");
    for(i=0;i<4;i++){
        printf("\nLinha %d: %d",i+1, soma[i]);
    }
*/
    printf("\n\n");
    system("pause");
    return 0;
}

