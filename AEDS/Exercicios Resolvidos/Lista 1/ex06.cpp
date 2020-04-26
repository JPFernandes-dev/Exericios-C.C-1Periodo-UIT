#include<stdlib.h>
#include<stdio.h>

int main () {
    int num, cont = 0;

    printf("Digite um numero: ");
    scanf("%i", &num);

    cont = num;

    while (cont != 0) {
        if (num % cont == 0){
            printf("\n%i e divisor de %i", cont, num);
        }

        cont--;
    }

    system("pause");
    return 0;
}