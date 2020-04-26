/*
    Dado um vetor de 15 números inteiros, escreva um programa que imprima todos os múltiplos de 3 que estão contidos no vetor. 

*/

#include<stdlib.h>
#include<stdio.h>

int main() {
    int num[15], i;

    for(i=0;i<15;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }
    // Verifica os quais são os múltiplos de 3 e imprime.
    printf("\n");
    for(i=0;i<15;i++){
        if(num[i]%3==0){
            printf("%d \202 divisivel por 3\n", num[i]);
        }
    }

    printf("\n\n");
    system("pause");
    return 0;
}