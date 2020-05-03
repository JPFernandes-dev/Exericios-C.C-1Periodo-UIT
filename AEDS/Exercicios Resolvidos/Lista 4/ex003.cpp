/*
    Faça um programa para receber uma relação de 12 números. A seguir apresente os números em ordem decrescente
*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    int num[12], i, j, aux_dec;
    // Recebe os valores
    for(i=0;i<12;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
            if(num[i]<num[j]){
                aux_dec = num[i];
                num[i] = num[j];
                num[j] = aux_dec;
            }

        }
    } 

    for(i=0;i<12;i++){
        printf("\n%d", num[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}