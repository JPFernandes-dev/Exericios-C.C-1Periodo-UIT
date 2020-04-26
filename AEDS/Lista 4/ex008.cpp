/*
    Faça um programa para receber um vetor A(25) “inteiros”, os números devem ser digitados por um usuário. A seguir, substitua todos os valores negativos de ‘A’ por zero. Ao final apresente todos os valores informados.
*/

#include<stdlib.h>
#include<stdio.h>

main () {
    int a[25], i;
    // Recebe e verifica se o valor e menor que 0
    for(i=0;i<25;i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &a[i]);
        // Veifica e faz as substituições
        if(a[i]<0){
            a[i]=0;
        }
    }
    // Mostra os valores.
    for(i=0;i<25;i++){
        printf("%do: %d\n", i+1, a[i]);
    }

    system("pause>null");
}