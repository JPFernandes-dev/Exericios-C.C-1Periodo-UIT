/*
    Faça um programa para que o usuário possa digitar o nome e o custo de 10 produtos diferentes. Determine o nome do item mais caro, e o nome do item mais barato.
*/

#include<stdlib.h>
#include<stdio.h>

int main() {
    char produto[10][20];
    float valor[10], menor = 10000, maior = 0;
    int i, loc_menor, loc_maior;
    // Recebe o nome e o valor dos 10 produtos
    for(i=0;i<10;i++){
        printf("Digite o nome do %d produto: ", i+1);
        fflush(stdin);
        gets(produto[i]);
        fflush(stdin);

        printf("Digite o valor desse produto: ");
        scanf("%f", &valor[i]);
        // Verifica qual maior e qual menor
        if(valor[i] > maior){
            maior = valor[i];
            loc_maior = i;
        }

        if(valor[i] < menor){
            menor = valor[i];
            loc_menor = i;
        }

        printf("\n");
    }
    // Imprime o menor e maior valor encontrado
    printf("\nO item mais caro \202: %s, custando R$%.2f\nE o item mais barato \202: %s, custando R$%.2f", produto[loc_maior], maior, produto[loc_menor], menor);

    printf("\n\n");
    system("pause");
    return 0;
}