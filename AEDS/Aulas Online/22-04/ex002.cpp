/* 
    Faça um programa para receber um nome em um astring e em outra string o sobrenome
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
    char nome[50], sobrenome[100], espa[2] = " ", text;

    printf("DIgite seu nome: ");
    fflush(stdin);
    gets(nome);
    fflush(stdin);

    printf("Digite seu sobrenome: ");
    fflush(stdin);
    gets(sobrenome);    

    printf("\nNome completo: %s", strcat(nome, strcat(espa, sobrenome)));

    printf("\n\n");
    system("pause");
    return 0;
}
