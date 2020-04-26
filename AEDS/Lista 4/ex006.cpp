/*
    Faça um programa para receber a produção e o nome de 50 produtos. Logo após liste o nome dos produtos que tiveram produção inferior a media. 
*/

#include<stdlib.h>
#include<stdio.h>

main() {
    int producao[50], i;
    char nome_prod[50][20];
    float media = 0;
    // Recebe os nomes e produções
    for(i=0;i<50;i++){
        
        printf("Digite o nome do %do produto: ", i+1);
        fflush(stdin);
        gets(nome_prod[i]);
        fflush(stdin);

        printf("Digite a producao desse produto: ");
        scanf("%d", &producao[i]);
        // Soma a média
        media += producao[i];
        
        printf("\n");
    }
    // Divide a media
    media /= 50;
    // Verifica quais produções estão abaixo da media
    for(i=0;i<50;i++){
        if(producao[i]<media){
            printf("\nProduto: %s, teve producao inferior a media", nome_prod[i]);
        }
    }


    system("pause>all");
}