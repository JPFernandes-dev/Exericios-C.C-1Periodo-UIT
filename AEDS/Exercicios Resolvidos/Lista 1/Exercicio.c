#include <stdlib.h>
#include <stdio.h>


int main(void) {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("Digite outro numero: ");
    scanf("%i", &num2);

    if (num2 > num1){
        printf("%i - %i = %i\n", num2, num1, num2-num1);
    } 
    else if (num1 > num2) {
        printf("%i - %i = %i\n", num1, num2, num1-num1);
    }
    else {
        printf("Numeros iguais\n");
    }

    printf("\n ");
    system("pause");
    return 0;
}