/**/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int matriz[4][4], i, j, soma[4];

    for(i=0;i<4;i++){
        soma[i] = 0;
        for(j=0;j<4;j++){
            printf("Digite a linha %d coluna %d: ", j+1, i+1);
            scanf("%d", &matriz[j][i]);

            soma[i] += matriz[j][i];
        }
        printf("\n");
    }

    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){
            printf(" %d ", matriz[i][j]);
        }
    }

    for(i=0;i<4;i++){
        printf("\nSoma total da coluna %d: %d", i+1, soma[i]);
    }


    printf("\n\n");
    system("pause");
    return 0;
}