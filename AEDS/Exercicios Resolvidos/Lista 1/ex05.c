#include<stdio.h>
#include<stdlib.h>

int main () {
    int num, cont, par=0, impar=0, positivo=0, negativo = 0;

    for (cont=0;cont<5;cont++){
        printf("Digite um numero: ");
        scanf("%i", &num);

        if(num%2 == 0) {
            par++;
        }
        else {
            impar++;
        }

        if (num>0) {
            positivo++;
        }
        else{
            negativo++;
        }      
    }

    printf("Total:\n %i Pares\n %i Impares\n %i Positivos\n %i Negativos", par, impar, positivo, negativo);

    system("pause");
    return 0;
}