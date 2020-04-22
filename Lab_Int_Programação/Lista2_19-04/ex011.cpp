/**/

#include<stdlib.h>
#include<stdio.h>

float IMC(float peso, float altura){
    altura = altura/100;
    float imc = peso/(altura * altura);
    
    return imc;
}

int main () {
    float altura, peso, imc;
    char resp;
    
    do{
        system("cls");

        printf("Digite seu peso em Kg: ");
        scanf("%f", &peso);

        printf("Digite sua altura em cm: ");
        scanf("%f", &altura);
        
        imc = IMC(peso, altura);
        printf("\n");

        if(imc <= 19){
            printf("Magresa, imc: %.2f", imc);
        }

        else if (imc <= 25){
            printf("Peso ideal, imc: %.2f", imc);
        }

        else if(imc <= 29){
            printf("Sobrepeso, imc: %.2f", imc);
        }

        else {
            printf("Obesidade, imc: %.2f", imc);
        }

        printf("\n\nDeseja continuar? [S/N]: ");
        scanf("%s", &resp);

    }while (resp == 'S' || resp == 's');

    printf("\n\n");
    system("pause");
    return 0;
}