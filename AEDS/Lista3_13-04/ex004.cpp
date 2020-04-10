/*
    Faça um programa para receber 10 números inteiros. Ao final, multiplique todos os valores pelo 3 valor informado no vetor e apresente o resultado.
 */

#include<stdio.h>
#include<stdlib.h>

int main (){
    int num[10], i;

    for (i=0;i<10;i++) { //Laço para receber os 10 numeros
        printf("Digite o %io numero: ", i+1); 
        scanf("%i", &num[i]);
    }

    for(i=0;i<10;i++){  //Laço para mostrar a multiplicação
        printf("%i x %i = %i\n", num[i], num[2], num[i]*num[2]); //multiplicação dos numeros no vetor pelo 3º numero.
    }

    system("pause");
    return 0;
}