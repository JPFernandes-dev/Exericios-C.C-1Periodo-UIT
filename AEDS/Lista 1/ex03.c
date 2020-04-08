#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num, cont = 0, par, impar, resp;

    while (cont != 4)
    {
        printf("Digite um numero: ");
        scanf("%i", &num);

        resp = num % 2;
        if (resp == 0)
        {
            par = par + 1;
            
        }
        else 
        {
            impar = impar + 1;
        }

        cont = cont + 1;
    }
    
    printf("Total de:\n %i numeros pares\n %i numeros impares", par, impar);
    
    system("pause");
    return 0;
}