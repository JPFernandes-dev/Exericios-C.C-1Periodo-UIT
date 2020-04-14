/*
    Faça um programa para receber 10 numeros e mostrar os numeros pares desse vetor.
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int num[10], i;

    for(i=0;i<10;i++){ // Recebe os números
        printf("Digite o %io numero: ", i+1);
        scanf("%i", &num[i]);
    }

    for(i=0;i<10;i++){ // Verifica os numeros pares
        if(num[i]%2 == 0){
            printf("\nNumero %i e par", num[i]);
        }
    }

    printf("\n\n");
    system("pause");
    return 0;
}