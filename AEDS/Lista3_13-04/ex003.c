/*
 * Faça um programa em C para implementar o que se pede. Uma empresa A produz 1000 carros
 * mensais e aumenta sua produção 2% ao mês, enquanto a empresa B 700 carros mensais e  
 * cresce 7% ao mês, em quantos meses a empresa B terá produção superior à empresa A
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    int empresaA = 1000, empresaB = 700, mes = 0;

    while(empresaA>empresaB) { //enquanto a empresaA for menor que a empresaB faça:
        empresaA = empresaA * 1.2;  // aumento de 2% ao mês, ou seja 102/100 
        empresaB = empresaB * 1.7;  // aumento de 7% ao mês, ou seja 107/100
        mes++; //soma dos meses
    }

    printf("Em %i meses empresa B sera maior que a empresa A \n\n\n", mes);

    system("pause");
    return 0;
}
