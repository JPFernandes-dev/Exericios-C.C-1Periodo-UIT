#include <stdlib.h>
#include <stdio.h>


int main(void) {
    float num, soma;
    int cont = 0;

    while (cont != 25)
    {
        printf("Digite um numero: ");
        scanf("%f", &num);
        soma = soma +num;
        cont = cont + 1;
    }

    printf("Soma total: %f", soma);

    system("pause");
    return 0;
}
