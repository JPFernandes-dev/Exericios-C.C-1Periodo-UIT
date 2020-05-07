/*
    Faã um prograa em c para receber o nome de 5 funcionários e seu salário por um periodo de 5 meses. Ao final apresente o nome de funcionário e o salaário mensal e o valor total de cada um nesse periodo
*/

#include<stdlib.h>
#include<stdio.h>

int main (){
    float salarios[5][5], total[5];
    char nome[5][200];
    int i, j;

    for(i=0;i<5;i++){
        printf("Digite o nome do %do funcionario: ", i+1);
        fflush(stdin);
        gets(nome[i]);
        fflush(stdin);
        for(j=0;j<5;j++){
            printf("Digite o %d salario desse funcionario: ", j+1);
            scanf("%f", &salarios[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        total[i]=0;
        printf("Salarios mensais do %s", nome[i]);
        for(j=0;j<5;j++){
            printf("\n  %do mes: R$%.2f", j+1, salarios[i][j]);
            total[i] += salarios[i][j];
        }
        printf("\n  Total: R$%.2f", total[i]);
        printf("\n\n");
    }

    printf("\n\n");
    system("pause");
    return 0;
}