/*
    Faça um prorama para receber o nome e a idade 
    de cinco pessoas. Ao final apresente o nome e a idade da pessoa mais experiente do grupo.
*/

#include <stdio.h>
#include <stdlib.h>


int main (){
    int idade[5], maior = -1, i, posi;
    char nome[5][100];


    for (i = 0; i<5; i++){
        printf("Digite o %i nome: ", i+1);
        fflush(stdin);
        gets(nome[i]);
        fflush(stdin);

        printf("Digite a %i idade: ", i+1);
        scanf("%d", &idade[i]);
        printf("\n");
        if (idade[i] > maior){
            maior = idade[i];
            posi = i;
        }
    }

    printf("\nO maior idade é: %s, com %d anos", nome[posi], maior);
    

    printf("\n\n");
    system("pause");
    return 0;
}

