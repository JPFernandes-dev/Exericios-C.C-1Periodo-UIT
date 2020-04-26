#include<stdlib.h>
#include<stdio.h>

int main () {
    int cont = 0, id = 0;
    int kids = 0,  ado = 0;
    int jovens = 0, adultos = 0;

    while (cont != 4) {
        printf("Qual sua idade: ");
        scanf("%i", &id);
    
        if (id >= 0 && id <= 12) {
            kids = kids + 1;
        }

        else if (id >= 13 && id <= 16) {
             ado =  ado + 1;
        }

        else if (id >= 17 && id <= 21) {
            jovens = jovens + 1;
        }

        else if (id >= 22) {
            adultos = adultos + 1;
        }

        else {
            printf("Idade invalida");
        }
        
        cont = cont + 1;
    }
    
    printf("Total de:\n %i Crincas\n %i Adolescentes\n %i Jovens\n %i Adultos", kids, ado, jovens, adultos);
    
    system("pause");
    return 0;
}