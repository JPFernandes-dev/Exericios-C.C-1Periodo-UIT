/**/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main () {
    char sexo;
    float altura, peso;

    tolower(printf("Digite seu sexo: [f/m]"));
    scanf("%c", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if(sexo == 'f'){
        printf("Peso ideal: %.2f", 62.1*altura-44.7);
    }

    else{
        printf("Peso ideal: %.2f", 72.7*altura-58);
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}

