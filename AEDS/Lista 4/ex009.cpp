/*
    Faça um programa para o usuário digitar uma matriz A(5,5). Logo após, apresente o menor valor localizado acima da diagonal principal.
*/

#include<stdio.h>
#include<stdlib.h>

main () {
    int a[5][5], i, j, menor=1000;
    // Recebe os valores
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite o valor da %da linha e %da coluna: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
        // Verifica o menor na diagonal principal, que sempre sera [0][0], [1][1], assim por diante
        if(a[i][i]<menor){
            menor = a[i][i];
        }
    }

    printf("\n\nO menor valor da diagonal principal \202: %d", menor);

    system("pause>null");
}