// faça um programa para verificarse um número informado pelo usuário é primo.

#include<stdlib.h>
#include<stdio.h>

int main (){
    int num, i, total = 0;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for (i=1;i<=num;i++){
        if (num%i == 0){
            total++;
        }
    }

    if (total == 2) {
        printf("%i numero primo", num);
    }

    else {
        printf("%i NAO e numero primo", num);
    }   

    system("pause");
    return 0;
}