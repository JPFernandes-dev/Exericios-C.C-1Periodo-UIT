/*
    Receba números digitados pelo usuários e armazene em um vetor de tamanho 10. Caso ele digite um número negativo, peça para digitar novamente. Ao final diga a quantidade de números pares e a quantidade de números ímpares.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int num[10], i;

   for(i=0;i<10;i++){
       do{
           printf("Digite o %do numero: ",i+1);
           scanf("%d", &num[i]);
       }while(num[i] < 0);
   }

   for(i=0;i<10;i++){
       if(num[i]%2==0){
           printf("\nNumero %d e par.", num[i]);
       }
       else{
           printf("\nNumero %d e impar.", num[i]);
       }
   }

   printf("\n\n");
   system("pause");
   return 0;   
}