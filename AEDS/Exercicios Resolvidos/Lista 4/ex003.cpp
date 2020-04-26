/*
    Faça um programa para receber uma relação de 12 números. A seguir apresente os números em ordem decrescente
*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    int num[12], i;
    // Recebe os valores
    for(i=0;i<12;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }
    // Mostra o vetor em um laço invertido
    for(i=12;i>0;i--){
        printf("%do: %d\n", i, num[i-1]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}