/**/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5], b[5], i;

    for(i=0;i<5;i++){
        printf("Digite o %do valor do vetor a: ", i+1);
        scanf("%d", &a[i]);

        printf("Digite o %do valor do vetor b: ", i+1);
        scanf("%d", &b[i]);

        printf("\n");
    }

    printf("Elementos que são comuns aos dois vetores: ");
    for(i=0;i<5;i++){
        if(a[i] == b[i]){
            printf("%d  ", a[i]);
        }
    }


    printf("\n\n");
    system("pause");
    return 0;
}