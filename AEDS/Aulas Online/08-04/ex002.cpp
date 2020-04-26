/* Questão:
 * Faça um programa para receber uma relação de 100 números informados pelo usuário.
 * Após informar os 100 liste os vaores informados
 */

#include<stdio.h>
#include<stdlib.h>

int main () {
    int num[10], i;

    for (i=0;i<10;i++) {
        printf("Digite um valore: ");
        scanf("%i", &num[i]);
    }
    for (i=0;i<10;i++){
        printf(" Numero: %i \n", num[i]);
    }

    system("pause");
    return 0;
}