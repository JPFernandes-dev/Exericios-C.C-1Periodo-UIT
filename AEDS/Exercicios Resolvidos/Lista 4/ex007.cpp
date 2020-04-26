/*
    Faça um programa para receber uma relação de 10 números inteiros. Ao final multiplique cada um dos valores pelo maior número do vetor e apresente o resultado
*/

#include<stdlib.h>
#include<stdio.h>

main () {
    int num[10], maior=0, i;
    // Recebe e verica o maior valor
    for(i=0;i<10;i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &num[i]);

        if(num[i]>maior){
            maior = num[i];
        }
    }

    printf("\n");
    // Multiplica os valores pelo menor encontrado
    for(i=0;i<10;i++){
        printf("%d x %d = %d\n", num[i], maior, num[i]*maior);
    }

    system("pause>null");
}